#define pr_fmt(fmt)  "Hyper-V: " fmt

#include <linux/hyperv.h>
#include <linux/log2.h>
#include <linux/slab.h>
#include <linux/types.h>

#include <asm/mshyperv.h>
#include <asm/msr.h>
#include <asm/tlbflush.h>

#define CREATE_TRACE_POINTS
#include <asm/trace/hyperv.h>

/* HvFlushVirtualAddressSpace, HvFlushVirtualAddressList hypercalls */
struct hv_flush_pcpu {
	u64 address_space;
	u64 flags;
	u64 processor_mask;
	u64 gva_list[];
};

/* HvFlushVirtualAddressSpaceEx, HvFlushVirtualAddressListEx hypercalls */
struct hv_flush_pcpu_ex {
	u64 address_space;
	u64 flags;
	struct hv_vpset hv_vp_set;
	u64 gva_list[];
};

/* Each gva in gva_list encodes up to 4096 pages to flush */
#define HV_TLB_FLUSH_UNIT (4096 * PAGE_SIZE)

static struct hv_flush_pcpu __percpu **pcpu_flush;

static struct hv_flush_pcpu_ex __percpu **pcpu_flush_ex;

/*
 * Fills in gva_list starting from offset. Returns the number of items added.
 */
static inline int fill_gva_list(u64 gva_list[], int offset,
				unsigned long start, unsigned long end)
{
	int gva_n = offset;
	unsigned long cur = start, diff;

	do {
		diff = end > cur ? end - cur : 0;

		gva_list[gva_n] = cur & PAGE_MASK;
		/*
		 * Lower 12 bits encode the number of additional
		 * pages to flush (in addition to the 'cur' page).
		 */
		if (diff >= HV_TLB_FLUSH_UNIT)
			gva_list[gva_n] |= ~PAGE_MASK;
		else if (diff)
			gva_list[gva_n] |= (diff - 1) >> PAGE_SHIFT;

		cur += HV_TLB_FLUSH_UNIT;
		gva_n++;

	} while (cur < end);

	return gva_n - offset;
}

static void hyperv_flush_tlb_others(const struct cpumask *cpus,
				    struct mm_struct *mm,
				    unsigned long start,
				    unsigned long end)
{
	int cpu, vcpu, gva_n, max_gvas;
	struct hv_flush_pcpu **flush_pcpu;
	struct hv_flush_pcpu *flush;
	u64 status = U64_MAX;
	unsigned long flags;

	trace_hyperv_mmu_flush_tlb_others(cpus, mm, start, end);

	if (!pcpu_flush || !hv_hypercall_pg)
		goto do_native;

	if (cpumask_empty(cpus))
		return;

	local_irq_save(flags);

	flush_pcpu = this_cpu_ptr(pcpu_flush);

	if (unlikely(!*flush_pcpu))
		*flush_pcpu = page_address(alloc_page(GFP_ATOMIC));

	flush = *flush_pcpu;

	if (unlikely(!flush)) {
		local_irq_restore(flags);
		goto do_native;
	}

	if (mm) {
		/*
		 * AddressSpace argument must match the CR3 with PCID bits
		 * stripped out.
		 */
		flush->address_space = virt_to_phys(mm->pgd);
		flush->address_space &= CR3_ADDR_MASK;
		flush->flags = 0;
	} else {
		flush->address_space = 0;
		flush->flags = HV_FLUSH_ALL_VIRTUAL_ADDRESS_SPACES;
	}

	flush->processor_mask = 0;
	if (cpumask_equal(cpus, cpu_present_mask)) {
		flush->flags |= HV_FLUSH_ALL_PROCESSORS;
	} else {
		for_each_cpu(cpu, cpus) {
			vcpu = hv_cpu_number_to_vp_number(cpu);
			if (vcpu >= 64)
				goto do_native;

			__set_bit(vcpu, (unsigned long *)
				  &flush->processor_mask);
		}
	}

	/*
	 * We can flush not more than max_gvas with one hypercall. Flush the
	 * whole address space if we were asked to do more.
	 */
	max_gvas = (PAGE_SIZE - sizeof(*flush)) / sizeof(flush->gva_list[0]);

	if (end == TLB_FLUSH_ALL) {
		flush->flags |= HV_FLUSH_NON_GLOBAL_MAPPINGS_ONLY;
		status = hv_do_hypercall(HVCALL_FLUSH_VIRTUAL_ADDRESS_SPACE,
					 flush, NULL);
	} else if (end &&
		   ((end - start)/HV_TLB_FLUSH_UNIT) > max_gvas) {
		status = hv_do_hypercall(HVCALL_FLUSH_VIRTUAL_ADDRESS_SPACE,
					 flush, NULL);
	} else {
		gva_n = fill_gva_list(flush->gva_list, 0,
				      start, end);
		status = hv_do_rep_hypercall(HVCALL_FLUSH_VIRTUAL_ADDRESS_LIST,
					     gva_n, 0, flush, NULL);
	}

	local_irq_restore(flags);

	if (!(status & HV_HYPERCALL_RESULT_MASK))
		return;
do_native:
	native_flush_tlb_others(cpus, mm, start, end);
}

static void hyperv_flush_tlb_others_ex(const struct cpumask *cpus,
				       struct mm_struct *mm,
				       unsigned long start,
				       unsigned long end)
{
	int nr_bank = 0, max_gvas, gva_n;
	struct hv_flush_pcpu_ex **flush_pcpu;
	struct hv_flush_pcpu_ex *flush;
	u64 status = U64_MAX;
	unsigned long flags;

	trace_hyperv_mmu_flush_tlb_others(cpus, mm, start, end);

	if (!pcpu_flush_ex || !hv_hypercall_pg)
		goto do_native;

	if (cpumask_empty(cpus))
		return;

	local_irq_save(flags);

	flush_pcpu = this_cpu_ptr(pcpu_flush_ex);

	if (unlikely(!*flush_pcpu))
		*flush_pcpu = page_address(alloc_page(GFP_ATOMIC));

	flush = *flush_pcpu;

	if (unlikely(!flush)) {
		local_irq_restore(flags);
		goto do_native;
	}

	if (mm) {
		/*
		 * AddressSpace argument must match the CR3 with PCID bits
		 * stripped out.
		 */
		flush->address_space = virt_to_phys(mm->pgd);
		flush->address_space &= CR3_ADDR_MASK;
		flush->flags = 0;
	} else {
		flush->address_space = 0;
		flush->flags = HV_FLUSH_ALL_VIRTUAL_ADDRESS_SPACES;
	}

	flush->hv_vp_set.valid_bank_mask = 0;

	if (!cpumask_equal(cpus, cpu_present_mask)) {
		flush->hv_vp_set.format = HV_GENERIC_SET_SPARSE_4K;
		nr_bank = cpumask_to_vpset(&(flush->hv_vp_set), cpus);
	}

	if (!nr_bank) {
		flush->hv_vp_set.format = HV_GENERIC_SET_ALL;
		flush->flags |= HV_FLUSH_ALL_PROCESSORS;
	}

	/*
	 * We can flush not more than max_gvas with one hypercall. Flush the
	 * whole address space if we were asked to do more.
	 */
	max_gvas =
		(PAGE_SIZE - sizeof(*flush) - nr_bank *
		 sizeof(flush->hv_vp_set.bank_contents[0])) /
		sizeof(flush->gva_list[0]);

	if (end == TLB_FLUSH_ALL) {
		flush->flags |= HV_FLUSH_NON_GLOBAL_MAPPINGS_ONLY;
		status = hv_do_rep_hypercall(
			HVCALL_FLUSH_VIRTUAL_ADDRESS_SPACE_EX,
			0, nr_bank, flush, NULL);
	} else if (end &&
		   ((end - start)/HV_TLB_FLUSH_UNIT) > max_gvas) {
		status = hv_do_rep_hypercall(
			HVCALL_FLUSH_VIRTUAL_ADDRESS_SPACE_EX,
			0, nr_bank, flush, NULL);
	} else {
		gva_n = fill_gva_list(flush->gva_list, nr_bank,
				      start, end);
		status = hv_do_rep_hypercall(
			HVCALL_FLUSH_VIRTUAL_ADDRESS_LIST_EX,
			gva_n, nr_bank, flush, NULL);
	}

	local_irq_restore(flags);

	if (!(status & HV_HYPERCALL_RESULT_MASK))
		return;
do_native:
	native_flush_tlb_others(cpus, mm, start, end);
}

/* RHEL-only, see x86/mm/gup.c */
extern struct static_key rh_flush_tlb_others_native;

void hyperv_setup_mmu_ops(void)
{
	if (!(ms_hyperv.hints & HV_X64_REMOTE_TLB_FLUSH_RECOMMENDED))
		return;

	if (!(ms_hyperv.hints & HV_X64_EX_PROCESSOR_MASKS_RECOMMENDED)) {
		pr_info("Using hypercall for remote TLB flush\n");
		pv_mmu_ops.flush_tlb_others = hyperv_flush_tlb_others;
	} else {
		pr_info("Using ext hypercall for remote TLB flush\n");
		pv_mmu_ops.flush_tlb_others = hyperv_flush_tlb_others_ex;
	}
}

void hyper_alloc_mmu(void)
{
	if (!(ms_hyperv.hints & HV_X64_REMOTE_TLB_FLUSH_RECOMMENDED))
		return;

	static_key_slow_dec(&rh_flush_tlb_others_native);

	if (!(ms_hyperv.hints & HV_X64_EX_PROCESSOR_MASKS_RECOMMENDED))
		pcpu_flush = alloc_percpu(struct hv_flush_pcpu *);
	else
		pcpu_flush_ex = alloc_percpu(struct hv_flush_pcpu_ex *);
}

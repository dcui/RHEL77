#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x16512db3, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xad075358, __VMLINUX_SYMBOL_STR(amd_iommu_rlookup_table) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9cfb3794, __VMLINUX_SYMBOL_STR(amd_iommu_domain_clear_gcr3) },
	{ 0xa408cde9, __VMLINUX_SYMBOL_STR(amd_iommu_domain_direct_map) },
	{ 0xf71ad5f6, __VMLINUX_SYMBOL_STR(iommu_attach_group) },
	{ 0x4a10613b, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister_rhel7) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x92d4c9d7, __VMLINUX_SYMBOL_STR(amd_iommu_domain_enable_v2) },
	{ 0x7d9e6304, __VMLINUX_SYMBOL_STR(translation_pre_enabled) },
	{ 0xd508fb7, __VMLINUX_SYMBOL_STR(amd_iommu_flush_page) },
	{ 0x45599a23, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xf7a340e7, __VMLINUX_SYMBOL_STR(amd_iommu_complete_ppr) },
	{ 0x3dbd4eec, __VMLINUX_SYMBOL_STR(amd_iommu_flush_tlb) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd683ee53, __VMLINUX_SYMBOL_STR(pci_get_bus_and_slot) },
	{ 0xb6245b09, __VMLINUX_SYMBOL_STR(mmu_notifier_register_rhel7) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbd67c867, __VMLINUX_SYMBOL_STR(get_task_mm) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x65d489c3, __VMLINUX_SYMBOL_STR(get_dev_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xee72555f, __VMLINUX_SYMBOL_STR(iommu_domain_alloc) },
	{ 0x3323e4fa, __VMLINUX_SYMBOL_STR(iommu_domain_free) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x28821393, __VMLINUX_SYMBOL_STR(amd_iommu_domain_set_gcr3) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x59aa8094, __VMLINUX_SYMBOL_STR(iommu_detach_group) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x89485687, __VMLINUX_SYMBOL_STR(iommu_group_put) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xfd4a336b, __VMLINUX_SYMBOL_STR(handle_mm_fault) },
	{ 0x76fb08a7, __VMLINUX_SYMBOL_STR(amd_iommu_unregister_ppr_notifier) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x48d50e79, __VMLINUX_SYMBOL_STR(amd_iommu_register_ppr_notifier) },
	{ 0xafd5ff2c, __VMLINUX_SYMBOL_STR(amd_iommu_v2_supported) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xdff1420e, __VMLINUX_SYMBOL_STR(iommu_group_get) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x441bf3a3, __VMLINUX_SYMBOL_STR(find_extend_vma) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "32AF2CE3FBC3EAFF1B1DF36");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

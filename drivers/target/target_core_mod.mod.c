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
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x377ba77d, __VMLINUX_SYMBOL_STR(kernel_write) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x1bdf4c07, __VMLINUX_SYMBOL_STR(configfs_undepend_item) },
	{ 0x4d0f3fd7, __VMLINUX_SYMBOL_STR(percpu_ida_destroy) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x28a2ed02, __VMLINUX_SYMBOL_STR(scsi_build_sense_buffer) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0x9f6b4c62, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x89a95884, __VMLINUX_SYMBOL_STR(config_item_put) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x912b5f0b, __VMLINUX_SYMBOL_STR(filter_current_check_discard) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xf5ce272b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x78dd20fb, __VMLINUX_SYMBOL_STR(configfs_depend_item) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xa0b5b192, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xe2253bd7, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xbf7350b7, __VMLINUX_SYMBOL_STR(__percpu_ida_init) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xc770d15c, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x5226005a, __VMLINUX_SYMBOL_STR(sg_miter_start) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x72ea7b2d, __VMLINUX_SYMBOL_STR(scsi_device_type) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x97a57333, __VMLINUX_SYMBOL_STR(crc_t10dif_update) },
	{ 0xac41c6d8, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf3e42a05, __VMLINUX_SYMBOL_STR(sg_miter_stop) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x7e5bef8b, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xd3a99a6f, __VMLINUX_SYMBOL_STR(configfs_remove_default_groups) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0xfe750b57, __VMLINUX_SYMBOL_STR(configfs_register_subsystem) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x3de2640, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0xae1f6cb3, __VMLINUX_SYMBOL_STR(sg_miter_next) },
	{ 0xdd57e2b5, __VMLINUX_SYMBOL_STR(percpu_ref_exit) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x5f31288f, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x81ceff2, __VMLINUX_SYMBOL_STR(ftrace_print_hex_seq) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x2f021678, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x7177984c, __VMLINUX_SYMBOL_STR(configfs_unregister_subsystem) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x3dfc436e, __VMLINUX_SYMBOL_STR(percpu_ref_kill_and_confirm) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71995c4e, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xd6dc0d88, __VMLINUX_SYMBOL_STR(match_u64) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x47b6a10f, __VMLINUX_SYMBOL_STR(ftrace_print_symbols_seq) },
	{ 0xc666a132, __VMLINUX_SYMBOL_STR(crc_t10dif) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x2e2a42c9, __VMLINUX_SYMBOL_STR(percpu_ref_init) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x5128c858, __VMLINUX_SYMBOL_STR(config_group_init) },
	{ 0x4b55313f, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x9c7c731b, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-t10dif";


MODULE_INFO(srcversion, "7DC6B520C0771510CCED6AF");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xad55c28e, __VMLINUX_SYMBOL_STR(scsi_dh_set_params) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x893aa4a2, __VMLINUX_SYMBOL_STR(dm_table_set_type) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x304f1d09, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x64563a77, __VMLINUX_SYMBOL_STR(dm_path_uevent) },
	{ 0x2979b801, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x24347df5, __VMLINUX_SYMBOL_STR(dm_use_blk_mq) },
	{ 0xfcd652d7, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x95af57f3, __VMLINUX_SYMBOL_STR(scsi_dh_attached_handler_name) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xc7d094b5, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x8628a0cb, __VMLINUX_SYMBOL_STR(blk_lld_busy) },
	{ 0x11d88672, __VMLINUX_SYMBOL_STR(scsi_dh_activate) },
	{ 0x98fa1e20, __VMLINUX_SYMBOL_STR(dm_get_reserved_rq_based_ios) },
	{ 0x33f324ab, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xf9d7e206, __VMLINUX_SYMBOL_STR(scsi_dh_attach) },
	{ 0x8c6b8fa3, __VMLINUX_SYMBOL_STR(blk_mq_alloc_request) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0x93a6e0b2, __VMLINUX_SYMBOL_STR(io_schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x11e0ec41, __VMLINUX_SYMBOL_STR(dm_read_arg) },
	{ 0x8ff9b09d, __VMLINUX_SYMBOL_STR(dm_suspended) },
	{ 0xd42803ea, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x593a36c2, __VMLINUX_SYMBOL_STR(scsi_dh_handler_exist) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x89b58b55, __VMLINUX_SYMBOL_STR(blk_mq_free_request) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x94e57433, __VMLINUX_SYMBOL_STR(dm_mq_kick_requeue_list) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0xb71d6391, __VMLINUX_SYMBOL_STR(dm_device_name) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x329d0b02, __VMLINUX_SYMBOL_STR(scsi_dh_detach) },
	{ 0x660c95fc, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0x61d4b119, __VMLINUX_SYMBOL_STR(dm_noflush_suspending) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x37af3190, __VMLINUX_SYMBOL_STR(dm_table_run_md_queue_async) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod";


MODULE_INFO(srcversion, "985A03DCAF053D4910E53EE");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

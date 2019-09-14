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
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc87a72a0, __VMLINUX_SYMBOL_STR(ata_std_prereset) },
	{ 0x576274d6, __VMLINUX_SYMBOL_STR(ata_port_wait_eh) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb9f82883, __VMLINUX_SYMBOL_STR(sas_remove_children) },
	{ 0x796959fa, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x1b7e6c65, __VMLINUX_SYMBOL_STR(blk_queue_free_tags) },
	{ 0xdf01c89e, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xb1d5c79a, __VMLINUX_SYMBOL_STR(blk_abort_request) },
	{ 0x4a7e9d31, __VMLINUX_SYMBOL_STR(scsi_block_requests) },
	{ 0xd89b7960, __VMLINUX_SYMBOL_STR(ata_std_sched_eh) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x31612c90, __VMLINUX_SYMBOL_STR(sas_port_free) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xca3b4896, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x68bf9e03, __VMLINUX_SYMBOL_STR(scsi_unblock_requests) },
	{ 0x33eb1b43, __VMLINUX_SYMBOL_STR(ata_sas_slave_configure) },
	{ 0x3da5904c, __VMLINUX_SYMBOL_STR(ata_scsi_cmd_error_handler) },
	{ 0x46f0aa07, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x648919b6, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1d193f51, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0xc770719d, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0x454eb79c, __VMLINUX_SYMBOL_STR(ata_sas_port_suspend) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xbc930d80, __VMLINUX_SYMBOL_STR(ata_sas_port_init) },
	{ 0x5de1b3d3, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x30272314, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0x5d5be2ae, __VMLINUX_SYMBOL_STR(ata_sas_async_probe) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf95b8e05, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf5fc28ff, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x51348760, __VMLINUX_SYMBOL_STR(sas_rphy_delete) },
	{ 0xbed473a9, __VMLINUX_SYMBOL_STR(ata_sas_port_stop) },
	{ 0x63e10e76, __VMLINUX_SYMBOL_STR(scsi_queue_work) },
	{ 0xb086f1e3, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x69268f6e, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xc47450df, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd7db098b, __VMLINUX_SYMBOL_STR(ata_std_error_handler) },
	{ 0x903730f9, __VMLINUX_SYMBOL_STR(ata_scsi_port_error_handler) },
	{ 0xa47a803c, __VMLINUX_SYMBOL_STR(ata_sas_port_start) },
	{ 0x801b3ea1, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x3153fbb7, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe23698, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xf811e69d, __VMLINUX_SYMBOL_STR(scsi_eh_flush_done_q) },
	{ 0x1ace107f, __VMLINUX_SYMBOL_STR(ata_port_schedule_eh) },
	{ 0xb1c0c1c2, __VMLINUX_SYMBOL_STR(async_schedule_domain) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x50cf960a, __VMLINUX_SYMBOL_STR(ata_sas_port_alloc) },
	{ 0x2a8b4f7a, __VMLINUX_SYMBOL_STR(ata_noop_qc_prep) },
	{ 0x74b4c6f6, __VMLINUX_SYMBOL_STR(scsi_eh_finish_cmd) },
	{ 0x861130d, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x1739ee0e, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd09152a8, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x26c90ea4, __VMLINUX_SYMBOL_STR(scsi_eh_get_sense) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x31500fab, __VMLINUX_SYMBOL_STR(ata_sas_port_resume) },
	{ 0x294f285c, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x89ea4da8, __VMLINUX_SYMBOL_STR(sas_port_get_phy) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0xc4f56f2, __VMLINUX_SYMBOL_STR(scsi_eh_ready_devs) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ca4bf88, __VMLINUX_SYMBOL_STR(async_synchronize_full_domain) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xcf4a90d9, __VMLINUX_SYMBOL_STR(sas_port_alloc) },
	{ 0xdfca0711, __VMLINUX_SYMBOL_STR(ata_host_init) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf699f219, __VMLINUX_SYMBOL_STR(scsi_schedule_eh) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x822548a3, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0xd440d797, __VMLINUX_SYMBOL_STR(sas_rphy_unlink) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x5af17806, __VMLINUX_SYMBOL_STR(ata_sas_queuecmd) },
	{ 0xbd640985, __VMLINUX_SYMBOL_STR(ata_sas_port_destroy) },
	{ 0xa38602cd, __VMLINUX_SYMBOL_STR(drain_workqueue) },
	{ 0xeceff416, __VMLINUX_SYMBOL_STR(sas_rphy_remove) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xeb0a76dc, __VMLINUX_SYMBOL_STR(ata_sas_scsi_ioctl) },
	{ 0x5446486b, __VMLINUX_SYMBOL_STR(__ata_change_queue_depth) },
	{ 0xeb8f3ba, __VMLINUX_SYMBOL_STR(ata_qc_complete) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata,scsi_transport_sas";


MODULE_INFO(srcversion, "4C9ED5230BB1B7E766BE78A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

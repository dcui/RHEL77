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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xbe76fab, __VMLINUX_SYMBOL_STR(mptscsih_host_attrs) },
	{ 0x5d1dd2d9, __VMLINUX_SYMBOL_STR(mptscsih_show_info) },
	{ 0x51e57361, __VMLINUX_SYMBOL_STR(mptscsih_bios_param) },
	{ 0x77c364b1, __VMLINUX_SYMBOL_STR(mptscsih_change_queue_depth) },
	{ 0xa0b472e3, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x64d69f04, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x1590997c, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0xa7d2914, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x20d15356, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x8c8bb682, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x48bdeb27, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x796959fa, __VMLINUX_SYMBOL_STR(sas_release_transport) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7c8aab4d, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0xbe357b2, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x494ec60c, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xea919dea, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0x90571a0c, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x2fc537b1, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0xf95b8e05, __VMLINUX_SYMBOL_STR(sas_attach_transport) },
	{ 0xdf01c89e, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0xe382e7b9, __VMLINUX_SYMBOL_STR(mptscsih_get_scsi_lookup) },
	{ 0x9072d71a, __VMLINUX_SYMBOL_STR(mpt_GetIocState) },
	{ 0x4e35e077, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg1) },
	{ 0x6de8cc95, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_get_num_paths) },
	{ 0x4346c54a, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x344f3bd8, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x31868817, __VMLINUX_SYMBOL_STR(mptbase_sas_persist_operation) },
	{ 0x40020cf9, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xca606326, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x6a5d9b5c, __VMLINUX_SYMBOL_STR(mptscsih_flush_running_cmds) },
	{ 0x7fc6c4ce, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0x804d7d23, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x68d95008, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x1447ec08, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3153fbb7, __VMLINUX_SYMBOL_STR(sas_port_mark_backlink) },
	{ 0x898e5152, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0x861130d, __VMLINUX_SYMBOL_STR(sas_phy_free) },
	{ 0xe23698, __VMLINUX_SYMBOL_STR(sas_port_add) },
	{ 0x7da963bb, __VMLINUX_SYMBOL_STR(sas_port_alloc_num) },
	{ 0xca3b4896, __VMLINUX_SYMBOL_STR(sas_phy_add) },
	{ 0x1739ee0e, __VMLINUX_SYMBOL_STR(sas_phy_alloc) },
	{ 0xb086f1e3, __VMLINUX_SYMBOL_STR(sas_expander_alloc) },
	{ 0x46f0aa07, __VMLINUX_SYMBOL_STR(sas_port_add_phy) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x648919b6, __VMLINUX_SYMBOL_STR(sas_rphy_free) },
	{ 0xc770719d, __VMLINUX_SYMBOL_STR(sas_rphy_add) },
	{ 0xc47450df, __VMLINUX_SYMBOL_STR(sas_end_device_alloc) },
	{ 0x7e142e03, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x1abadf9e, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x69268f6e, __VMLINUX_SYMBOL_STR(sas_read_port_mode_page) },
	{ 0x203c78c9, __VMLINUX_SYMBOL_STR(mpt_raid_phys_disk_pg0) },
	{ 0x29f01d7a, __VMLINUX_SYMBOL_STR(starget_for_each_device) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xecf3dfda, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_response_code) },
	{ 0x6786f92f, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x38351bdb, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0xd3da7018, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0x39d22e0, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x30272314, __VMLINUX_SYMBOL_STR(sas_port_delete) },
	{ 0x1d193f51, __VMLINUX_SYMBOL_STR(sas_port_delete_phy) },
	{ 0x961d2882, __VMLINUX_SYMBOL_STR(mpt_detach) },
	{ 0x66774f4d, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0xe0649493, __VMLINUX_SYMBOL_STR(sas_remove_host) },
	{ 0x5f865f61, __VMLINUX_SYMBOL_STR(mpt_Soft_Hard_ResetHandler) },
	{ 0xc19334ff, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xfb693b8b, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0xf97f0ba0, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x3ad07096, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x8ec1f732, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x564ca28b, __VMLINUX_SYMBOL_STR(mpt_clear_taskmgmt_in_progress_flag) },
	{ 0xe3c165e8, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame_hi_pri) },
	{ 0x48fc7e04, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0x159414d, __VMLINUX_SYMBOL_STR(mpt_set_taskmgmt_in_progress_flag) },
	{ 0xdbef80a4, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0x126f2c07, __VMLINUX_SYMBOL_STR(device_reprobe) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xf5fc28ff, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_sas";

MODULE_ALIAS("pci:v00001000d00000050sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000054sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000056sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000058sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000059sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F49629944D9066133BA4FF9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x64d69f04, __VMLINUX_SYMBOL_STR(mptscsih_host_reset) },
	{ 0x2e04994f, __VMLINUX_SYMBOL_STR(mptscsih_bus_reset) },
	{ 0x1590997c, __VMLINUX_SYMBOL_STR(mptscsih_dev_reset) },
	{ 0xa7d2914, __VMLINUX_SYMBOL_STR(mptscsih_abort) },
	{ 0x20d15356, __VMLINUX_SYMBOL_STR(mptscsih_info) },
	{ 0x93457058, __VMLINUX_SYMBOL_STR(mptscsih_shutdown) },
	{ 0x48bdeb27, __VMLINUX_SYMBOL_STR(mptscsih_suspend) },
	{ 0xc47c22e8, __VMLINUX_SYMBOL_STR(mpt_deregister) },
	{ 0x4526289b, __VMLINUX_SYMBOL_STR(mpt_event_deregister) },
	{ 0xd9a92a75, __VMLINUX_SYMBOL_STR(mpt_reset_deregister) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x541c3165, __VMLINUX_SYMBOL_STR(spi_release_transport) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7c8aab4d, __VMLINUX_SYMBOL_STR(mpt_reset_register) },
	{ 0xbe357b2, __VMLINUX_SYMBOL_STR(mpt_event_register) },
	{ 0x494ec60c, __VMLINUX_SYMBOL_STR(mptscsih_scandv_complete) },
	{ 0xea919dea, __VMLINUX_SYMBOL_STR(mptscsih_taskmgmt_complete) },
	{ 0x90571a0c, __VMLINUX_SYMBOL_STR(mpt_register) },
	{ 0x2fc537b1, __VMLINUX_SYMBOL_STR(mptscsih_io_done) },
	{ 0x20af0df5, __VMLINUX_SYMBOL_STR(spi_attach_transport) },
	{ 0x5182c956, __VMLINUX_SYMBOL_STR(scsi_scan_target) },
	{ 0x344f3bd8, __VMLINUX_SYMBOL_STR(mpt_findImVolumes) },
	{ 0x1abadf9e, __VMLINUX_SYMBOL_STR(mptscsih_slave_configure) },
	{ 0x8ec1f732, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x76d8da30, __VMLINUX_SYMBOL_STR(spi_display_xfer_agreement) },
	{ 0x5614749d, __VMLINUX_SYMBOL_STR(spi_dv_device) },
	{ 0xfb693b8b, __VMLINUX_SYMBOL_STR(mpt_free_msg_frame) },
	{ 0xd84805f, __VMLINUX_SYMBOL_STR(mpt_HardResetHandler) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6786f92f, __VMLINUX_SYMBOL_STR(mptscsih_raid_id_to_num) },
	{ 0x7fc6c4ce, __VMLINUX_SYMBOL_STR(mpt_attach) },
	{ 0xc1eaaa65, __VMLINUX_SYMBOL_STR(scsi_scan_host) },
	{ 0x3ab6991, __VMLINUX_SYMBOL_STR(mptscsih_IssueTaskMgmt) },
	{ 0x40020cf9, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xca606326, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xa0b472e3, __VMLINUX_SYMBOL_STR(mptscsih_slave_destroy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7e142e03, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xdfb5968a, __VMLINUX_SYMBOL_STR(scsi_device_lookup_by_target) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x38351bdb, __VMLINUX_SYMBOL_STR(mpt_config) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x39d22e0, __VMLINUX_SYMBOL_STR(mptscsih_ioc_reset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc19334ff, __VMLINUX_SYMBOL_STR(mpt_put_msg_frame) },
	{ 0x48fc7e04, __VMLINUX_SYMBOL_STR(mpt_get_msg_frame) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x4ec7712c, __VMLINUX_SYMBOL_STR(mptscsih_event_process) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xd3da7018, __VMLINUX_SYMBOL_STR(mptscsih_is_phys_disk) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xf97f0ba0, __VMLINUX_SYMBOL_STR(scsi_print_command) },
	{ 0x3ad07096, __VMLINUX_SYMBOL_STR(mptscsih_qcmd) },
	{ 0x66774f4d, __VMLINUX_SYMBOL_STR(mptscsih_remove) },
	{ 0x7f99a70c, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x8c8bb682, __VMLINUX_SYMBOL_STR(mptscsih_resume) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf5fc28ff, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mptscsih,mptbase,scsi_transport_spi";

MODULE_ALIAS("pci:v00001000d00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000117Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000040sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "EEEEE9FE1AD0986821B7819");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x6fed14b2, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x680b4229, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xe99f1c8d, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x2db8ca2f, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xa3fc65c4, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x3da94ee3, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9f2e91a9, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0xf07a4d6e, __VMLINUX_SYMBOL_STR(ata_sff_port_ops) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x17aef392, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0x8f8a365c, __VMLINUX_SYMBOL_STR(ata_sff_queue_delayed_work) },
	{ 0x3a4f6a32, __VMLINUX_SYMBOL_STR(ata_sff_interrupt) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x4bfe9ed3, __VMLINUX_SYMBOL_STR(dma_release_channel) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xe9dd3d2d, __VMLINUX_SYMBOL_STR(dma_request_slave_channel) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe89bd243, __VMLINUX_SYMBOL_STR(ata_sff_queue_work) },
	{ 0x432ec793, __VMLINUX_SYMBOL_STR(ata_sff_dev_select) },
	{ 0xa4075390, __VMLINUX_SYMBOL_STR(ata_sff_qc_issue) },
	{ 0x9de3580a, __VMLINUX_SYMBOL_STR(ata_host_detach) },
	{ 0x24c3e5a2, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x3a2abdbf, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xdde5e365, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0xe9e50930, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xddb70551, __VMLINUX_SYMBOL_STR(ata_host_alloc) },
	{ 0x7333a1ab, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0x169a2664, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0xa2fc2879, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xae1bcb49, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1f635d72, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xa3d95af1, __VMLINUX_SYMBOL_STR(ata_sff_freeze) },
	{ 0x716a97ae, __VMLINUX_SYMBOL_STR(ata_sff_dma_pause) },
	{ 0xea1bd58d, __VMLINUX_SYMBOL_STR(ata_sff_error_handler) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9d7dff3e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf0f72dee, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe86a6a77, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x7a933c98, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xad5a6715, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";


MODULE_INFO(srcversion, "0C335910D3BA9FE49499EE7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

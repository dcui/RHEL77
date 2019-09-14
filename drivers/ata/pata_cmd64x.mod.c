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
	{ 0x5d6cb968, __VMLINUX_SYMBOL_STR(ata_bmdma_port_ops) },
	{ 0xf8e9ff27, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0x2f1a8361, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0x7cc0b9e9, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf6e874f5, __VMLINUX_SYMBOL_STR(ata_timing_merge) },
	{ 0xc1e930dc, __VMLINUX_SYMBOL_STR(ata_dev_pair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdf80aed, __VMLINUX_SYMBOL_STR(ata_timing_compute) },
	{ 0x5801c088, __VMLINUX_SYMBOL_STR(ata_bmdma_stop) },
	{ 0xaba843b9, __VMLINUX_SYMBOL_STR(ata_bmdma_irq_clear) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9f3fbc36, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_clear_simplex) },
	{ 0xd1576f44, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0xa3ad6e70, __VMLINUX_SYMBOL_STR(ata_dummy_port_info) },
	{ 0x8b90c524, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x17c754ae, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x9d7dff3e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf89a75fa, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001095d00000643sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000646sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000648sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001095d00000649sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BFB3909346074876EB3FA48");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x7cc0b9e9, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6648f859, __VMLINUX_SYMBOL_STR(ata_bmdma_qc_issue) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0x801b3ea1, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0x7857b38b, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0x5801c088, __VMLINUX_SYMBOL_STR(ata_bmdma_stop) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0xd1576f44, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_init_one) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x17c754ae, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00001103d00000004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000006sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00000009sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "8291890722CA4A9BB4D818F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

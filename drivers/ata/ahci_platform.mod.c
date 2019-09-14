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
	{ 0x4e3ae8fe, __VMLINUX_SYMBOL_STR(ahci_ops) },
	{ 0x243012c2, __VMLINUX_SYMBOL_STR(ahci_pmp_retry_srst_ops) },
	{ 0x8e924e68, __VMLINUX_SYMBOL_STR(ahci_sdev_attrs) },
	{ 0xecd853dc, __VMLINUX_SYMBOL_STR(ahci_shost_attrs) },
	{ 0x680b4229, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xe99f1c8d, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xcd95f710, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0x2db8ca2f, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xa3fc65c4, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x3da94ee3, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9f2e91a9, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x4cffd640, __VMLINUX_SYMBOL_STR(ata_platform_remove_one) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x9d7dff3e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e6df289, __VMLINUX_SYMBOL_STR(ahci_reset_em) },
	{ 0xf699f988, __VMLINUX_SYMBOL_STR(ahci_host_activate) },
	{ 0x8081c1da, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0xd25b0a6a, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3d09a10b, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0xbea09b31, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0xe9e50930, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0xbe7a5488, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xd4442b46, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0x2c0e0075, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0x7a933c98, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xad5a6715, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x7333a1ab, __VMLINUX_SYMBOL_STR(clk_get) },
	{ 0xe1b207bf, __VMLINUX_SYMBOL_STR(devm_ioremap) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa2fc2879, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x2e1ca751, __VMLINUX_SYMBOL_STR(clk_put) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf0f72dee, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x3a2abdbf, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x24c3e5a2, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci,libata";

MODULE_ALIAS("of:N*T*Csnps,spear-ahci*");
MODULE_ALIAS("platform:ahci");
MODULE_ALIAS("platform:imx53-ahci");
MODULE_ALIAS("platform:strict-ahci");

MODULE_INFO(srcversion, "89AB8ABF7130D9AC4C2EEC1");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xa13323d6, __VMLINUX_SYMBOL_STR(genphy_read_status) },
	{ 0xce1d739f, __VMLINUX_SYMBOL_STR(phy_drivers_unregister) },
	{ 0x28a4479d, __VMLINUX_SYMBOL_STR(phy_drivers_register) },
	{ 0xc8eb22e4, __VMLINUX_SYMBOL_STR(genphy_config_aneg) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20258da7, __VMLINUX_SYMBOL_STR(__mdiobus_read) },
	{ 0x2f7c350, __VMLINUX_SYMBOL_STR(__mdiobus_write) },
	{ 0x204cb1e8, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0x96ec7595, __VMLINUX_SYMBOL_STR(genphy_suspend) },
	{ 0x8b03a75f, __VMLINUX_SYMBOL_STR(genphy_resume) },
	{ 0x572e142a, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0xa33468b4, __VMLINUX_SYMBOL_STR(phy_modify_paged) },
	{ 0xe600e90b, __VMLINUX_SYMBOL_STR(phy_read_paged) },
	{ 0x812cc4c0, __VMLINUX_SYMBOL_STR(phy_write_paged) },
	{ 0x2448ad5a, __VMLINUX_SYMBOL_STR(genphy_config_init) },
	{ 0x98106b1e, __VMLINUX_SYMBOL_STR(phy_modify) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:0000000000011100110010??????????");

MODULE_INFO(srcversion, "1E5607C9BC4872CF5E4E73E");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

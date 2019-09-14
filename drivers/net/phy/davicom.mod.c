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
	{ 0x572e142a, __VMLINUX_SYMBOL_STR(mdiobus_write) },
	{ 0x204cb1e8, __VMLINUX_SYMBOL_STR(mdiobus_read) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("mdio:????000110000001101110001000????");
MODULE_ALIAS("mdio:????000110000001101110001010????");
MODULE_ALIAS("mdio:????000000011000000110111000????");

MODULE_INFO(srcversion, "E5510E52D35ECC1AB257B75");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
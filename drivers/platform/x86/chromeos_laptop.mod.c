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
	{ 0x9791ce47, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa17a969, __VMLINUX_SYMBOL_STR(i2c_put_adapter) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4bcc2ca0, __VMLINUX_SYMBOL_STR(i2c_new_probed_device) },
	{ 0xd059677d, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x87923536, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0xf379b3ac, __VMLINUX_SYMBOL_STR(i2c_bus_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("dmi*:svn*SAMSUNG*:pn*Lumpy*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Link*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Link*:");
MODULE_ALIAS("dmi*:svn*SAMSUNG*:pn*Lumpy*:");
MODULE_ALIAS("dmi*:svn*GOOGLE*:pn*Link*:");
MODULE_ALIAS("dmi*:pn*Parrot*:");
MODULE_ALIAS("dmi*:pn*Butterfly*:");
MODULE_ALIAS("dmi*:pn*Alex*:");
MODULE_ALIAS("dmi*:pn*Mario*:");
MODULE_ALIAS("dmi*:pn*ZGB*:");

MODULE_INFO(srcversion, "E808B1CA6AF0C8BDBAA093F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

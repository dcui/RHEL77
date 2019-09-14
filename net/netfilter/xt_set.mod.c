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
	{ 0xf99553e9, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xb370d544, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xe7f493e1, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xd342b5d6, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xfd8a5795, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1df159cf, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0x8ab4c6b2, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf345e556, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0x6fccdfdc, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_set";


MODULE_INFO(srcversion, "47DA3C09A4A173CF3056DE4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x5cb2b53e, __VMLINUX_SYMBOL_STR(tcp_unregister_congestion_control) },
	{ 0x6e96242f, __VMLINUX_SYMBOL_STR(tcp_register_congestion_control) },
	{ 0xd5405ddd, __VMLINUX_SYMBOL_STR(tcp_slow_start) },
	{ 0x8faa288e, __VMLINUX_SYMBOL_STR(tcp_cong_avoid_ai) },
	{ 0xad87fd56, __VMLINUX_SYMBOL_STR(tcp_reno_cong_avoid) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "EDE3CC30DC580A4965E1622");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
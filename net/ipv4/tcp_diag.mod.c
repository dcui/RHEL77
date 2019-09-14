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
	{ 0x63907b52, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xcaa0bbe0, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x438b880f, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0xf6cb27aa, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0x3a6a32b2, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x9196014f, __VMLINUX_SYMBOL_STR(tcp_get_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag";


MODULE_INFO(srcversion, "CE94B895ACFDEA7DE6FB8E5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

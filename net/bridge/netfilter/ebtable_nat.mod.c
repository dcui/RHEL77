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
	{ 0x52cd0415, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x7a14a46e, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xa87a6429, __VMLINUX_SYMBOL_STR(ebt_register_table) },
	{ 0x57f95590, __VMLINUX_SYMBOL_STR(ebt_unregister_table) },
	{ 0x44fef6a9, __VMLINUX_SYMBOL_STR(ebt_do_table) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ebtables";


MODULE_INFO(srcversion, "06230C80861FD2AE08D6BC4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

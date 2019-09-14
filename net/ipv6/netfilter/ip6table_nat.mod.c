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
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdb028c0, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xfc7f19a8, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xe6ce2344, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0x5c1b144e, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0xe6916f4e, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0x8d0bdf1d, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0x471edba6, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x67567795, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";


MODULE_INFO(srcversion, "0789CCE49F78BF2DE658BAA");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

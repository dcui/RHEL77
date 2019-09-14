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
	{ 0x9523fe13, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0x469350d0, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0x355ccf48, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0xbcc203b4, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x6ddf6687, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0x1e7a7658, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xde88b41e, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x6b8e5f75, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";


MODULE_INFO(srcversion, "291B36E315928812DAB1A47");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

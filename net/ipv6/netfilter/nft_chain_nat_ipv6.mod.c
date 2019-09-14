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
	{ 0x7c693dd3, __VMLINUX_SYMBOL_STR(nft_unregister_chain_type) },
	{ 0x548d9dea, __VMLINUX_SYMBOL_STR(nft_register_chain_type) },
	{ 0x5c1b144e, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x67567795, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0x8d0bdf1d, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xaadb3c58, __VMLINUX_SYMBOL_STR(nft_do_chain) },
	{ 0x1d8e65ad, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xe6916f4e, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables,nf_nat_ipv6";


MODULE_INFO(srcversion, "06988099527440867F233D5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
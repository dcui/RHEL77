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
	{ 0xa2db3c7f, __VMLINUX_SYMBOL_STR(nft_reject_policy) },
	{ 0x7d44c672, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xe81403ea, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x33803c72, __VMLINUX_SYMBOL_STR(nf_send_reset6) },
	{ 0xdd640c0e, __VMLINUX_SYMBOL_STR(nf_send_reset) },
	{ 0x3c5a7164, __VMLINUX_SYMBOL_STR(nf_send_unreach) },
	{ 0xddf15889, __VMLINUX_SYMBOL_STR(nft_reject_icmp_code) },
	{ 0xf6534dd7, __VMLINUX_SYMBOL_STR(nf_send_unreach6) },
	{ 0xe8cdab4e, __VMLINUX_SYMBOL_STR(nft_reject_icmpv6_code) },
	{ 0xa2078703, __VMLINUX_SYMBOL_STR(nft_reject_validate) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_reject,nf_tables,nf_reject_ipv6,nf_reject_ipv4";


MODULE_INFO(srcversion, "697C4C08F2B9A7968EB37CB");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

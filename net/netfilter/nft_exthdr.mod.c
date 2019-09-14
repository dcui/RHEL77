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
	{ 0x7d44c672, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xe81403ea, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xbd6381f1, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x1d8e65ad, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x50550bd5, __VMLINUX_SYMBOL_STR(nft_validate_register_store) },
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0x54be85b6, __VMLINUX_SYMBOL_STR(nft_parse_u32_check) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xfc323d, __VMLINUX_SYMBOL_STR(nft_dump_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "2C6C717EDB9A5B5CDC3B843");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
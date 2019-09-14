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
	{ 0xb80e8358, __VMLINUX_SYMBOL_STR(nft_meta_policy) },
	{ 0x900e0d91, __VMLINUX_SYMBOL_STR(nft_meta_get_dump) },
	{ 0x16c61060, __VMLINUX_SYMBOL_STR(nft_meta_set_dump) },
	{ 0xc88d3992, __VMLINUX_SYMBOL_STR(nft_meta_set_destroy) },
	{ 0x4fe843eb, __VMLINUX_SYMBOL_STR(nft_meta_set_init) },
	{ 0x88d59cb0, __VMLINUX_SYMBOL_STR(nft_meta_set_eval) },
	{ 0x7d44c672, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xe81403ea, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0x50550bd5, __VMLINUX_SYMBOL_STR(nft_validate_register_store) },
	{ 0x1e6b75a3, __VMLINUX_SYMBOL_STR(nft_parse_register) },
	{ 0xbefc2f54, __VMLINUX_SYMBOL_STR(nft_meta_get_init) },
	{ 0x88fffeb3, __VMLINUX_SYMBOL_STR(nft_meta_get_eval) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_meta,nf_tables";


MODULE_INFO(srcversion, "1AA4B2201418277E1FF8C60");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

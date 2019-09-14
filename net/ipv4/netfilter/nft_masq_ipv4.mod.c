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
	{ 0xe3b8ea21, __VMLINUX_SYMBOL_STR(nft_masq_policy) },
	{ 0x751c8e80, __VMLINUX_SYMBOL_STR(nft_masq_validate) },
	{ 0xb5f94122, __VMLINUX_SYMBOL_STR(nft_masq_dump) },
	{ 0x5ff1c9ff, __VMLINUX_SYMBOL_STR(nft_masq_init) },
	{ 0x3f5c468e, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_unregister_notifier) },
	{ 0x7d44c672, __VMLINUX_SYMBOL_STR(nft_unregister_expr) },
	{ 0xa1be6f21, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4_register_notifier) },
	{ 0xe81403ea, __VMLINUX_SYMBOL_STR(nft_register_expr) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xccea0a46, __VMLINUX_SYMBOL_STR(nf_nat_masquerade_ipv4) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nft_masq,nf_nat_masquerade_ipv4,nf_tables";


MODULE_INFO(srcversion, "317E004CF7232271D832AC2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

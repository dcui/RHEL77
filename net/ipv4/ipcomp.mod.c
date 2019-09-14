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
	{ 0x5c24e1ae, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x474c4197, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x27eb7aed, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xaf759b17, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xf811fa7f, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xb3c5211a, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x7767ab19, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x8f517b9c, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8ea459e4, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x9f58134b, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xa2cf1474, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x99b375de, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xed0965b4, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xce1bc9fc, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x28dc96b, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x7b244558, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x7744d82b, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "E5D4B87B2B20507D95944A4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x26e43ba5, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0x5c24e1ae, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x474c4197, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x27eb7aed, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xcb2491b5, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x986ecfea, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x7767ab19, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x44985622, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8ea459e4, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x7713b2c2, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x29ba4200, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x28dc96b, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x99b375de, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xed0965b4, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0xf1ca05a5, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_alloc_spi) },
	{ 0xce1bc9fc, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x73d120e9, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_spi_lookup) },
	{ 0x7b244558, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x7744d82b, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp,xfrm6_tunnel";


MODULE_INFO(srcversion, "46C1D87521CE8B31714C7AE");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

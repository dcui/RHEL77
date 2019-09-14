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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd8f7a6b1, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x996a7a85, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x983dd298, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x1cbb274, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xc374352d, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xd882525c, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0xcc782528, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0x3790b4d4, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xd96ed1b0, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0x3b1016cb, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0x4356efc8, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0xf226d5bb, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x4d040fba, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0xb7ab44ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xbd6381f1, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x75f9ecee, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x120cf9c, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x40c8849b, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a1b4f61, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "5423E96D03B15592D19D593");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x996a7a85, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x3121c9fd, __VMLINUX_SYMBOL_STR(nf_nat_helper_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd8f7a6b1, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x9dbe2f90, __VMLINUX_SYMBOL_STR(nf_nat_sdp_media_hook) },
	{ 0xc25accae, __VMLINUX_SYMBOL_STR(nf_nat_sdp_session_hook) },
	{ 0x230b62f5, __VMLINUX_SYMBOL_STR(nf_nat_sdp_port_hook) },
	{ 0xcd4e6649, __VMLINUX_SYMBOL_STR(nf_nat_sdp_addr_hook) },
	{ 0xe303c28e, __VMLINUX_SYMBOL_STR(nf_nat_sip_expect_hook) },
	{ 0xb58d687c, __VMLINUX_SYMBOL_STR(nf_nat_sip_seq_adjust_hook) },
	{ 0x33935d4d, __VMLINUX_SYMBOL_STR(nf_nat_sip_hook) },
	{ 0x4aeccf9f, __VMLINUX_SYMBOL_STR(nf_nat_helper_unregister) },
	{ 0x4d7276d8, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x56b88c04, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0xaaad8f04, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x47e402e, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x3d5844b3, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0xf0855649, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0x610c2894, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0xde9028cf, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0xf226d5bb, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xb7ab44ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x21ea3403, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x52395739, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x75f9ecee, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x120cf9c, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2a1b4f61, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "42E5288B3BB05DA394CEC7A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x8f309c10, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xb6164357, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x17eb7663, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x9fd6b70d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x60c8f919, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xeb846657, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x7fd49327, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x3604c615, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xb3c5211a, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x1b4a7f67, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x8f517b9c, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0xb6bb47d3, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x754d94d4, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xaf759b17, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0x7af48acb, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x17fe2928, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0xc1e05644, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe3675657, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x57d187ae, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc67826f9, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x7cc77177, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x8916920f, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x9f58134b, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7b244558, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xa2cf1474, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x28dc96b, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xd6e63310, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xbbcc0f2b, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0xbfb4427, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xf28b4732, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xfff5fd5c, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x8c054af7, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel";


MODULE_INFO(srcversion, "270CDE8AD1D4CE1152F9846");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

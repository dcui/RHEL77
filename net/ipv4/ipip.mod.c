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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8f309c10, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xb6164357, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x17eb7663, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x9fd6b70d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x60c8f919, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xeb846657, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x7fd49327, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x3604c615, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc028f43e, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x1b4a7f67, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x8aea9b45, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0xb6bb47d3, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa2cf1474, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x9f58134b, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7af48acb, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xc67826f9, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x30d08e95, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x7cc77177, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x65d9df0c, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xd6e63310, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x754d94d4, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xbfb4427, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xf99ab5d3, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5bfdc392, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
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
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "48AB6E8CCBFD23E0B62DD2A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

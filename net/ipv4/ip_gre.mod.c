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
	{ 0xb6bb47d3, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x9fd6b70d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x17eb7663, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x825f7b4b, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0x17fe2928, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x9f58134b, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xd6e63310, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0xba41806, __VMLINUX_SYMBOL_STR(__ip_tunnel_change_mtu) },
	{ 0x7401bdf4, __VMLINUX_SYMBOL_STR(ether_setup_rh) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x8212ba93, __VMLINUX_SYMBOL_STR(dst_cache_get_ip4) },
	{ 0xf99ab5d3, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdb896ddd, __VMLINUX_SYMBOL_STR(inetdev_by_index) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x65d9df0c, __VMLINUX_SYMBOL_STR(__iptunnel_pull_header) },
	{ 0xf28b4732, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xb6164357, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x1a0bbcc5, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xd1109edc, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0xfff5fd5c, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3604c615, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xeb846657, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x37c0628a, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x21c09756, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x7af48acb, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xbfb4427, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0x8f309c10, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7fd49327, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xc67826f9, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0x8c054af7, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xb4c011dc, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa2cf1474, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x8c053a79, __VMLINUX_SYMBOL_STR(ip_mc_inc_group) },
	{ 0xfbc25e3d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x754d94d4, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0x5bfdc392, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xb32ff9a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xb289f0ec, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1b4a7f67, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xaf375be2, __VMLINUX_SYMBOL_STR(dst_cache_set_ip4) },
	{ 0x9c49639d, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x60c8f919, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0xa38ee07d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x53a328ea, __VMLINUX_SYMBOL_STR(ip_mc_dec_group) },
	{ 0xf4275621, __VMLINUX_SYMBOL_STR(gre_parse_header) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x30d08e95, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,gre";


MODULE_INFO(srcversion, "1CA0BB25BD94E470FD88164");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xef6704d8, __VMLINUX_SYMBOL_STR(ip6_tnl_get_link_net) },
	{ 0x676f901b, __VMLINUX_SYMBOL_STR(ip6_tnl_get_iflink) },
	{ 0x9fd6b70d, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x7fd49327, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x3604c615, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x986ecfea, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0x1b4a7f67, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x44985622, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0xb6bb47d3, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xba18698e, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x29b9b836, __VMLINUX_SYMBOL_STR(xfrm6_rcv_tnl) },
	{ 0x785ef8d6, __VMLINUX_SYMBOL_STR(ip6_tnl_rcv_ctl) },
	{ 0x7713b2c2, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0x7b244558, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x29ba4200, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x28dc96b, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x62849ac7, __VMLINUX_SYMBOL_STR(dev_valid_name) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5948f2f0, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf50bb1a3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x310705af, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6b12c9a9, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x7cc77177, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xc1e05644, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x8916920f, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x17fe2928, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x10c0dec6, __VMLINUX_SYMBOL_STR(ip6_tnl_xmit_ctl) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xe3675657, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x57d187ae, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x28b1b59, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x67d8b281, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x7b58e478, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x49431a90, __VMLINUX_SYMBOL_STR(ip6_tnl_get_cap) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tunnel";


MODULE_INFO(srcversion, "EFF9BE9A6114E1F7D3673F7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

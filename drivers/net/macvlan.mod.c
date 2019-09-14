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
	{ 0x6b12c9a9, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2085edc, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xda76a06f, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xed34a913, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x9ec0cbcb, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0xfc5f7f78, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x150cbe00, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xe7cca8a0, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8b4e1a6, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x47ebe6bc, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x86c75c87, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x7401bdf4, __VMLINUX_SYMBOL_STR(ether_setup_rh) },
	{ 0xc2ffeb8d, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x3085bd19, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xc7d59b85, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0xf32543d8, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc49d3c41, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x532894bc, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xad27a3e7, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x86930455, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x31837cee, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xe2e5a21f, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x7fd49327, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x67d8b281, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xea836b48, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xafb37b9c, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x63ab8fbe, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0xbf3b8ed1, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf483ea1e, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x28b1b59, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x71f3f208, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa1aa398, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x1b4a7f67, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xec60539a, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0xabe11f44, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xabf89541, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x960429cb, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0x42c6546a, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x9e91849d, __VMLINUX_SYMBOL_STR(eth_rebuild_header) },
	{ 0xe86b02ef, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E47F74AF8998FA7E32452A5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x47c98324, __VMLINUX_SYMBOL_STR(mrp_uninit_applicant) },
	{ 0x3b87ef65, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0xda76a06f, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x7e06fdeb, __VMLINUX_SYMBOL_STR(mrp_request_leave) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x74273336, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfad4fb1, __VMLINUX_SYMBOL_STR(garp_uninit_applicant) },
	{ 0x26e19796, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0xed34a913, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8ffbe303, __VMLINUX_SYMBOL_STR(garp_request_join) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x3c6b5572, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xf9354251, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_setlink) },
	{ 0x3082b6a4, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_dump) },
	{ 0x7028aa99, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbfe4f83a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xa16aae11, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x47ebe6bc, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0x86c75c87, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0x6a3eeab2, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xd57e8a7e, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0x7401bdf4, __VMLINUX_SYMBOL_STR(ether_setup_rh) },
	{ 0xc2ffeb8d, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xd617417d, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x2858b8f1, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_del) },
	{ 0xdef6891e, __VMLINUX_SYMBOL_STR(garp_init_applicant) },
	{ 0xba5cc264, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_getlink) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xbc848342, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x57dd15d7, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0xe0b4aa48, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x44f0d59d, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc49d3c41, __VMLINUX_SYMBOL_STR(__ethtool_get_link_ksettings) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x532894bc, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xba18698e, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xfccc858, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5bad58d3, __VMLINUX_SYMBOL_STR(garp_register_application) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x86930455, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xc98e955a, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0xbea629f0, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xe2e5a21f, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x7fd49327, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x67d8b281, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xa1c54095, __VMLINUX_SYMBOL_STR(garp_request_leave) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1fdd0d12, __VMLINUX_SYMBOL_STR(arp_find) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x63ab8fbe, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf50bb1a3, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x8fdc6a67, __VMLINUX_SYMBOL_STR(mrp_init_applicant) },
	{ 0xbf3b8ed1, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf483ea1e, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x90971120, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbc62ebbd, __VMLINUX_SYMBOL_STR(switchdev_port_fdb_add) },
	{ 0x1df7eefc, __VMLINUX_SYMBOL_STR(garp_unregister_application) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x28b1b59, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x8c34c149, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x71f3f208, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2b2c7d40, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xaa534b8c, __VMLINUX_SYMBOL_STR(mrp_register_application) },
	{ 0x1b4a7f67, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xec60539a, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0xabe11f44, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb23f3094, __VMLINUX_SYMBOL_STR(switchdev_port_bridge_dellink) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xabf89541, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xb12256de, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_construct) },
	{ 0x42c6546a, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x4be2f635, __VMLINUX_SYMBOL_STR(mrp_unregister_application) },
	{ 0xa022252a, __VMLINUX_SYMBOL_STR(mrp_request_join) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xe86b02ef, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x6d9e84b1, __VMLINUX_SYMBOL_STR(netdev_default_l2upper_neigh_destroy) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x1111a17c, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x227d3e2, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mrp,garp";


MODULE_INFO(srcversion, "1DD872AF3C7FF7FFD5B14D5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

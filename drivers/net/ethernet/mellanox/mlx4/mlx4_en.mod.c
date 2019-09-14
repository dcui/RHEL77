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
	{ 0xab0c2316, __VMLINUX_SYMBOL_STR(mlx4_port_map_set) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x8de8b202, __VMLINUX_SYMBOL_STR(mlx4_mr_enable) },
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x36d5b89a, __VMLINUX_SYMBOL_STR(mlx4_get_default_counter_index) },
	{ 0x92e9064e, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb28e18de, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0xb26a1add, __VMLINUX_SYMBOL_STR(elfcorehdr_addr) },
	{ 0xcd895107, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_user_mtu) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x73812b59, __VMLINUX_SYMBOL_STR(mlx4_pd_free) },
	{ 0xb68b42b1, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0xd8152459, __VMLINUX_SYMBOL_STR(mlx4_qp_reserve_range) },
	{ 0xfaddbf21, __VMLINUX_SYMBOL_STR(mlx4_flow_detach) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x598e6bf3, __VMLINUX_SYMBOL_STR(mlx4_qp_alloc) },
	{ 0xb2be6e92, __VMLINUX_SYMBOL_STR(netdev_stats_to_stats64) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xb225b3a8, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x8168b48d, __VMLINUX_SYMBOL_STR(napi_consume_skb) },
	{ 0xedd6b68c, __VMLINUX_SYMBOL_STR(napi_schedule_prep) },
	{ 0x10184a36, __VMLINUX_SYMBOL_STR(__napi_schedule_irqoff) },
	{ 0x1801e58e, __VMLINUX_SYMBOL_STR(mlx4_INIT_PORT) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf4e42a2e, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_user_mac) },
	{ 0xe027af50, __VMLINUX_SYMBOL_STR(mlx4_alloc_hwq_res) },
	{ 0xcfa0c721, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x59f8101c, __VMLINUX_SYMBOL_STR(mlx4_register_interface) },
	{ 0x82f21262, __VMLINUX_SYMBOL_STR(xdp_rxq_info_reg) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x44326fe3, __VMLINUX_SYMBOL_STR(netdev_set_num_tc) },
	{ 0x7028aa99, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x11da5dd, __VMLINUX_SYMBOL_STR(mlx4_get_is_vlan_offload_disabled) },
	{ 0x9ba3d855, __VMLINUX_SYMBOL_STR(mlx4_set_vf_rate) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xbfe4f83a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x114a9d69, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xccdb9b95, __VMLINUX_SYMBOL_STR(set_phv_bit) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xfcd05cc1, __VMLINUX_SYMBOL_STR(xdp_rxq_info_unreg) },
	{ 0x6a3eeab2, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x235344c, __VMLINUX_SYMBOL_STR(mlx4_flow_steer_promisc_add) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc7313658, __VMLINUX_SYMBOL_STR(mlx4_tunnel_steer_add) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf803fe39, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0xdc56c547, __VMLINUX_SYMBOL_STR(mlx4_cq_modify) },
	{ 0x995a1988, __VMLINUX_SYMBOL_STR(rps_may_expire_flow) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5b884839, __VMLINUX_SYMBOL_STR(mlx4_unicast_detach) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x3efad8d8, __VMLINUX_SYMBOL_STR(mlx4_get_module_info) },
	{ 0x203eaa64, __VMLINUX_SYMBOL_STR(mlx4_unicast_promisc_remove) },
	{ 0x8cecb562, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xdbc34085, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0xa9869cc5, __VMLINUX_SYMBOL_STR(mlx4_qp_free) },
	{ 0x1a8ac6aa, __VMLINUX_SYMBOL_STR(mlx4_qp_remove) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xdf29753, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0x4a98cb18, __VMLINUX_SYMBOL_STR(mlx4_get_counter_stats) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x911f9226, __VMLINUX_SYMBOL_STR(netdev_set_tc_queue) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb08965d5, __VMLINUX_SYMBOL_STR(mlx4_SET_MCAST_FLTR) },
	{ 0x91bde117, __VMLINUX_SYMBOL_STR(mlx4_register_vlan) },
	{ 0x9f2bdaac, __VMLINUX_SYMBOL_STR(__bitmap_or) },
	{ 0x6135fd0a, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0xa60a6a05, __VMLINUX_SYMBOL_STR(mlx4_get_vf_stats) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4a9282b6, __VMLINUX_SYMBOL_STR(dcb_getapp) },
	{ 0xb6dae5a5, __VMLINUX_SYMBOL_STR(dcb_setapp) },
	{ 0xd417a629, __VMLINUX_SYMBOL_STR(mlx4_unbond) },
	{ 0x4eddeff3, __VMLINUX_SYMBOL_STR(mlx4_read_clock) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xa3e36e3, __VMLINUX_SYMBOL_STR(mlx4_multicast_promisc_add) },
	{ 0x3401c61e, __VMLINUX_SYMBOL_STR(mlx4_assign_eq) },
	{ 0xea10655a, __VMLINUX_SYMBOL_STR(__bitmap_intersects) },
	{ 0xe4740a86, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27883d62, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_qpn_calc) },
	{ 0x9d237bae, __VMLINUX_SYMBOL_STR(mlx4_get_eqs_per_port) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3c85426b, __VMLINUX_SYMBOL_STR(netif_set_xps_queue) },
	{ 0xaccda81c, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_fcs_check) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x532894bc, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xd739ba68, __VMLINUX_SYMBOL_STR(mlx4_qp_modify) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xcbd1eaa, __VMLINUX_SYMBOL_STR(mlx4_mr_free) },
	{ 0x3e092b88, __VMLINUX_SYMBOL_STR(zalloc_cpumask_var) },
	{ 0x5948f2f0, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x72bfc11e, __VMLINUX_SYMBOL_STR(mlx4_uar_alloc) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x26f81340, __VMLINUX_SYMBOL_STR(mlx4_set_vf_vlan) },
	{ 0x9f5cd5dd, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x748555b5, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0x63e5bc23, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0x54eeba34, __VMLINUX_SYMBOL_STR(mlx4_alloc_cmd_mailbox) },
	{ 0x6cb287a9, __VMLINUX_SYMBOL_STR(mlx4_max_tc) },
	{ 0xaa59ba03, __VMLINUX_SYMBOL_STR(mlx4_is_eq_vector_valid) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x99c9e502, __VMLINUX_SYMBOL_STR(mlx4_CLOSE_PORT) },
	{ 0xc8a91f5b, __VMLINUX_SYMBOL_STR(cpumask_local_spread) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2ed5d930, __VMLINUX_SYMBOL_STR(mlx4_cq_free) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xa98cf630, __VMLINUX_SYMBOL_STR(mlx4_config_vxlan_port) },
	{ 0xfc496c4e, __VMLINUX_SYMBOL_STR(mlx4_free_hwq_res) },
	{ 0x458dc04f, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xb9b19478, __VMLINUX_SYMBOL_STR(__mlx4_replace_mac) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x23f62726, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0x784984fa, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xf5a9c60f, __VMLINUX_SYMBOL_STR(mlx4_multicast_attach) },
	{ 0xea02f55c, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_PRIO2TC) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb3ea49f2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xadc926ae, __VMLINUX_SYMBOL_STR(mlx4_mr_alloc) },
	{ 0x8b004563, __VMLINUX_SYMBOL_STR(mlx4_get_devlink_port) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x87bc5bc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x8b348cd1, __VMLINUX_SYMBOL_STR(mlx4_wol_write) },
	{ 0xfb63f1a3, __VMLINUX_SYMBOL_STR(get_phv_bit) },
	{ 0xa5d8a74d, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x8525340c, __VMLINUX_SYMBOL_STR(__mlx4_cmd) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x13edee19, __VMLINUX_SYMBOL_STR(mlx4_flow_steer_promisc_remove) },
	{ 0xb9ca3d15, __VMLINUX_SYMBOL_STR(mlx4_uar_free) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xa9f86806, __VMLINUX_SYMBOL_STR(mlx4_bond) },
	{ 0x8362224e, __VMLINUX_SYMBOL_STR(mlx4_free_cmd_mailbox) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4c423fc1, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x9eb73885, __VMLINUX_SYMBOL_STR(mlx4_unicast_attach) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0xa688e431, __VMLINUX_SYMBOL_STR(mlx4_qp_to_ready) },
	{ 0x495b7f0d, __VMLINUX_SYMBOL_STR(mlx4_bf_free) },
	{ 0x22fb3022, __VMLINUX_SYMBOL_STR(mlx4_cq_alloc) },
	{ 0x815e5e67, __VMLINUX_SYMBOL_STR(mlx4_get_vf_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8315f8cd, __VMLINUX_SYMBOL_STR(netdev_features_change) },
	{ 0x467df16d, __VMLINUX_SYMBOL_STR(netdev_rss_key_fill) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x384e70ae, __VMLINUX_SYMBOL_STR(__smp_mb__before_atomic) },
	{ 0x6abe3d53, __VMLINUX_SYMBOL_STR(mlx4_qp_release_range) },
	{ 0x9d85377, __VMLINUX_SYMBOL_STR(mlx4_test_interrupt) },
	{ 0x951ef49c, __VMLINUX_SYMBOL_STR(mlx4_release_eq) },
	{ 0xf82a041, __VMLINUX_SYMBOL_STR(mlx4_get_base_qpn) },
	{ 0xb3453c5c, __VMLINUX_SYMBOL_STR(mlx4_unicast_promisc_add) },
	{ 0x52b8d960, __VMLINUX_SYMBOL_STR(__netif_napi_add) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x457a2c2c, __VMLINUX_SYMBOL_STR(mlx4_ACCESS_PTYS_REG) },
	{ 0x73bcbec9, __VMLINUX_SYMBOL_STR(devlink_port_type_clear) },
	{ 0x6d27ef64, __VMLINUX_SYMBOL_STR(__bitmap_empty) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x981acf1f, __VMLINUX_SYMBOL_STR(mlx4_wol_read) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xad3eeeba, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xa45498e4, __VMLINUX_SYMBOL_STR(mlx4_set_vf_link_state) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xbe0b444d, __VMLINUX_SYMBOL_STR(mlx4_get_cpu_rmap) },
	{ 0xfd837fe3, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_SCHEDULER) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xd30453ce, __VMLINUX_SYMBOL_STR(mlx4_multicast_promisc_remove) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x8784fa04, __VMLINUX_SYMBOL_STR(napi_get_frags) },
	{ 0x64d6bea2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xf1fc1b37, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_BEACON) },
	{ 0x4d5d18c9, __VMLINUX_SYMBOL_STR(mlx4_register_mac) },
	{ 0x73c2554f, __VMLINUX_SYMBOL_STR(__iowrite64_copy) },
	{ 0x6644521b, __VMLINUX_SYMBOL_STR(mlx4_unregister_vlan) },
	{ 0xc5a1abc2, __VMLINUX_SYMBOL_STR(mlx4_multicast_detach) },
	{ 0x93a99dbc, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs_rh) },
	{ 0xb65d47a2, __VMLINUX_SYMBOL_STR(mlx4_pd_alloc) },
	{ 0xd05bb49, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_general) },
	{ 0xd3ba899b, __VMLINUX_SYMBOL_STR(mlx4_bf_alloc) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x4bfd5b05, __VMLINUX_SYMBOL_STR(mlx4_unregister_interface) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x8861e890, __VMLINUX_SYMBOL_STR(mlx4_SET_PORT_VXLAN) },
	{ 0xcfaf6280, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x318df700, __VMLINUX_SYMBOL_STR(bpf_prog_put) },
	{ 0xb4c23536, __VMLINUX_SYMBOL_STR(mlx4_set_vf_spoofchk) },
	{ 0x8c78897, __VMLINUX_SYMBOL_STR(mlx4_eq_get_irq) },
	{ 0x112c8b3c, __VMLINUX_SYMBOL_STR(mlx4_set_vf_mac) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xf183715a, __VMLINUX_SYMBOL_STR(devlink_port_type_eth_set) },
	{ 0x7a5dd5b5, __VMLINUX_SYMBOL_STR(napi_gro_frags) },
	{ 0x691ec3aa, __VMLINUX_SYMBOL_STR(mlx4_flow_attach) },
	{ 0x27b9bc10, __VMLINUX_SYMBOL_STR(mlx4_unregister_mac) },
	{ 0x2202b484, __VMLINUX_SYMBOL_STR(mlx4_update_qp) },
	{ 0xd92afabe, __VMLINUX_SYMBOL_STR(bitmap_clear) },
	{ 0x64af3120, __VMLINUX_SYMBOL_STR(mlx4_test_async) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlx4_core,ptp,devlink";


MODULE_INFO(srcversion, "AEF4C790A9D6169E1172039");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

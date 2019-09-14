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
	{ 0xf4d48536, __VMLINUX_SYMBOL_STR(devlink_port_register) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x92a1ee7d, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xb68b42b1, __VMLINUX_SYMBOL_STR(skb_clone_tx_timestamp) },
	{ 0xaee87ee1, __VMLINUX_SYMBOL_STR(rht_bucket_nested) },
	{ 0xf000f839, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xbeef990f, __VMLINUX_SYMBOL_STR(devlink_sb_unregister) },
	{ 0xb225b3a8, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1fe912f1, __VMLINUX_SYMBOL_STR(netdev_alloc_frag) },
	{ 0x3e6cfccb, __VMLINUX_SYMBOL_STR(pci_sriov_set_totalvfs) },
	{ 0x8168b48d, __VMLINUX_SYMBOL_STR(napi_consume_skb) },
	{ 0xedd6b68c, __VMLINUX_SYMBOL_STR(napi_schedule_prep) },
	{ 0x10184a36, __VMLINUX_SYMBOL_STR(__napi_schedule_irqoff) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x82f21262, __VMLINUX_SYMBOL_STR(xdp_rxq_info_reg) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x7e8ba329, __VMLINUX_SYMBOL_STR(arp_tbl) },
	{ 0x58ecf574, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x7dbdd117, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x7028aa99, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x825f7b4b, __VMLINUX_SYMBOL_STR(metadata_dst_alloc) },
	{ 0xa9daec42, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xa1f9a134, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rsi) },
	{ 0xbfe4f83a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xadcf7f5a, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get_rcu) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xfcd05cc1, __VMLINUX_SYMBOL_STR(xdp_rxq_info_unreg) },
	{ 0x30eb0d2b, __VMLINUX_SYMBOL_STR(pcie_print_link_status) },
	{ 0x6a3eeab2, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x5df77d54, __VMLINUX_SYMBOL_STR(devlink_alloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x88e3b639, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x274dc2b, __VMLINUX_SYMBOL_STR(netif_get_num_default_rss_queues) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x53424ac5, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0xc7dd10a7, __VMLINUX_SYMBOL_STR(__tracepoint_devlink_hwmsg) },
	{ 0x8cecb562, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x618bef18, __VMLINUX_SYMBOL_STR(__neigh_event_send) },
	{ 0x44f2bfbf, __VMLINUX_SYMBOL_STR(rhashtable_destroy) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf08c67de, __VMLINUX_SYMBOL_STR(napi_alloc_frag) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6135fd0a, __VMLINUX_SYMBOL_STR(netif_schedule_queue) },
	{ 0x7224fcd8, __VMLINUX_SYMBOL_STR(rht_bucket_nested_insert) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf6fc35ee, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfe33707d, __VMLINUX_SYMBOL_STR(rhashtable_free_and_destroy) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xe4740a86, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x62440d5, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3c85426b, __VMLINUX_SYMBOL_STR(netif_set_xps_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x532894bc, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x5948f2f0, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x4fe1eddf, __VMLINUX_SYMBOL_STR(unregister_netevent_notifier) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x13a1a61a, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x64661a2f, __VMLINUX_SYMBOL_STR(netdev_printk) },
	{ 0x9f5cd5dd, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x748555b5, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0x53126d0a, __VMLINUX_SYMBOL_STR(hwmon_device_register_with_info) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x5c0da502, __VMLINUX_SYMBOL_STR(devlink_port_unregister) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0x25a7cd9, __VMLINUX_SYMBOL_STR(__tc_indr_block_cb_unregister) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x52b13eb3, __VMLINUX_SYMBOL_STR(build_skb) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x5149226a, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x9584c772, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x4f94f1ba, __VMLINUX_SYMBOL_STR(idr_get_next) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x683abeb9, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0x567ac1fc, __VMLINUX_SYMBOL_STR(eth_prepare_mac_addr_change) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9e9f1714, __VMLINUX_SYMBOL_STR(__bitmap_andnot) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3e5e1b54, __VMLINUX_SYMBOL_STR(switchdev_port_same_parent_id) },
	{ 0x88e1d0f0, __VMLINUX_SYMBOL_STR(page_frag_free) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x4c423fc1, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x63fedd30, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x52b645e5, __VMLINUX_SYMBOL_STR(__smp_mb__after_atomic) },
	{ 0xfbc25e3d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa0f3b7a1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x73d411d4, __VMLINUX_SYMBOL_STR(eth_commit_mac_addr_change) },
	{ 0x467df16d, __VMLINUX_SYMBOL_STR(netdev_rss_key_fill) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x384e70ae, __VMLINUX_SYMBOL_STR(__smp_mb__before_atomic) },
	{ 0xb32ff9a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x52b8d960, __VMLINUX_SYMBOL_STR(__netif_napi_add) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x5c04acc5, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xf170ba67, __VMLINUX_SYMBOL_STR(__tc_indr_block_cb_register) },
	{ 0x10108897, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xc37d9ce0, __VMLINUX_SYMBOL_STR(devlink_free) },
	{ 0xeda0acca, __VMLINUX_SYMBOL_STR(tcf_block_cb_unregister) },
	{ 0x11af139c, __VMLINUX_SYMBOL_STR(devlink_register) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3fa81d1, __VMLINUX_SYMBOL_STR(devlink_sb_register) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xa400159f, __VMLINUX_SYMBOL_STR(crc32_be) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x970cfeed, __VMLINUX_SYMBOL_STR(devlink_port_attrs_set) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9b03fe4d, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd374dfba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x64d6bea2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x93a99dbc, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs_rh) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbecbf54e, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xd979a547, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdi) },
	{ 0xabf89541, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x1cfb9239, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x5e15d54c, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x4761f17c, __VMLINUX_SYMBOL_STR(register_netevent_notifier) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x42c6546a, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xcfaf6280, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xa38ee07d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0xaa011360, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0x82477240, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xdcfcd4b7, __VMLINUX_SYMBOL_STR(devlink_unregister) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdbb5ebb, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x68a6682a, __VMLINUX_SYMBOL_STR(tcf_block_cb_register) },
	{ 0xf183715a, __VMLINUX_SYMBOL_STR(devlink_port_type_eth_set) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x227d3e2, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=devlink";

MODULE_ALIAS("pci:v000019EEd00006000sv000019EEsd*bc*sc*i*");
MODULE_ALIAS("pci:v000019EEd00004000sv000019EEsd*bc*sc*i*");
MODULE_ALIAS("pci:v000019EEd00006003sv000019EEsd*bc*sc*i*");

MODULE_INFO(srcversion, "C7004183EFBEDCB9FA8524B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xeeaf923d, __VMLINUX_SYMBOL_STR(il_init_channel_map) },
	{ 0xcbe1c68c, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xcf03c2e3, __VMLINUX_SYMBOL_STR(il_power_update_mode) },
	{ 0x6049492b, __VMLINUX_SYMBOL_STR(il_clear_ucode_stations) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e9f981, __VMLINUX_SYMBOL_STR(il_get_free_ucode_key_idx) },
	{ 0xd9494608, __VMLINUX_SYMBOL_STR(il_send_cmd) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x10316fc2, __VMLINUX_SYMBOL_STR(il_get_active_dwell_time) },
	{ 0xb8ed09cc, __VMLINUX_SYMBOL_STR(il_dbgfs_unregister) },
	{ 0x8bd590db, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x695bc8e9, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xe8d11a52, __VMLINUX_SYMBOL_STR(il_mac_change_interface) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3d888bb8, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x70f6e2ed, __VMLINUX_SYMBOL_STR(il_set_rate) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x80572e56, __VMLINUX_SYMBOL_STR(il_rd_prph) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xa1e629d7, __VMLINUX_SYMBOL_STR(il_power_initialize) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x722011a5, __VMLINUX_SYMBOL_STR(il_txq_update_write_ptr) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0xd8312bb9, __VMLINUX_SYMBOL_STR(il_free_geos) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x9928eb6a, __VMLINUX_SYMBOL_STR(il_wr_prph) },
	{ 0xb7e7a07c, __VMLINUX_SYMBOL_STR(il_send_lq_cmd) },
	{ 0x4aa39103, __VMLINUX_SYMBOL_STR(il_get_cmd_string) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x564c6740, __VMLINUX_SYMBOL_STR(il_debug_level) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x545546a3, __VMLINUX_SYMBOL_STR(il_send_rxon_timing) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x33397837, __VMLINUX_SYMBOL_STR(il_write_targ_mem) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xecbd7dc3, __VMLINUX_SYMBOL_STR(il_hdl_error) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x682465f7, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xe8663ae6, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x1ad366b0, __VMLINUX_SYMBOL_STR(rate_control_send_low) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x8eb826a, __VMLINUX_SYMBOL_STR(il_get_passive_dwell_time) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xae9bb4d4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xc39cf12c, __VMLINUX_SYMBOL_STR(il_bg_watchdog) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4679e12d, __VMLINUX_SYMBOL_STR(il_init_geos) },
	{ 0xf69fef42, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x4dd4e5e7, __VMLINUX_SYMBOL_STR(il_set_rxon_hwcrypto) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x18169d4f, __VMLINUX_SYMBOL_STR(il_connection_init_rx_config) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x47026d48, __VMLINUX_SYMBOL_STR(il_send_cmd_sync) },
	{ 0x3d9844b0, __VMLINUX_SYMBOL_STR(il_force_reset) },
	{ 0xb183465b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x6ecbbef, __VMLINUX_SYMBOL_STR(il_eeprom_query_addr) },
	{ 0xa512dc8e, __VMLINUX_SYMBOL_STR(il_tx_queue_init) },
	{ 0x9edb0ff4, __VMLINUX_SYMBOL_STR(il_get_lowest_plcp) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc657c957, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x940f7d5, __VMLINUX_SYMBOL_STR(il_get_channel_info) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xa7f2c128, __VMLINUX_SYMBOL_STR(il_tx_queue_unmap) },
	{ 0x9e7cbc27, __VMLINUX_SYMBOL_STR(il_hdl_pm_sleep) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x4efa1de3, __VMLINUX_SYMBOL_STR(il_fill_probe_req) },
	{ 0x7aed4f12, __VMLINUX_SYMBOL_STR(il_mac_reset_tsf) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x4a649373, __VMLINUX_SYMBOL_STR(il_mac_conf_tx) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x6939734f, __VMLINUX_SYMBOL_STR(il_cmd_queue_unmap) },
	{ 0xbd29b606, __VMLINUX_SYMBOL_STR(il_set_rxon_channel) },
	{ 0xb7a87b54, __VMLINUX_SYMBOL_STR(il_send_bt_config) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x76212ad1, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x63149e37, __VMLINUX_SYMBOL_STR(il_mac_tx_last_beacon) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x13254d7a, __VMLINUX_SYMBOL_STR(il_tx_queue_free) },
	{ 0x99468fa3, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x149ff358, __VMLINUX_SYMBOL_STR(il_init_scan_params) },
	{ 0x54677dd5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x16cb1461, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_register) },
	{ 0x9177c192, __VMLINUX_SYMBOL_STR(il_full_rxon_required) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcbc6049b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xd47b0bb, __VMLINUX_SYMBOL_STR(il_rx_queue_update_write_ptr) },
	{ 0x5575294a, __VMLINUX_SYMBOL_STR(_il_grab_nic_access) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x4c48a854, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0xc8eeeb0c, __VMLINUX_SYMBOL_STR(il_mac_config) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2c5c75f9, __VMLINUX_SYMBOL_STR(il_clear_bit) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe166491, __VMLINUX_SYMBOL_STR(_il_poll_bit) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x2cc31b97, __VMLINUX_SYMBOL_STR(il_leds_init) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1ba239df, __VMLINUX_SYMBOL_STR(ieee80211_sta_block_awake) },
	{ 0xdd6bdb1e, __VMLINUX_SYMBOL_STR(il_mac_sta_remove) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x31de973f, __VMLINUX_SYMBOL_STR(il_set_tx_power) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xafcddfdf, __VMLINUX_SYMBOL_STR(il_mac_remove_interface) },
	{ 0x2d081e85, __VMLINUX_SYMBOL_STR(il_set_decrypted_flag) },
	{ 0x8bdfd01d, __VMLINUX_SYMBOL_STR(il_setup_rx_scan_handlers) },
	{ 0xb09aa7c7, __VMLINUX_SYMBOL_STR(il_send_add_sta) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1da7446c, __VMLINUX_SYMBOL_STR(il_dealloc_bcast_stations) },
	{ 0x1df915ff, __VMLINUX_SYMBOL_STR(il_mac_hw_scan) },
	{ 0x9c6cf0bb, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x76959b91, __VMLINUX_SYMBOL_STR(il_cancel_scan_deferred_work) },
	{ 0xe9abba3f, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x59aa96d2, __VMLINUX_SYMBOL_STR(il_tx_queue_reset) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x85892c1f, __VMLINUX_SYMBOL_STR(il_remove_station) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x7317874c, __VMLINUX_SYMBOL_STR(il_set_flags_for_band) },
	{ 0x8e9850ec, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xe435493a, __VMLINUX_SYMBOL_STR(il_queue_space) },
	{ 0x7e68af72, __VMLINUX_SYMBOL_STR(il_eeprom_init) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xd4180b37, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x2e05a205, __VMLINUX_SYMBOL_STR(il_mac_add_interface) },
	{ 0x3580fffe, __VMLINUX_SYMBOL_STR(il_restore_stations) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb67b8ebf, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xb7bd33ff, __VMLINUX_SYMBOL_STR(il_isr) },
	{ 0xfd451bbc, __VMLINUX_SYMBOL_STR(il_leds_exit) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xc5e1d165, __VMLINUX_SYMBOL_STR(il_scan_cancel_timeout) },
	{ 0x4b6c2ec5, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xed628189, __VMLINUX_SYMBOL_STR(il_free_txq_mem) },
	{ 0x41a0a0b7, __VMLINUX_SYMBOL_STR(il_apm_init) },
	{ 0x8b48a6a8, __VMLINUX_SYMBOL_STR(il_cmd_queue_free) },
	{ 0xf8d3d2e7, __VMLINUX_SYMBOL_STR(il_add_beacon_time) },
	{ 0x7149ad63, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xf582039d, __VMLINUX_SYMBOL_STR(il_apm_stop) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xabda77d3, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2b0b1f28, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdde6f6d, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x1e08ba0d, __VMLINUX_SYMBOL_STR(il_setup_watchdog) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x6443eaf3, __VMLINUX_SYMBOL_STR(ieee80211_rate_control_unregister) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x59337489, __VMLINUX_SYMBOL_STR(ieee80211_restart_hw) },
	{ 0xe5de92d3, __VMLINUX_SYMBOL_STR(il_rx_queue_space) },
	{ 0x5c9860bb, __VMLINUX_SYMBOL_STR(il_irq_handle_error) },
	{ 0x3f7a8287, __VMLINUX_SYMBOL_STR(il_check_rxon_cmd) },
	{ 0x974ed4a5, __VMLINUX_SYMBOL_STR(il_tx_cmd_complete) },
	{ 0x26619956, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa540701e, __VMLINUX_SYMBOL_STR(il_tx_cmd_protection) },
	{ 0x9a890756, __VMLINUX_SYMBOL_STR(il_hdl_pm_debug_stats) },
	{ 0x54a5b51, __VMLINUX_SYMBOL_STR(il_add_station_common) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd23743ea, __VMLINUX_SYMBOL_STR(il_dbgfs_register) },
	{ 0xc922faf9, __VMLINUX_SYMBOL_STR(il_read_targ_mem) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x520b30dc, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0x8acae88e, __VMLINUX_SYMBOL_STR(il_set_bit) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x79142775, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x31140567, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf501278b, __VMLINUX_SYMBOL_STR(il_bcast_addr) },
	{ 0x16da0b7c, __VMLINUX_SYMBOL_STR(il_mac_flush) },
	{ 0xd33fd716, __VMLINUX_SYMBOL_STR(il_hdl_csa) },
	{ 0x704778df, __VMLINUX_SYMBOL_STR(il_free_channel_map) },
	{ 0x18c203c6, __VMLINUX_SYMBOL_STR(il_scan_cancel) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xaee3afae, __VMLINUX_SYMBOL_STR(il_setup_scan_deferred_work) },
	{ 0xe5449d38, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p2k) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x497e1b80, __VMLINUX_SYMBOL_STR(il_print_rx_config_cmd) },
	{ 0xe9387c24, __VMLINUX_SYMBOL_STR(il_hdl_spectrum_measurement) },
	{ 0xd7d58821, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x50070020, __VMLINUX_SYMBOL_STR(il_usecs_to_beacons) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6593cf40, __VMLINUX_SYMBOL_STR(il_is_ht40_tx_allowed) },
	{ 0xd65e44cb, __VMLINUX_SYMBOL_STR(il_update_stats) },
	{ 0xec27d86, __VMLINUX_SYMBOL_STR(il_alloc_txq_mem) },
	{ 0xa16ee83a, __VMLINUX_SYMBOL_STR(il_send_cmd_pdu) },
	{ 0x60a2c286, __VMLINUX_SYMBOL_STR(il_mac_bss_info_changed) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5d56a261, __VMLINUX_SYMBOL_STR(_il_apm_stop) },
	{ 0xcf5a6b74, __VMLINUX_SYMBOL_STR(il_eeprom_query16) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x461a3511, __VMLINUX_SYMBOL_STR(il_chswitch_done) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x3dd654a8, __VMLINUX_SYMBOL_STR(il_prep_station) },
	{ 0x8ccc6378, __VMLINUX_SYMBOL_STR(ieee80211_chswitch_done) },
	{ 0x592dc0c0, __VMLINUX_SYMBOL_STR(il_send_cmd_pdu_async) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1951af8d, __VMLINUX_SYMBOL_STR(il_set_rxon_ht) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x21d234e8, __VMLINUX_SYMBOL_STR(il_rx_queue_alloc) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9822665e, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x104fae82, __VMLINUX_SYMBOL_STR(il_eeprom_free) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x72dc5ab6, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_session) },
	{ 0x42fff137, __VMLINUX_SYMBOL_STR(il_pm_ops) },
	{ 0x26d9d763, __VMLINUX_SYMBOL_STR(il_send_stats_request) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iwlegacy,mac80211,cfg80211";

MODULE_ALIAS("pci:v00008086d00004229sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004230sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "1E48DA65825A4937CD429D2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
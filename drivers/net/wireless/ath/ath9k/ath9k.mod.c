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
	{ 0xcbe1c68c, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xcc8d1a3, __VMLINUX_SYMBOL_STR(ar9003_paprd_is_done) },
	{ 0xe2f276ed, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x911e8b52, __VMLINUX_SYMBOL_STR(ieee80211_csa_finish) },
	{ 0xc286f430, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0x3e95120e, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0xc594cf13, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0x64c7310f, __VMLINUX_SYMBOL_STR(ath9k_hw_resume_interrupts) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x169a2664, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x9f13414d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xdbf851a9, __VMLINUX_SYMBOL_STR(ar9003_mci_send_wlan_channels) },
	{ 0x17c754ae, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x695bc8e9, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5d2a28c1, __VMLINUX_SYMBOL_STR(ath9k_hw_setantenna) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xd2a6074b, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xf02020c, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x612a0dac, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x845324a2, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0xaa8369c5, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xf44490e2, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xca0e476d, __VMLINUX_SYMBOL_STR(ieee80211_csa_is_complete) },
	{ 0xffd02408, __VMLINUX_SYMBOL_STR(ath9k_hw_get_tsf_offset) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xfc5bd635, __VMLINUX_SYMBOL_STR(ath9k_hw_numtxpending) },
	{ 0x3f32778e, __VMLINUX_SYMBOL_STR(ar9003_paprd_setup_gain_table) },
	{ 0x100d022c, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xb8d7b26f, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0x3139b5f3, __VMLINUX_SYMBOL_STR(ath9k_hw_set_interrupts) },
	{ 0xc747dc15, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xc733b8, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc0134774, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_mci) },
	{ 0x297a67f4, __VMLINUX_SYMBOL_STR(cfg80211_chandef_create) },
	{ 0x58f40558, __VMLINUX_SYMBOL_STR(ar9003_paprd_enable) },
	{ 0x53814075, __VMLINUX_SYMBOL_STR(ath9k_hw_getchan_noise) },
	{ 0xc3c060a6, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0xbcf18ad1, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xaf8d242e, __VMLINUX_SYMBOL_STR(ath9k_hw_computetxtime) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb471f2cd, __VMLINUX_SYMBOL_STR(ath9k_hw_disable_interrupts) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x4f378d97, __VMLINUX_SYMBOL_STR(ath9k_hw_bstuck_nfcal) },
	{ 0x45d70f7d, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x1c847f36, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x53b297d8, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xddb0fb2, __VMLINUX_SYMBOL_STR(ath9k_hw_gettxbuf) },
	{ 0x16fe72b4, __VMLINUX_SYMBOL_STR(dfs_pattern_detector_init) },
	{ 0x76250a0e, __VMLINUX_SYMBOL_STR(ath9k_hw_loadnf) },
	{ 0x682465f7, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc5beae5, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_apply_pattern) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfdeec69b, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb26150c3, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x610c22cd, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0xa92f91b7, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0x24e13802, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x98049787, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_init_debug) },
	{ 0xae9bb4d4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xdc06d937, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x80bad938, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x25c7bad6, __VMLINUX_SYMBOL_STR(ath9k_hw_kill_interrupts) },
	{ 0xd9dde0d2, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_deinit_debug) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3074ee7d, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb183465b, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0x36ca54cd, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x1b1fbaff, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0xb6466b81, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_wakeup) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x91d914f3, __VMLINUX_SYMBOL_STR(ath9k_hw_process_rxdesc_edma) },
	{ 0x69106dd5, __VMLINUX_SYMBOL_STR(ar9003_paprd_populate_single_table) },
	{ 0x1d45035, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xd85d41f5, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0x151fb8d5, __VMLINUX_SYMBOL_STR(pcie_capability_clear_word) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x6b6b81e2, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x25ba06c8, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x9fb7346a, __VMLINUX_SYMBOL_STR(ath_gen_timer_isr) },
	{ 0xa3efc9af, __VMLINUX_SYMBOL_STR(ath9k_hw_rxprocdesc) },
	{ 0x8467ce88, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x87956094, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0x7b50d531, __VMLINUX_SYMBOL_STR(ieee80211_tx_dequeue) },
	{ 0x76212ad1, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xb03aafae, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_2wire) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x99468fa3, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x63f1b8ee, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0xd0bda622, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0x89599dd2, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_in) },
	{ 0x57064736, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_dbg_info) },
	{ 0xd6099d1d, __VMLINUX_SYMBOL_STR(ar9003_paprd_create_curve) },
	{ 0x76545b9d, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x87ed0559, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcbc6049b, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0x16ae82e5, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_stat_rx) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xca9cfb71, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0xc0b59ba0, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xdedaaa, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0x64b9d248, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x6073652a, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x5f8cbb8c, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0xbca85027, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_base_eeprom) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x49e94530, __VMLINUX_SYMBOL_STR(ath9k_hw_addrxbuf_edma) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x24f85538, __VMLINUX_SYMBOL_STR(ieee80211_find_sta_by_ifaddr) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xedce3bc3, __VMLINUX_SYMBOL_STR(ath9k_hw_setup_statusring) },
	{ 0x2cd2b427, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_recv) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4a15197a, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x9c6cf0bb, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x2d3e439, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0xad73cd4b, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0xe9abba3f, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x9ef2a831, __VMLINUX_SYMBOL_STR(ar9003_mci_get_next_gpm_offset) },
	{ 0x64ac0eff, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0xcfff2224, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xfe911bc6, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x191948bf, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0xb254ba42, __VMLINUX_SYMBOL_STR(ath9k_hw_puttxbuf) },
	{ 0xe3e73bfa, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x2ac385fa, __VMLINUX_SYMBOL_STR(ar9003_mci_state) },
	{ 0xdf051224, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_scheme) },
	{ 0x9f81ea35, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0x2a1c3bcc, __VMLINUX_SYMBOL_STR(ath9k_hw_wow_enable) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x8e9850ec, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0xa414d6a2, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_phy_err) },
	{ 0x4b9d0177, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x422b0225, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x505b207a, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0xfbdcfe82, __VMLINUX_SYMBOL_STR(ath9k_hw_abortpcurecv) },
	{ 0x1ef92fc1, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xc2d1aa0e, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xb7596745, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tx_filter) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x83e0c975, __VMLINUX_SYMBOL_STR(debugfs_create_devm_seqfile) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb67b8ebf, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x7cd3ceb0, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x8f34cbd9, __VMLINUX_SYMBOL_STR(ar9003_mci_get_interrupt) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x238cd376, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0xf075aa28, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x44ebb1d6, __VMLINUX_SYMBOL_STR(ath9k_hw_updatetxtriglevel) },
	{ 0x9a0b7160, __VMLINUX_SYMBOL_STR(ath_hw_cycle_counters_update) },
	{ 0xe18ddf00, __VMLINUX_SYMBOL_STR(ar9003_mci_set_bt_version) },
	{ 0x4b813546, __VMLINUX_SYMBOL_STR(ath9k_hw_set_rx_bufsize) },
	{ 0xfd0816f4, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x5b6d7832, __VMLINUX_SYMBOL_STR(ar9003_is_paprd_enabled) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x87ded606, __VMLINUX_SYMBOL_STR(ar9003_get_pll_sqsum_dvc) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x179c36fd, __VMLINUX_SYMBOL_STR(ar9003_mci_send_message) },
	{ 0x4f42b9f3, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0xbc6203f1, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_free) },
	{ 0x1e937b3e, __VMLINUX_SYMBOL_STR(ar9003_mci_cleanup) },
	{ 0x52b645e5, __VMLINUX_SYMBOL_STR(__smp_mb__after_atomic) },
	{ 0xfbc25e3d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xfca79442, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3df59f82, __VMLINUX_SYMBOL_STR(ath9k_hw_txstart) },
	{ 0x637c2b0a, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x83b5684e, __VMLINUX_SYMBOL_STR(ath9k_hw_check_alive) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x123f82f3, __VMLINUX_SYMBOL_STR(getrawmonotonic64) },
	{ 0xd2f6abc8, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x67612256, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_concur_txprio) },
	{ 0x78d68c41, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x384e70ae, __VMLINUX_SYMBOL_STR(__smp_mb__before_atomic) },
	{ 0x6fcde244, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0xd25c9a6b, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xaf1d4ce8, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0x9749e5e4, __VMLINUX_SYMBOL_STR(ar9003_mci_setup) },
	{ 0xd4105a13, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0x54dea742, __VMLINUX_SYMBOL_STR(ieee80211_sta_eosp) },
	{ 0x5f2ebbb4, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0xa39e123d, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x26619956, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x19b9bc9, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf5337bed, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0xdee2280f, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xf78eec5a, __VMLINUX_SYMBOL_STR(ath9k_hw_check_nav) },
	{ 0x2d9daf80, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_ext) },
	{ 0x8844655b, __VMLINUX_SYMBOL_STR(ath9k_hw_putrxbuf) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x63bd05da, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_request_out) },
	{ 0x51b2b38e, __VMLINUX_SYMBOL_STR(ath_rxbuf_alloc) },
	{ 0x58693e86, __VMLINUX_SYMBOL_STR(ar9003_paprd_init_table) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x65017ef6, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xc8911af, __VMLINUX_SYMBOL_STR(ath9k_hw_setuprxdesc) },
	{ 0xa8498b3a, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1dfd7cf6, __VMLINUX_SYMBOL_STR(ath9k_hw_abort_tx_dma) },
	{ 0x2aaefbd3, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0xd7d58821, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xbefee8e4, __VMLINUX_SYMBOL_STR(debugfs_create_u16) },
	{ 0xbb9ca4be, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x540d59e0, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x9cec596b, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x2c2cb416, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_deinit) },
	{ 0xb1344294, __VMLINUX_SYMBOL_STR(ar9003_hw_bb_watchdog_check) },
	{ 0x74440350, __VMLINUX_SYMBOL_STR(ath9k_hw_enable_interrupts) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x2a71ee90, __VMLINUX_SYMBOL_STR(ath9k_cmn_debug_modal_eeprom) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x610ad5fa, __VMLINUX_SYMBOL_STR(ath9k_hw_intrpend) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xf1de281b, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9822665e, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x9427acde, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x35c52bf9, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x82dae60, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x7d40344, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txpowerlimit) },
	{ 0xfd079e73, __VMLINUX_SYMBOL_STR(ath9k_hw_stop_dma_queue) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,ath9k_hw,ath9k_common,cfg80211,ath";

MODULE_ALIAS("platform:ath9k");
MODULE_ALIAS("platform:ar933x_wmac");
MODULE_ALIAS("platform:ar934x_wmac");
MODULE_ALIAS("platform:qca955x_wmac");
MODULE_ALIAS("platform:qca953x_wmac");
MODULE_ALIAS("platform:qca956x_wmac");
MODULE_ALIAS("pci:v0000168Cd00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000024sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000027sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv0000168Csd00002096bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000029sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A3Bsd00001C71bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000105Bsd0000E01Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000011ADsd00006642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv00001A32sd00000306bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv0000185Fsd0000309Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd0000147Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv000010CFsd00001536bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv00001A3Bsd00002C37bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd0000002Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002086bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001237bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002126bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd0000126Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002152bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E075bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000168Csd00003122bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004105bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd00004106bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000410Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C706bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C680bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Dsd0000C708bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003218bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000017AAsd00003219bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002C97bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00002100bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001C56sd00004001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006627bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv000011ADsd00006628bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000105Bsd0000E04Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv0000144Fsd00007197bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002000bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00002001bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001186bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F86bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001195bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001A3Bsd00001F95bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C00bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001B9Asd00001C01bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv00001043sd0000850Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000032sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002116bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006661bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000168Csd00003117bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000017AAsd00003214bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001969sd00000091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001A3Bsd00002110bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001043sd0000850Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006631bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000011ADsd00006641bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv0000103Csd00001864bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000063bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000014CDsd00000064bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv000010CFsd00001783bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001028sd0000020Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv00001028sd00000300bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000030sv00001A56sd00002003bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000034sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000037sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002176bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E068bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A119bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000632bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006B2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001842bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00006671bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002811bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002812bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A1bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F8Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003025bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E069bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003028bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000622bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000672bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000662bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd000006A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000682bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd000018E3bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd0000217Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000103Csd00002005bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Dbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000411Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd00004129bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Dsd0000412Abc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000168Csd0000302Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000642bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000652bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000612bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00001832bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000692bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000803bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000011ADsd00000813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002130bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000213Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002182bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Bbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd0000218Cbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001A3Bsd00002F82bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000144Fsd00007202bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002810bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd00002813bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001B9Asd000028A4bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd00003027bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000185Fsd0000A120bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E07Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E08Fbc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E081bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E091bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv0000105Bsd0000E099bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00003026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv000017AAsd00004026bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001043sd000085F2bc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv00001028sd0000020Ebc*sc*i*");
MODULE_ALIAS("pci:v0000168Cd00000036sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5BFC1DF0F677EF01EFA6DFD");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

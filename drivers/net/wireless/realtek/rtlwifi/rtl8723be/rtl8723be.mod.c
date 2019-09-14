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
	{ 0x4830cbb1, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0x5c84f062, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e6c0d3e, __VMLINUX_SYMBOL_STR(rtl8723_phy_reload_adda_registers) },
	{ 0xcdff489, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0xacdb20c6, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x97c0bd92, __VMLINUX_SYMBOL_STR(rtl_dm_diginit) },
	{ 0x4476f3b7, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0x34551986, __VMLINUX_SYMBOL_STR(rtl_btc_get_ops_pointer) },
	{ 0x170d42fe, __VMLINUX_SYMBOL_STR(rtl_hal_pwrseqcmdparsing) },
	{ 0xe0f58875, __VMLINUX_SYMBOL_STR(rtl8723_download_fw) },
	{ 0xb8fb384d, __VMLINUX_SYMBOL_STR(efuse_power_switch) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa935fa3d, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x3e97f2cb, __VMLINUX_SYMBOL_STR(rtl_query_rxpwrpercentage) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xcc56bcc8, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x702ceb6b, __VMLINUX_SYMBOL_STR(rtl_evm_db_to_percentage) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x69ef0d89, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_dynamic_txpower) },
	{ 0xfc17b61, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x65ec328f, __VMLINUX_SYMBOL_STR(rtl8723_phy_reload_mac_registers) },
	{ 0xd71dc5a2, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0xce7cf56e, __VMLINUX_SYMBOL_STR(rtl_get_hwinfo) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x89b81bdd, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_dynamic_bb_powersaving) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd5033af, __VMLINUX_SYMBOL_STR(rtl8723_phy_rf_serial_read) },
	{ 0x18d5ff92, __VMLINUX_SYMBOL_STR(rtl8723_phy_query_bb_reg) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x17660da2, __VMLINUX_SYMBOL_STR(rtl_signal_scale_mapping) },
	{ 0x45fbc7fd, __VMLINUX_SYMBOL_STR(rtl8723_phy_mac_setting_calibration) },
	{ 0xe9abba3f, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xa3e12509, __VMLINUX_SYMBOL_STR(rtl8723_phy_path_a_fill_iqk_matrix) },
	{ 0xc1483a56, __VMLINUX_SYMBOL_STR(rtl8723_dm_init_edca_turbo) },
	{ 0x79ed07f7, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0x68a0843f, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x2dae880d, __VMLINUX_SYMBOL_STR(rtl8723_save_adda_registers) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xef6d28e4, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0xe66d825f, __VMLINUX_SYMBOL_STR(rtl_cmd_send_packet) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x8c754318, __VMLINUX_SYMBOL_STR(rtl8723_phy_init_bb_rf_reg_def) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7149ad63, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd1e4a71, __VMLINUX_SYMBOL_STR(rtl8723_phy_save_mac_registers) },
	{ 0x3cfadfa0, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0x1b4005ad, __VMLINUX_SYMBOL_STR(efuse_one_byte_read) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3b65bf2b, __VMLINUX_SYMBOL_STR(rtl_tx_report_handler) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x710b81cc, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0xbb1cac57, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x148b328b, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0xa3a092dd, __VMLINUX_SYMBOL_STR(rtl8723be_firmware_selfreset) },
	{ 0x958db545, __VMLINUX_SYMBOL_STR(rtl_c2hcmd_enqueue) },
	{ 0x3492aada, __VMLINUX_SYMBOL_STR(rtl8723_phy_path_adda_on) },
	{ 0x55894356, __VMLINUX_SYMBOL_STR(rtl_process_phyinfo) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xcf226b4a, __VMLINUX_SYMBOL_STR(rtl8723_phy_rf_serial_write) },
	{ 0xaf4d6d94, __VMLINUX_SYMBOL_STR(rtl8723_phy_calculate_bit_shift) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xd28328f7, __VMLINUX_SYMBOL_STR(rtl_get_tx_report) },
	{ 0x276a45b, __VMLINUX_SYMBOL_STR(rtl8723_phy_set_bb_reg) },
	{ 0x3bae9e4b, __VMLINUX_SYMBOL_STR(param_ops_ullong) },
	{ 0x6fee3a6c, __VMLINUX_SYMBOL_STR(rtl8723_phy_set_sw_chnl_cmdarray) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl8723-common,rtl_pci,btcoexist,mac80211";

MODULE_ALIAS("pci:v000010ECd0000B723sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "21605942C3963CD342F1A33");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x3c4819d1, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xd6149867, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x7255b6bc, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xa7a208fb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x41f70e39, __VMLINUX_SYMBOL_STR(rt2800_get_survey) },
	{ 0xf7d3d906, __VMLINUX_SYMBOL_STR(rt2800_ampdu_action) },
	{ 0x81c3aa35, __VMLINUX_SYMBOL_STR(rt2800_get_tsf) },
	{ 0x28d43532, __VMLINUX_SYMBOL_STR(rt2800_conf_tx) },
	{ 0x8aeff345, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_remove) },
	{ 0x1b4c838d, __VMLINUX_SYMBOL_STR(rt2x00mac_sta_add) },
	{ 0xeb504e58, __VMLINUX_SYMBOL_STR(rt2800_set_rts_threshold) },
	{ 0x32de85e5, __VMLINUX_SYMBOL_STR(rt2800_get_key_seq) },
	{ 0x7125c3c8, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x858904cb, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0xd51e4c55, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x2f8bbcfb, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x3e6b59b2, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xcae6eb99, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0xe0e8902a, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0xb402cd53, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0x757f9730, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0x5093ec7d, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xc4307b39, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x350cc7d3, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x21d9f483, __VMLINUX_SYMBOL_STR(rt2800mmio_get_txwi) },
	{ 0x13321c, __VMLINUX_SYMBOL_STR(rt2800mmio_init_registers) },
	{ 0x9823bd74, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x2d67f83b, __VMLINUX_SYMBOL_STR(rt2800_sta_remove) },
	{ 0x70b58659, __VMLINUX_SYMBOL_STR(rt2800_sta_add) },
	{ 0xbf0ec510, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0x73261e85, __VMLINUX_SYMBOL_STR(rt2800_config_ant) },
	{ 0x77e7ca48, __VMLINUX_SYMBOL_STR(rt2800_config_erp) },
	{ 0x52fa9b4f, __VMLINUX_SYMBOL_STR(rt2800_config_intf) },
	{ 0xf8bddf87, __VMLINUX_SYMBOL_STR(rt2800_config_filter) },
	{ 0x45ac2629, __VMLINUX_SYMBOL_STR(rt2800_config_pairwise_key) },
	{ 0x8c19d31e, __VMLINUX_SYMBOL_STR(rt2800_config_shared_key) },
	{ 0x64ef2be4, __VMLINUX_SYMBOL_STR(rt2800mmio_fill_rxdone) },
	{ 0xe973f01a, __VMLINUX_SYMBOL_STR(rt2800_clear_beacon) },
	{ 0x590b566f, __VMLINUX_SYMBOL_STR(rt2800_write_beacon) },
	{ 0x99668667, __VMLINUX_SYMBOL_STR(rt2800_write_tx_data) },
	{ 0xe021ba98, __VMLINUX_SYMBOL_STR(rt2800mmio_write_tx_desc) },
	{ 0xfc0796c, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0x30fcca97, __VMLINUX_SYMBOL_STR(rt2800mmio_stop_queue) },
	{ 0xb851253b, __VMLINUX_SYMBOL_STR(rt2800mmio_kick_queue) },
	{ 0x3d422b86, __VMLINUX_SYMBOL_STR(rt2800mmio_start_queue) },
	{ 0x58fa1706, __VMLINUX_SYMBOL_STR(rt2800_vco_calibration) },
	{ 0x28b5957e, __VMLINUX_SYMBOL_STR(rt2800_gain_calibration) },
	{ 0x24524098, __VMLINUX_SYMBOL_STR(rt2800_link_tuner) },
	{ 0x19cab981, __VMLINUX_SYMBOL_STR(rt2800_reset_tuner) },
	{ 0xdebf248f, __VMLINUX_SYMBOL_STR(rt2800_link_stats) },
	{ 0x8533d491, __VMLINUX_SYMBOL_STR(rt2800_rfkill_poll) },
	{ 0xb49cb7b8, __VMLINUX_SYMBOL_STR(rt2800mmio_clear_entry) },
	{ 0x77b948a3, __VMLINUX_SYMBOL_STR(rt2800mmio_get_entry_state) },
	{ 0xcaaedf40, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xfc70f05f, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0xaf8d1c4b, __VMLINUX_SYMBOL_STR(rt2800_load_firmware) },
	{ 0xf45674a9, __VMLINUX_SYMBOL_STR(rt2800_check_firmware) },
	{ 0xe313d9ff, __VMLINUX_SYMBOL_STR(rt2800_probe_hw) },
	{ 0xc6a1455e, __VMLINUX_SYMBOL_STR(rt2800mmio_autowake_tasklet) },
	{ 0x92c0bcd1, __VMLINUX_SYMBOL_STR(rt2800mmio_rxdone_tasklet) },
	{ 0x2505789d, __VMLINUX_SYMBOL_STR(rt2800mmio_tbtt_tasklet) },
	{ 0xfad1430, __VMLINUX_SYMBOL_STR(rt2800mmio_pretbtt_tasklet) },
	{ 0xe28f94c7, __VMLINUX_SYMBOL_STR(rt2800mmio_txstatus_tasklet) },
	{ 0x5fa4db64, __VMLINUX_SYMBOL_STR(rt2800mmio_interrupt) },
	{ 0x97a21f1d, __VMLINUX_SYMBOL_STR(rt2800_rt2x00debug) },
	{ 0xe0254ab4, __VMLINUX_SYMBOL_STR(rt2800mmio_queue_init) },
	{ 0x38fa6afa, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xf24a0cd8, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x26a05a61, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xdaf05077, __VMLINUX_SYMBOL_STR(rt2800mmio_toggle_irq) },
	{ 0x4ca50654, __VMLINUX_SYMBOL_STR(rt2800mmio_enable_radio) },
	{ 0x30e53238, __VMLINUX_SYMBOL_STR(rt2800_mcu_request) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2dba276a, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x370fb4ea, __VMLINUX_SYMBOL_STR(rt2800_read_eeprom_efuse) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0xea5a49b6, __VMLINUX_SYMBOL_STR(rt2800_efuse_detect) },
	{ 0xa7436b00, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2800lib,rt2800mmio,rt2x00mmio,rt2x00pci,eeprom_93cx6";

MODULE_ALIAS("pci:v00001814d00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000681sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000701sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000781sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003090sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003091sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007708sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007727sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007728sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007738sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007748sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007758sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007768sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001462d0000891Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001A3Bd00001059sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003290sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007711sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001432d00007722sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003062sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003562sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003592sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00003593sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000359Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005360sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005362sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005390sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00005392sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d0000539Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "301CF27E4464C544903A869");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

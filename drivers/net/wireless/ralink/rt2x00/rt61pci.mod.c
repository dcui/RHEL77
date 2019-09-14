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
	{ 0x6e56f9e0, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x84e03fcd, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0x7255b6bc, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xa7a208fb, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
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
	{ 0xfc0796c, __VMLINUX_SYMBOL_STR(rt2x00mmio_flush_queue) },
	{ 0xcaaedf40, __VMLINUX_SYMBOL_STR(rt2x00mmio_uninitialize) },
	{ 0xfc70f05f, __VMLINUX_SYMBOL_STR(rt2x00mmio_initialize) },
	{ 0x38fa6afa, __VMLINUX_SYMBOL_STR(rt2x00pci_resume) },
	{ 0xf24a0cd8, __VMLINUX_SYMBOL_STR(rt2x00pci_suspend) },
	{ 0x26a05a61, __VMLINUX_SYMBOL_STR(rt2x00pci_remove) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x5e1cfacf, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0x95c2d405, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x11d2d91e, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone) },
	{ 0x1d7d24dc, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0x9a7adc7f, __VMLINUX_SYMBOL_STR(rt2x00lib_txdone_noinfo) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd0c57ba3, __VMLINUX_SYMBOL_STR(rt2x00lib_set_mac_address) },
	{ 0x27cb133b, __VMLINUX_SYMBOL_STR(eeprom_93cx6_multiread) },
	{ 0xd29b009f, __VMLINUX_SYMBOL_STR(crc_itu_t_table) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x253ef8c, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x59d2264, __VMLINUX_SYMBOL_STR(rt2x00debug_dump_frame) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2dba276a, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0x4b1c3449, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9823bd74, __VMLINUX_SYMBOL_STR(rt2x00mmio_regbusy_read) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xa7436b00, __VMLINUX_SYMBOL_STR(rt2x00pci_probe) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00lib,rt2x00mmio,rt2x00pci,eeprom_93cx6,crc-itu-t";

MODULE_ALIAS("pci:v00001814d00000301sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001814d00000401sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "92BA049313239242095E382");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

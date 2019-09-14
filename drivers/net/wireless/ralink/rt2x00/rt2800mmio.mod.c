#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5a4203e0, __VMLINUX_SYMBOL_STR(rt2800_disable_wpdma) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x95c2d405, __VMLINUX_SYMBOL_STR(rt2x00lib_beacondone) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0xbf0ec510, __VMLINUX_SYMBOL_STR(rt2800_config) },
	{ 0xd26a1275, __VMLINUX_SYMBOL_STR(rt2800_get_txwi_rxwi_size) },
	{ 0x99ec8e2b, __VMLINUX_SYMBOL_STR(rt2x00lib_pretbtt) },
	{ 0xd399e644, __VMLINUX_SYMBOL_STR(rt2800_wait_wpdma_ready) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd2c41f1, __VMLINUX_SYMBOL_STR(rt2800_process_rxwi) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xc59e6c14, __VMLINUX_SYMBOL_STR(rt2x00queue_for_each_entry) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x1d7d24dc, __VMLINUX_SYMBOL_STR(rt2x00queue_get_entry) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x5e1cfacf, __VMLINUX_SYMBOL_STR(rt2x00mmio_rxdone) },
	{ 0xc855f276, __VMLINUX_SYMBOL_STR(rt2800_txdone_entry) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xb3454fb, __VMLINUX_SYMBOL_STR(rt2800_enable_radio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2800lib,rt2x00lib,rt2x00mmio";


MODULE_INFO(srcversion, "86416D43F459C712167FF53");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

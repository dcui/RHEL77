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
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xc5853b05, __VMLINUX_SYMBOL_STR(tifm_add_adapter) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x2b0b1f28, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x5111c798, __VMLINUX_SYMBOL_STR(tifm_alloc_adapter) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xd374dfba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x62440d5, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0x14e4c43, __VMLINUX_SYMBOL_STR(tifm_alloc_device) },
	{ 0x4cd83338, __VMLINUX_SYMBOL_STR(tifm_free_device) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x375580a, __VMLINUX_SYMBOL_STR(tifm_free_adapter) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x9610eab4, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa78f4b55, __VMLINUX_SYMBOL_STR(tifm_remove_adapter) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x909c8ff0, __VMLINUX_SYMBOL_STR(pci_enable_wake) },
	{ 0xa23c6646, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0x53108e44, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa8c2ec46, __VMLINUX_SYMBOL_STR(tifm_queue_work) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5bbdc39c, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x5ede9448, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tifm_core";

MODULE_ALIAS("pci:v0000104Cd00008033sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000803Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000AC8Fsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "78340F6AE739AA9D0F0E1DD");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
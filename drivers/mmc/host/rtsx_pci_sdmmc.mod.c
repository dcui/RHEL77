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
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe37c0429, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_transfer) },
	{ 0x824ce3ba, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd_no_wait) },
	{ 0xd5dd9ce0, __VMLINUX_SYMBOL_STR(rtsx_pci_write_ppbuf) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x824353f4, __VMLINUX_SYMBOL_STR(rtsx_pci_read_ppbuf) },
	{ 0xe67c2ccc, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_disable) },
	{ 0xea26eb94, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_off) },
	{ 0x6333fee8, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_clock) },
	{ 0x217aa31d, __VMLINUX_SYMBOL_STR(rtsx_pci_card_power_on) },
	{ 0xd452c1d5, __VMLINUX_SYMBOL_STR(rtsx_pci_card_pull_ctl_enable) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3d143df4, __VMLINUX_SYMBOL_STR(rtsx_pci_switch_output_voltage) },
	{ 0x1db37d83, __VMLINUX_SYMBOL_STR(rtsx_pci_write_register) },
	{ 0x9b2ae08a, __VMLINUX_SYMBOL_STR(rtsx_pci_read_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4e02468c, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exclusive_check) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb7eb2d30, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_map_sg) },
	{ 0x30b2cec3, __VMLINUX_SYMBOL_STR(rtsx_pci_card_exist) },
	{ 0xd5e924cb, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x12cd3ed7, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0xf4c1e14a, __VMLINUX_SYMBOL_STR(rtsx_pci_send_cmd) },
	{ 0x11954906, __VMLINUX_SYMBOL_STR(rtsx_pci_dma_unmap_sg) },
	{ 0x666f4f4c, __VMLINUX_SYMBOL_STR(rtsx_pci_add_cmd) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xea9875a1, __VMLINUX_SYMBOL_STR(rtsx_pci_start_run) },
	{ 0x91c990f8, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1ed98b1c, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x6ef92e9a, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x80d795cc, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0xad3d6672, __VMLINUX_SYMBOL_STR(rtsx_pci_complete_unfinished_transfer) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_pci,mmc_core";

MODULE_ALIAS("platform:rtsx_pci_sdmmc");

MODULE_INFO(srcversion, "0E62B1E4AB7239FD8AF0768");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

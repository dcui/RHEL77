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
	{ 0xa82f7161, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_read_register) },
	{ 0x3fb08b72, __VMLINUX_SYMBOL_STR(rtsx_usb_transfer_data) },
	{ 0xe9f96abb, __VMLINUX_SYMBOL_STR(rtsx_usb_write_ppbuf) },
	{ 0x7fe38f48, __VMLINUX_SYMBOL_STR(sg_copy_to_buffer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xb1951d13, __VMLINUX_SYMBOL_STR(rtsx_usb_switch_clock) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x445082c3, __VMLINUX_SYMBOL_STR(rtsx_usb_get_card_status) },
	{ 0xd0e7d08a, __VMLINUX_SYMBOL_STR(rtsx_usb_card_exclusive_check) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x142c4fa6, __VMLINUX_SYMBOL_STR(rtsx_usb_write_register) },
	{ 0xbc3227be, __VMLINUX_SYMBOL_STR(rtsx_usb_read_register) },
	{ 0xcc21fdfa, __VMLINUX_SYMBOL_STR(rtsx_usb_read_ppbuf) },
	{ 0x9a52851f, __VMLINUX_SYMBOL_STR(rtsx_usb_get_rsp) },
	{ 0xa9638f8, __VMLINUX_SYMBOL_STR(rtsx_usb_send_cmd) },
	{ 0xa8582e9e, __VMLINUX_SYMBOL_STR(rtsx_usb_add_cmd) },
	{ 0xba954a0e, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xe79c0c0a, __VMLINUX_SYMBOL_STR(rtsx_usb_ep0_write_register) },
	{ 0x7baababe, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd5e924cb, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0xaa8369c5, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf350d6c, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xcace5945, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x12cd3ed7, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3906ef29, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x49dc84dd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x1ed98b1c, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0xa39e123d, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6ef92e9a, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x80d795cc, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtsx_usb,mmc_core";

MODULE_ALIAS("platform:rtsx_usb_sdmmc");

MODULE_INFO(srcversion, "0E8C77268AB387CF4B2BBE8");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

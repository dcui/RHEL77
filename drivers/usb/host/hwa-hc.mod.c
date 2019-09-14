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
	{ 0xfaa8e9f3, __VMLINUX_SYMBOL_STR(wusbhc_rh_start_port_reset) },
	{ 0x2c73d018, __VMLINUX_SYMBOL_STR(wusbhc_rh_control) },
	{ 0x4354ce65, __VMLINUX_SYMBOL_STR(wusbhc_rh_status_data) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe72d009, __VMLINUX_SYMBOL_STR(wa_dti_start) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa68ef25c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7a4497db, __VMLINUX_SYMBOL_STR(kzfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x38da8dc6, __VMLINUX_SYMBOL_STR(wusbhc_b_create) },
	{ 0x38707bac, __VMLINUX_SYMBOL_STR(device_wakeup_enable) },
	{ 0x5cec2482, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x420eb90a, __VMLINUX_SYMBOL_STR(wa_create) },
	{ 0xf82e4877, __VMLINUX_SYMBOL_STR(wusbhc_create) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfe2e17d7, __VMLINUX_SYMBOL_STR(wusb_et_name) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0x8a53927b, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0x610c5e64, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x16705618, __VMLINUX_SYMBOL_STR(usb_init_urb) },
	{ 0xbd816f0, __VMLINUX_SYMBOL_STR(wa_process_errored_transfers_run) },
	{ 0x122f15ac, __VMLINUX_SYMBOL_STR(wa_urb_enqueue_run) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf3c05cf4, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x69e27c7a, __VMLINUX_SYMBOL_STR(bitmap_copy_le) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbb6bf5e, __VMLINUX_SYMBOL_STR(wusb_cluster_id_get) },
	{ 0x669fe0cc, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb725d128, __VMLINUX_SYMBOL_STR(wusb_cluster_id_put) },
	{ 0x43331e5d, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x33d29286, __VMLINUX_SYMBOL_STR(wa_urb_enqueue) },
	{ 0xfa81ed82, __VMLINUX_SYMBOL_STR(wa_urb_dequeue) },
	{ 0xf9a9d433, __VMLINUX_SYMBOL_STR(rpipe_ep_disable) },
	{ 0x788a1e59, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0xfcf86843, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x497074e2, __VMLINUX_SYMBOL_STR(wusbhc_b_destroy) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x43611dfa, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x83fa1f49, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0x525da42a, __VMLINUX_SYMBOL_STR(uwb_rc_put) },
	{ 0xf902a129, __VMLINUX_SYMBOL_STR(wusbhc_destroy) },
	{ 0x1a31c56c, __VMLINUX_SYMBOL_STR(__wa_destroy) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wusbcore,wusb-wa,uwb";

MODULE_ALIAS("usb:v13DCp5310d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v13DCp5611d*dc*dsc*dp*icE0isc02ip01in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icE0isc02ip01in*");

MODULE_INFO(srcversion, "EB2C0FF2CB7F18B53656B68");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

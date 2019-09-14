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
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2e311e7, __VMLINUX_SYMBOL_STR(devm_can_led_init) },
	{ 0x20a294ae, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc2bcfa37, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0xf95b7892, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x79cb99a0, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0x32897def, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbffe6eb, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x17e5bc46, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0x25ae988e, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x3085bd19, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x774b6ee0, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x87bc5bc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4a53aba7, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa0f3b7a1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x20982a06, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0xcb9fc200, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x5c04acc5, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xac522ac2, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd0abc268, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe4740a86, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x607ab0a2, __VMLINUX_SYMBOL_STR(can_led_event) },
	{ 0xb8f5773b, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x434eb397, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xff1076fc, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x94c19e3a, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0x64d6bea2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("usb:v0483p1234d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D1EC86126D086055088E5B0");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

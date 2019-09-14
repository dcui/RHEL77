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
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xea513432, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa38ee07d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x784984fa, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x3085bd19, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x63fedd30, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x64d6bea2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5948f2f0, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x93a99dbc, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs_rh) },
	{ 0xbfe4f83a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x7028aa99, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe4740a86, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xb46e51b2, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x35c52bf9, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xc2b6b29f, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xed090771, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xcb118656, __VMLINUX_SYMBOL_STR(mii_ethtool_get_link_ksettings) },
	{ 0xa67851d0, __VMLINUX_SYMBOL_STR(mii_ethtool_set_link_ksettings) },
	{ 0x5c04acc5, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x669fe0cc, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xa68ef25c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x87bc5bc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xa0f3b7a1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x6840cbd6, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mii";

MODULE_ALIAS("usb:v0506p4601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0557p2007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p110Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8pABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap1046d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5046d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApB004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p0986d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07A6p07C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3334p1701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C9pB100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0121d*dc00dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp0122d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0986d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0987d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v049Fp8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp0988d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08DDp8511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001pABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1342p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05CCp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E66p400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v03F0p811Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0913d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp093Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0951p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep4005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056EpABC1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ep200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2204d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp2206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v077Bp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp400Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Bp200Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep007Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p1020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B39p0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B39p0901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08D1p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15E8p9100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15E8p9110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v067Cp1001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EACBC265B535569769744AD");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

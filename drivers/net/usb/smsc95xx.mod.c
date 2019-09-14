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
	{ 0x92e9064e, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x1674d40, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xfbe515d0, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x2d227d1c, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x2e49034e, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xcab428c4, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x185157a2, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0xf8f16133, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x2e3a8693, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa38ee07d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x8b595e14, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x97a06c6d, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5e0bc03c, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x8d328f38, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x12bb0f4f, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x35a38529, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x8b4e1a6, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf7d80088, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2554df8, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9f9217a3, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xa78743ce, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface_no_resume) },
	{ 0x1068a034, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0xd5e39184, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0x6ea7691d, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xc2b6b29f, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x320a8d8, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x771e6f89, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x1b942f7d, __VMLINUX_SYMBOL_STR(usbnet_set_link_ksettings) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7978b6c9, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0xddcaac93, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x980fbbb5, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x8031a2ad, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x215ebd78, __VMLINUX_SYMBOL_STR(bitrev16) },
	{ 0xa4511467, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0x755e202d, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x35c52bf9, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0x68545154, __VMLINUX_SYMBOL_STR(usbnet_get_link_ksettings) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x6840cbd6, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5c04acc5, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x9dd80b79, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfbc25e3d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v0424p9500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424pEC00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9900d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9901d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9902d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9903d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9905d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9906d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9907d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9908d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9909d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p9E08d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5ABF599CDD1215578CC3298");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

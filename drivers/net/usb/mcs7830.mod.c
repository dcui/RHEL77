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
	{ 0x1b942f7d, __VMLINUX_SYMBOL_STR(usbnet_set_link_ksettings) },
	{ 0x68545154, __VMLINUX_SYMBOL_STR(usbnet_get_link_ksettings) },
	{ 0x1674d40, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xfbe515d0, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0x2d227d1c, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x2e49034e, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x185157a2, __VMLINUX_SYMBOL_STR(usbnet_get_stats64) },
	{ 0xf8f16133, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x2e3a8693, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x8b595e14, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x97a06c6d, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0x5e0bc03c, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0xd2554df8, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8d328f38, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x12bb0f4f, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6ea7691d, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf7d80088, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfaf98462, __VMLINUX_SYMBOL_STR(bitrev32) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xcab428c4, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x9dd80b79, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x755e202d, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xddcaac93, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0x8031a2ad, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6840cbd6, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x9f9217a3, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbnet,mii";

MODULE_ALIAS("usb:v9710p7832d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9710p7730d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0021d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8E91BD8D546A44C4E1BE42F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x90b3e49a, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x208fb985, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x669fe0cc, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6354ef7d, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb";

MODULE_ALIAS("usb:v04B4p2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p2101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p2104d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD650d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p3101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD630d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3011pB012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD660d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3034p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp3000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00A8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD481d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD482d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp3100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD421d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v9022pD632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1FE1p5456d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D13A8B8931DF230527D26E9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x546a1b0a, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf95b7892, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xefc75a8f, __VMLINUX_SYMBOL_STR(dvb_usbv2_generic_rw_locked) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e8e5885, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0x151b4d4d, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xc0072474, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xcd61deda, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xa3c3c7c6, __VMLINUX_SYMBOL_STR(dvb_usbv2_reset_resume) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,rc-core";

MODULE_ALIAS("usb:v15A4p9035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p1003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB835d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp1867d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA867d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp0825d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1779d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00AAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0099d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "84B527A098B0EDB67C36CE4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
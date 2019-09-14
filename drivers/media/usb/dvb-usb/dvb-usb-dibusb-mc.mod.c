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
	{ 0xb47559e0, __VMLINUX_SYMBOL_STR(rc_map_dibusb_table) },
	{ 0x90b3e49a, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x208fb985, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x4670846, __VMLINUX_SYMBOL_STR(dibusb_rc_query) },
	{ 0x17e11b2f, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x652ef1b6, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x60005b40, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9bb0cb4, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0x238bd710, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x88c28683, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x1882dc8b, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v10B8p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p8109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CApF001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE360d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:vEB1ApE361d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5032p0BC7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p5001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8EA7C1B61BEC53088CAEC32");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

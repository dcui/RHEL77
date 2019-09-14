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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x43de74e4, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0xf85e4504, __VMLINUX_SYMBOL_STR(gspca_suspend) },
	{ 0x52749753, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0x895c85c5, __VMLINUX_SYMBOL_STR(gspca_resume) },
	{ 0x7be134d6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x498d9eba, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0x58293ee6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x669fe0cc, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x5af1e4f7, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0xa6771be3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,gspca_main";

MODULE_ALIAS("usb:v041Ep405Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0892d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0896d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp0897d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0323d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8p0328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0AC8pC301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15B8p6002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp4802d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EEF6ED6BC9F62BB6DA3BA89");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

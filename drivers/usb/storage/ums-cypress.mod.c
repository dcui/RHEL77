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
	{ 0xc9154be9, __VMLINUX_SYMBOL_STR(usb_stor_post_reset) },
	{ 0x1bc3edc2, __VMLINUX_SYMBOL_STR(usb_stor_sense_invalidCDB) },
	{ 0x5287c54b, __VMLINUX_SYMBOL_STR(usb_stor_disconnect) },
	{ 0x40f5aacc, __VMLINUX_SYMBOL_STR(scsi_eh_restore_cmnd) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xb55c94b2, __VMLINUX_SYMBOL_STR(usb_stor_probe2) },
	{ 0x75c15def, __VMLINUX_SYMBOL_STR(usb_stor_transparent_scsi_command) },
	{ 0x9a1ae9fa, __VMLINUX_SYMBOL_STR(usb_stor_host_template_init) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb065919c, __VMLINUX_SYMBOL_STR(usb_stor_pre_reset) },
	{ 0xa906be1a, __VMLINUX_SYMBOL_STR(usb_stor_reset_resume) },
	{ 0x5fed33ec, __VMLINUX_SYMBOL_STR(usb_stor_suspend) },
	{ 0x92792a21, __VMLINUX_SYMBOL_STR(usb_stor_probe1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6e89f838, __VMLINUX_SYMBOL_STR(scsi_eh_prep_cmnd) },
	{ 0xa0be82b8, __VMLINUX_SYMBOL_STR(usb_stor_resume) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usb-storage";

MODULE_ALIAS("usb:v04B4p6830d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6831d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14CDp6116d0160dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "222DF4FD6FD5824BFD77B21");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

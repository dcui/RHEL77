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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4d405db8, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x9b36baa6, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x816b8fe, __VMLINUX_SYMBOL_STR(thermal_zone_device_register) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xee23857b, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x819cdb08, __VMLINUX_SYMBOL_STR(thermal_cooling_device_register) },
	{ 0x50d5b739, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x7db9025b, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x81e6b37f, __VMLINUX_SYMBOL_STR(dmi_get_system_info) },
	{ 0xad3c4835, __VMLINUX_SYMBOL_STR(thermal_zone_device_update) },
	{ 0x368f1828, __VMLINUX_SYMBOL_STR(thermal_zone_bind_cooling_device) },
	{ 0x6e45232b, __VMLINUX_SYMBOL_STR(thermal_zone_unbind_cooling_device) },
	{ 0x883d9148, __VMLINUX_SYMBOL_STR(thermal_zone_device_unregister) },
	{ 0xf1162e5a, __VMLINUX_SYMBOL_STR(thermal_cooling_device_unregister) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xba2d8594, __VMLINUX_SYMBOL_STR(ec_read) },
	{ 0x876dafc3, __VMLINUX_SYMBOL_STR(ec_write) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "537846115531ABE7A87F05F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

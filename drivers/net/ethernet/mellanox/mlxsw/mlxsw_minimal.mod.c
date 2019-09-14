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
	{ 0x674187c7, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_unregister) },
	{ 0x766b6422, __VMLINUX_SYMBOL_STR(mlxsw_i2c_driver_unregister) },
	{ 0x5f2d7b40, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_register) },
	{ 0xa558655b, __VMLINUX_SYMBOL_STR(mlxsw_i2c_driver_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core,mlxsw_i2c";

MODULE_ALIAS("i2c:mlxsw_minimal");

MODULE_INFO(srcversion, "2E4B1C5E5CDBC152D92CD85");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x5bd84714, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x54677dd5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd0ecd19d, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf69fef42, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7dbdd117, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc5d960b9, __VMLINUX_SYMBOL_STR(i2c_smbus_read_block_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:lineage_pem");

MODULE_INFO(srcversion, "85DBFBAC562B3020042880F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
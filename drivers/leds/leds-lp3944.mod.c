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
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xaa8369c5, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8f7022cd, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0xec9c706c, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa39e123d, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("i2c:lp3944");

MODULE_INFO(srcversion, "9347882727EE1692CE731E4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
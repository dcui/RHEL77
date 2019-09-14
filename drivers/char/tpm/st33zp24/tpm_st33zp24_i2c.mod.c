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
	{ 0xa8051800, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xa12d929d, __VMLINUX_SYMBOL_STR(desc_to_gpio) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9c7ef2bd, __VMLINUX_SYMBOL_STR(__devm_gpiod_get_index) },
	{ 0xedc6fd9d, __VMLINUX_SYMBOL_STR(st33zp24_probe) },
	{ 0xc90e80bd, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x33978c2, __VMLINUX_SYMBOL_STR(st33zp24_pm_suspend) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x91e9632d, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e97e36d, __VMLINUX_SYMBOL_STR(device_rh_alloc) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x97e6e7bc, __VMLINUX_SYMBOL_STR(st33zp24_remove) },
	{ 0xb01f3a2c, __VMLINUX_SYMBOL_STR(st33zp24_pm_resume) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tpm_st33zp24";

MODULE_ALIAS("acpi*:SMO3324:*");
MODULE_ALIAS("of:N*T*Cst,st33zp24-i2c*");
MODULE_ALIAS("i2c:st33zp24-i2c");

MODULE_INFO(srcversion, "C8F9F4CE9B13F219D0A43F5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

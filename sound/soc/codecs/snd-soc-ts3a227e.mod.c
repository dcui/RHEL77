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
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x4b842628, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xe0a9ae43, __VMLINUX_SYMBOL_STR(snd_jack_set_key) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xdef9258e, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa6688ab0, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x7ed89fbf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xc5ce1b3b, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6443c467, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xa6ea6151, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,regmap-i2c,snd-soc-core";

MODULE_ALIAS("of:N*T*Cti,ts3a227e*");
MODULE_ALIAS("i2c:ts3a227e");
MODULE_ALIAS("acpi*:104C227E:*");

MODULE_INFO(srcversion, "F9A0370784AE526C6C9C228");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

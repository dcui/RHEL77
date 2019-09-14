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
	{ 0xebae3ad7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x10f9d03c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xe1927b6a, __VMLINUX_SYMBOL_STR(snd_soc_component_update_bits) },
	{ 0x14e8ae6d, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x992fe862, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x95581aa3, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x769e3fb3, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x9d3e9633, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xfb2cdc19, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xa1a0665d, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa6688ab0, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x7ed89fbf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0xee9bdaed, __VMLINUX_SYMBOL_STR(snd_soc_component_write) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8532270d, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcf3c7b87, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm,regmap-i2c";

MODULE_ALIAS("i2c:es8316");
MODULE_ALIAS("of:N*T*Ceverest,es8316*");
MODULE_ALIAS("acpi*:ESSX8316:*");

MODULE_INFO(srcversion, "76489CBAE68AEB6BB787DE9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

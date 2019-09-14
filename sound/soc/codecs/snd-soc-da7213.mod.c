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
	{ 0xf0f72dee, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7a933c98, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xebae3ad7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x10f9d03c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x3a2abdbf, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xe1927b6a, __VMLINUX_SYMBOL_STR(snd_soc_component_update_bits) },
	{ 0x14e8ae6d, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x992fe862, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x95581aa3, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2aef76ba, __VMLINUX_SYMBOL_STR(device_property_read_string) },
	{ 0x9d3e9633, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xfb2cdc19, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x505ab52d, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0xa1a0665d, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xdef9258e, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa6688ab0, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0xad5a6715, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x7ed89fbf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0xee9bdaed, __VMLINUX_SYMBOL_STR(snd_soc_component_write) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe2caf32c, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xe86a6a77, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0x8532270d, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1e5366ca, __VMLINUX_SYMBOL_STR(snd_soc_component_read32) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcf3c7b87, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,regmap-i2c";

MODULE_ALIAS("acpi*:DLGS7212:*");
MODULE_ALIAS("acpi*:DLGS7213:*");
MODULE_ALIAS("i2c:da7213");

MODULE_INFO(srcversion, "63946419ED4CAEED0666A2E");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

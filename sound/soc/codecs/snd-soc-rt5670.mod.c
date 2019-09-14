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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xba954a0e, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x49dc84dd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0xebae3ad7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x30199b88, __VMLINUX_SYMBOL_STR(regmap_register_patch) },
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x10f9d03c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x70617a04, __VMLINUX_SYMBOL_STR(rl6231_get_clk_info) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x232da534, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0xe1927b6a, __VMLINUX_SYMBOL_STR(snd_soc_component_update_bits) },
	{ 0x14e8ae6d, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x4b842628, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x992fe862, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x95581aa3, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x65043f86, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8d7fa148, __VMLINUX_SYMBOL_STR(rl6231_get_pre_div) },
	{ 0x9d3e9633, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0xfb2cdc19, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa1a0665d, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xf350d6c, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa6688ab0, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x7ed89fbf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xe062ccba, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xee9bdaed, __VMLINUX_SYMBOL_STR(snd_soc_component_write) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xdba4502f, __VMLINUX_SYMBOL_STR(rl6231_calc_dmic_clk) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0xca598f8d, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x8532270d, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x8a54c38f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x74b4aeb2, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0xedc5bfdc, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x7f68b24d, __VMLINUX_SYMBOL_STR(rl6231_pll_calc) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1e5366ca, __VMLINUX_SYMBOL_STR(snd_soc_component_read32) },
	{ 0xeae89548, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6443c467, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xc50e6873, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4e81f890, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xa042bab0, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xcf3c7b87, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,snd-soc-rl6231,regmap-i2c";

MODULE_ALIAS("i2c:rt5670");
MODULE_ALIAS("i2c:rt5671");
MODULE_ALIAS("i2c:rt5672");
MODULE_ALIAS("acpi*:10EC5670:*");
MODULE_ALIAS("acpi*:10EC5672:*");
MODULE_ALIAS("acpi*:10EC5640:*");

MODULE_INFO(srcversion, "A911DEB31EB35214A1BB2BC");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

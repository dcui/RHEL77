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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x7a933c98, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xebae3ad7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x10f9d03c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0x3a2abdbf, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x232da534, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xe1927b6a, __VMLINUX_SYMBOL_STR(snd_soc_component_update_bits) },
	{ 0x14e8ae6d, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x4b842628, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x992fe862, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x95581aa3, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xc738327b, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0x65043f86, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0x69b6d3c2, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw_range) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x684c9159, __VMLINUX_SYMBOL_STR(snd_soc_add_component_controls) },
	{ 0x725ef362, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw_range) },
	{ 0xc8704fa2, __VMLINUX_SYMBOL_STR(snd_soc_bytes_info) },
	{ 0x9d3e9633, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x4d249292, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw_range) },
	{ 0xfb2cdc19, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x505ab52d, __VMLINUX_SYMBOL_STR(clk_round_rate) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa1a0665d, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0xdef9258e, __VMLINUX_SYMBOL_STR(device_property_read_u32_array) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa6688ab0, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0xad5a6715, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x7ed89fbf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0xee9bdaed, __VMLINUX_SYMBOL_STR(snd_soc_component_write) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xaad693b0, __VMLINUX_SYMBOL_STR(pm_wakeup_event) },
	{ 0xe2caf32c, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xe86a6a77, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xca598f8d, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x8532270d, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x364214a8, __VMLINUX_SYMBOL_STR(snd_soc_bytes_get) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x409305bf, __VMLINUX_SYMBOL_STR(snd_soc_bytes_put) },
	{ 0x9e97e36d, __VMLINUX_SYMBOL_STR(device_rh_alloc) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc5ce1b3b, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x1e5366ca, __VMLINUX_SYMBOL_STR(snd_soc_component_read32) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6443c467, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xa6ea6151, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xc50e6873, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x4e81f890, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xa042bab0, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
	{ 0xcf3c7b87, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,regmap-i2c";

MODULE_ALIAS("acpi*:193C9890:*");
MODULE_ALIAS("i2c:max98090");
MODULE_ALIAS("i2c:max98091");
MODULE_ALIAS("of:N*T*Cmaxim,max98090*");
MODULE_ALIAS("of:N*T*Cmaxim,max98091*");

MODULE_INFO(srcversion, "A35CD275587D6E5EC33166C");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x2008a83a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_widget) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xba954a0e, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0xb5c5aeb8, __VMLINUX_SYMBOL_STR(hdac_get_device_id) },
	{ 0x49dc84dd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x7709bb64, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0xebae3ad7, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xa32b26e3, __VMLINUX_SYMBOL_STR(snd_hdac_ext_bus_get_link) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa0d3db3b, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x1843aa10, __VMLINUX_SYMBOL_STR(snd_soc_add_card_controls) },
	{ 0xbf4aa8ae, __VMLINUX_SYMBOL_STR(snd_hdac_ext_bus_link_put) },
	{ 0x400cb8fd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0x75481cbc, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0x894421fc, __VMLINUX_SYMBOL_STR(snd_hdac_get_sub_nodes) },
	{ 0x232da534, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_controls) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7baababe, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x86689c5a, __VMLINUX_SYMBOL_STR(snd_hda_ext_driver_unregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20c5595e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_eld) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2b2851be, __VMLINUX_SYMBOL_STR(snd_hdac_check_power_state) },
	{ 0x95581aa3, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x65043f86, __VMLINUX_SYMBOL_STR(snd_soc_dapm_add_routes) },
	{ 0x88a60cbb, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_mask64) },
	{ 0x9b80ac31, __VMLINUX_SYMBOL_STR(snd_hda_ext_driver_register) },
	{ 0x98ca2b, __VMLINUX_SYMBOL_STR(snd_hdac_display_power) },
	{ 0x73af6620, __VMLINUX_SYMBOL_STR(snd_hdac_acomp_get_eld) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x45fdb50d, __VMLINUX_SYMBOL_STR(dapm_kcontrol_get_value) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfd4ca8ee, __VMLINUX_SYMBOL_STR(snd_hdac_setup_channel_mapping) },
	{ 0x3bd544c2, __VMLINUX_SYMBOL_STR(snd_hdac_get_active_channels) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xdc1244a2, __VMLINUX_SYMBOL_STR(snd_hdac_ext_bus_link_get) },
	{ 0x383242ce, __VMLINUX_SYMBOL_STR(snd_hdac_register_chmap_ops) },
	{ 0xcb4e4ef3, __VMLINUX_SYMBOL_STR(snd_hdac_read_parm_uncached) },
	{ 0x5c07cb49, __VMLINUX_SYMBOL_STR(snd_hdac_calc_stream_format) },
	{ 0x5da7b422, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x408414b1, __VMLINUX_SYMBOL_STR(snd_hdac_acomp_register_notifier) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x53aaea4f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0xf350d6c, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfbffd850, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x4049b5c7, __VMLINUX_SYMBOL_STR(devm_kstrdup) },
	{ 0xf58eac91, __VMLINUX_SYMBOL_STR(snd_soc_dapm_new_widgets) },
	{ 0xa63322c6, __VMLINUX_SYMBOL_STR(hdmi_audio_infoframe_pack) },
	{ 0x7ed89fbf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xe062ccba, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xad9a8039, __VMLINUX_SYMBOL_STR(snd_hdac_refresh_widgets) },
	{ 0xa3a2f853, __VMLINUX_SYMBOL_STR(snd_hdac_query_supported_pcm) },
	{ 0x74b4aeb2, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xbfc4ecb8, __VMLINUX_SYMBOL_STR(snd_soc_dapm_enable_pin) },
	{ 0xf5c2d34d, __VMLINUX_SYMBOL_STR(hdmi_audio_infoframe_init) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x84f0352, __VMLINUX_SYMBOL_STR(snd_hdac_channel_allocation) },
	{ 0xc5ce1b3b, __VMLINUX_SYMBOL_STR(snd_soc_jack_report) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x76782c9f, __VMLINUX_SYMBOL_STR(snd_hdac_add_chmap_ctls) },
	{ 0x8e11fea3, __VMLINUX_SYMBOL_STR(snd_hdac_sync_power_state) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x577e719f, __VMLINUX_SYMBOL_STR(snd_hdac_get_connections) },
	{ 0xcf3c7b87, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-hda-core,snd-hda-ext-core,snd-pcm";

MODULE_ALIAS("hdaudio:v80862809r00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Ar00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Br00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Cr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Dr00100000a02*");
MODULE_ALIAS("hdaudio:v8086280Fr00100000a02*");

MODULE_INFO(srcversion, "A4561A493C3CC82E0F43FEF");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

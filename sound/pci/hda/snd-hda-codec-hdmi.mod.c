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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x97f8cd94, __VMLINUX_SYMBOL_STR(snd_hdac_i915_set_bclk) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x46a71274, __VMLINUX_SYMBOL_STR(snd_hda_get_num_devices) },
	{ 0x3adebc92, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable) },
	{ 0xfb722264, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x7709bb64, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0xc12fec8e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x60c8bdea, __VMLINUX_SYMBOL_STR(snd_device_free) },
	{ 0xe4e07754, __VMLINUX_SYMBOL_STR(snd_hdac_print_channel_allocation) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0x54a7eb8d, __VMLINUX_SYMBOL_STR(snd_info_create_card_entry) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeda3a721, __VMLINUX_SYMBOL_STR(snd_print_pcm_bits) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x894421fc, __VMLINUX_SYMBOL_STR(snd_hdac_get_sub_nodes) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9e913c1, __VMLINUX_SYMBOL_STR(snd_pcm_alt_chmaps) },
	{ 0xb81a118a, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x67bfe791, __VMLINUX_SYMBOL_STR(snd_hdac_spk_to_chmap) },
	{ 0x44cabef8, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_unassign) },
	{ 0x836685ee, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xee31c47, __VMLINUX_SYMBOL_STR(snd_hdac_get_stream_stripe_ctl) },
	{ 0x2b2851be, __VMLINUX_SYMBOL_STR(snd_hdac_check_power_state) },
	{ 0x73af6620, __VMLINUX_SYMBOL_STR(snd_hdac_acomp_get_eld) },
	{ 0xbfda119a, __VMLINUX_SYMBOL_STR(snd_hda_pin_sense) },
	{ 0xa21fcd78, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x769e3fb3, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x2e2b40d2, __VMLINUX_SYMBOL_STR(strncat) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x4c7ec4b6, __VMLINUX_SYMBOL_STR(snd_hdac_get_ch_alloc_from_ca) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x19f1ae8f, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0xc8f64c49, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0xbad31b90, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xfd4ca8ee, __VMLINUX_SYMBOL_STR(snd_hdac_setup_channel_mapping) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x3bd544c2, __VMLINUX_SYMBOL_STR(snd_hdac_get_active_channels) },
	{ 0x2f59585, __VMLINUX_SYMBOL_STR(snd_hda_set_dev_select) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x32ed45f3, __VMLINUX_SYMBOL_STR(snd_hdac_power_down_pm) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc9235785, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x6112fe82, __VMLINUX_SYMBOL_STR(snd_hda_spdif_ctls_assign) },
	{ 0x4ef567a6, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x383242ce, __VMLINUX_SYMBOL_STR(snd_hdac_register_chmap_ops) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x81941d8f, __VMLINUX_SYMBOL_STR(snd_hda_spdif_out_of_nid) },
	{ 0xedae9e04, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x408414b1, __VMLINUX_SYMBOL_STR(snd_hdac_acomp_register_notifier) },
	{ 0xc992862a, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x49a61484, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5d07ef2f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0x8b37e337, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xfbffd850, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x307ec578, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_widgets) },
	{ 0xabb17d1e, __VMLINUX_SYMBOL_STR(snd_hda_get_dev_select) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x77c754a8, __VMLINUX_SYMBOL_STR(snd_hdac_chmap_to_spk_mask) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x29d7dbe8, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xa0480735, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x8ca1cbe0, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctl) },
	{ 0xa3a2f853, __VMLINUX_SYMBOL_STR(snd_hdac_query_supported_pcm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x927e043a, __VMLINUX_SYMBOL_STR(snd_info_free_entry) },
	{ 0x65ad6c19, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0xf13c1620, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get_from_tag) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xd7d123dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0x11fb4748, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x84f0352, __VMLINUX_SYMBOL_STR(snd_hdac_channel_allocation) },
	{ 0x812f6299, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x158120c4, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xaa965849, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_dirty_all) },
	{ 0x76782c9f, __VMLINUX_SYMBOL_STR(snd_hdac_add_chmap_ctls) },
	{ 0xed83e198, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0x4e81f890, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x266367, __VMLINUX_SYMBOL_STR(snd_hdac_sync_audio_rate) },
	{ 0xd91a88b0, __VMLINUX_SYMBOL_STR(snd_hdac_power_up_pm) },
	{ 0x8c2a2366, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd,snd-hda-codec,snd-pcm";

MODULE_ALIAS("hdaudio:v1002793Cr*a01*");
MODULE_ALIAS("hdaudio:v10027919r*a01*");
MODULE_ALIAS("hdaudio:v1002791Ar*a01*");
MODULE_ALIAS("hdaudio:v1002AA01r*a01*");
MODULE_ALIAS("hdaudio:v10951390r*a01*");
MODULE_ALIAS("hdaudio:v10951392r*a01*");
MODULE_ALIAS("hdaudio:v17E80047r*a01*");
MODULE_ALIAS("hdaudio:v10DE0001r*a01*");
MODULE_ALIAS("hdaudio:v10DE0002r*a01*");
MODULE_ALIAS("hdaudio:v10DE0003r*a01*");
MODULE_ALIAS("hdaudio:v10DE0004r*a01*");
MODULE_ALIAS("hdaudio:v10DE0005r*a01*");
MODULE_ALIAS("hdaudio:v10DE0006r*a01*");
MODULE_ALIAS("hdaudio:v10DE0007r*a01*");
MODULE_ALIAS("hdaudio:v10DE0008r*a01*");
MODULE_ALIAS("hdaudio:v10DE0009r*a01*");
MODULE_ALIAS("hdaudio:v10DE000Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE000Br*a01*");
MODULE_ALIAS("hdaudio:v10DE000Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE000Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE0010r*a01*");
MODULE_ALIAS("hdaudio:v10DE0011r*a01*");
MODULE_ALIAS("hdaudio:v10DE0012r*a01*");
MODULE_ALIAS("hdaudio:v10DE0013r*a01*");
MODULE_ALIAS("hdaudio:v10DE0014r*a01*");
MODULE_ALIAS("hdaudio:v10DE0015r*a01*");
MODULE_ALIAS("hdaudio:v10DE0016r*a01*");
MODULE_ALIAS("hdaudio:v10DE0018r*a01*");
MODULE_ALIAS("hdaudio:v10DE0019r*a01*");
MODULE_ALIAS("hdaudio:v10DE001Ar*a01*");
MODULE_ALIAS("hdaudio:v10DE001Br*a01*");
MODULE_ALIAS("hdaudio:v10DE001Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE0020r*a01*");
MODULE_ALIAS("hdaudio:v10DE0022r*a01*");
MODULE_ALIAS("hdaudio:v10DE0028r*a01*");
MODULE_ALIAS("hdaudio:v10DE0029r*a01*");
MODULE_ALIAS("hdaudio:v10DE002Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE002Er*a01*");
MODULE_ALIAS("hdaudio:v10DE002Fr*a01*");
MODULE_ALIAS("hdaudio:v10DE0030r*a01*");
MODULE_ALIAS("hdaudio:v10DE0040r*a01*");
MODULE_ALIAS("hdaudio:v10DE0041r*a01*");
MODULE_ALIAS("hdaudio:v10DE0042r*a01*");
MODULE_ALIAS("hdaudio:v10DE0043r*a01*");
MODULE_ALIAS("hdaudio:v10DE0044r*a01*");
MODULE_ALIAS("hdaudio:v10DE0045r*a01*");
MODULE_ALIAS("hdaudio:v10DE0050r*a01*");
MODULE_ALIAS("hdaudio:v10DE0051r*a01*");
MODULE_ALIAS("hdaudio:v10DE0052r*a01*");
MODULE_ALIAS("hdaudio:v10DE0060r*a01*");
MODULE_ALIAS("hdaudio:v10DE0061r*a01*");
MODULE_ALIAS("hdaudio:v10DE0062r*a01*");
MODULE_ALIAS("hdaudio:v10DE0067r*a01*");
MODULE_ALIAS("hdaudio:v10DE0070r*a01*");
MODULE_ALIAS("hdaudio:v10DE0071r*a01*");
MODULE_ALIAS("hdaudio:v10DE0072r*a01*");
MODULE_ALIAS("hdaudio:v10DE0073r*a01*");
MODULE_ALIAS("hdaudio:v10DE0074r*a01*");
MODULE_ALIAS("hdaudio:v10DE0076r*a01*");
MODULE_ALIAS("hdaudio:v10DE007Br*a01*");
MODULE_ALIAS("hdaudio:v10DE007Cr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Dr*a01*");
MODULE_ALIAS("hdaudio:v10DE007Er*a01*");
MODULE_ALIAS("hdaudio:v10DE0080r*a01*");
MODULE_ALIAS("hdaudio:v10DE0081r*a01*");
MODULE_ALIAS("hdaudio:v10DE0082r*a01*");
MODULE_ALIAS("hdaudio:v10DE0083r*a01*");
MODULE_ALIAS("hdaudio:v10DE0084r*a01*");
MODULE_ALIAS("hdaudio:v10DE0090r*a01*");
MODULE_ALIAS("hdaudio:v10DE0091r*a01*");
MODULE_ALIAS("hdaudio:v10DE0092r*a01*");
MODULE_ALIAS("hdaudio:v10DE0093r*a01*");
MODULE_ALIAS("hdaudio:v10DE0094r*a01*");
MODULE_ALIAS("hdaudio:v10DE0095r*a01*");
MODULE_ALIAS("hdaudio:v10DE0097r*a01*");
MODULE_ALIAS("hdaudio:v10DE0098r*a01*");
MODULE_ALIAS("hdaudio:v10DE0099r*a01*");
MODULE_ALIAS("hdaudio:v10DE8001r*a01*");
MODULE_ALIAS("hdaudio:v10DE8067r*a01*");
MODULE_ALIAS("hdaudio:v11069F80r*a01*");
MODULE_ALIAS("hdaudio:v11069F81r*a01*");
MODULE_ALIAS("hdaudio:v11069F84r*a01*");
MODULE_ALIAS("hdaudio:v11069F85r*a01*");
MODULE_ALIAS("hdaudio:v80860054r*a01*");
MODULE_ALIAS("hdaudio:v80862800r*a01*");
MODULE_ALIAS("hdaudio:v80862801r*a01*");
MODULE_ALIAS("hdaudio:v80862802r*a01*");
MODULE_ALIAS("hdaudio:v80862803r*a01*");
MODULE_ALIAS("hdaudio:v80862804r*a01*");
MODULE_ALIAS("hdaudio:v80862805r*a01*");
MODULE_ALIAS("hdaudio:v80862806r*a01*");
MODULE_ALIAS("hdaudio:v80862807r*a01*");
MODULE_ALIAS("hdaudio:v80862808r*a01*");
MODULE_ALIAS("hdaudio:v80862809r*a01*");
MODULE_ALIAS("hdaudio:v8086280Ar*a01*");
MODULE_ALIAS("hdaudio:v8086280Br*a01*");
MODULE_ALIAS("hdaudio:v8086280Cr*a01*");
MODULE_ALIAS("hdaudio:v8086280Dr*a01*");
MODULE_ALIAS("hdaudio:v8086280Fr*a01*");
MODULE_ALIAS("hdaudio:v80862880r*a01*");
MODULE_ALIAS("hdaudio:v80862882r*a01*");
MODULE_ALIAS("hdaudio:v80862883r*a01*");
MODULE_ALIAS("hdaudio:v808629FBr*a01*");
MODULE_ALIAS("hdaudio:v00000101r*a01*");

MODULE_INFO(srcversion, "6DDF5123BA2F80C1C970C96");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x7069d3c2, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xfb722264, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x9c3c9acd, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x7709bb64, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x9a8e1877, __VMLINUX_SYMBOL_STR(snd_array_free) },
	{ 0x821a3bbc, __VMLINUX_SYMBOL_STR(snd_hda_get_default_vref) },
	{ 0xfcbe470b, __VMLINUX_SYMBOL_STR(snd_hda_enum_helper_info) },
	{ 0xd1f80916, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0xef694854, __VMLINUX_SYMBOL_STR(snd_hda_sync_vmaster_hook) },
	{ 0x983fa91, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0xfc92ee6b, __VMLINUX_SYMBOL_STR(__snd_hda_add_vmaster) },
	{ 0xbe7dd7dc, __VMLINUX_SYMBOL_STR(snd_array_new) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xe5543215, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x8b4b2e7f, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x8f88409b, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_list_power) },
	{ 0x2a166145, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xe118de5d, __VMLINUX_SYMBOL_STR(snd_pcm_2_1_chmaps) },
	{ 0xdce5684a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x836685ee, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xcd4c5d37, __VMLINUX_SYMBOL_STR(snd_hda_check_amp_caps) },
	{ 0x6a2ef870, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xa21fcd78, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8d4a0589, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x246f6395, __VMLINUX_SYMBOL_STR(snd_hda_attach_beep_device) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xfac5c298, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x2af70af7, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x1b77311, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_list) },
	{ 0x3077e138, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0x8649bb19, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_prepare) },
	{ 0xc87df42a, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_cleanup) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4ef567a6, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0xc1635ddb, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0xad582c54, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init) },
	{ 0xae89bdbd, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0x67111d4d, __VMLINUX_SYMBOL_STR(snd_hda_get_int_hint) },
	{ 0x26a79dd9, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0xedae9e04, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xcf511423, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0xc1b0620b, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x5e028618, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0x1a249e0f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_analog_open) },
	{ 0x1b70588b, __VMLINUX_SYMBOL_STR(snd_hda_get_conn_index) },
	{ 0x5d07ef2f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0x8b37e337, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfbffd850, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xf0211c72, __VMLINUX_SYMBOL_STR(snd_hda_correct_pin_ctl) },
	{ 0x88071f31, __VMLINUX_SYMBOL_STR(snd_hda_add_imux_item) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x687ab04a, __VMLINUX_SYMBOL_STR(snd_hda_get_pin_label) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a74f0de, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc4eb78ee, __VMLINUX_SYMBOL_STR(snd_ctl_sync_vmaster) },
	{ 0x29d7dbe8, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xa0480735, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc38ffc35, __VMLINUX_SYMBOL_STR(snd_hda_add_vmaster_hook) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x65ad6c19, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xd7d123dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xe35e172a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x812f6299, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xa387e5ad, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x99731e47, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x21414f03, __VMLINUX_SYMBOL_STR(hda_get_autocfg_input_label) },
	{ 0x4e81f890, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x6d46b953, __VMLINUX_SYMBOL_STR(snd_hda_set_vmaster_tlv) },
	{ 0x6fdb16b8, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init_stereo) },
	{ 0x8c2a2366, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0xb14f205c, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2dd86d1a, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_update) },
	{ 0x825abda4, __VMLINUX_SYMBOL_STR(snd_hda_apply_verbs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v00000201r*a01*");

MODULE_INFO(srcversion, "6BC60D76F55052FB13CEF32");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

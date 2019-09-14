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
	{ 0x2ef5e027, __VMLINUX_SYMBOL_STR(snd_hdac_power_up) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2da419c6, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_prepare) },
	{ 0xfb722264, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_prepare) },
	{ 0x9c3c9acd, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x7709bb64, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x983fa91, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_stereo) },
	{ 0x9acce139, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_trigger) },
	{ 0xfc92ee6b, __VMLINUX_SYMBOL_STR(__snd_hda_add_vmaster) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xba982a6f, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xe5543215, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x8b4b2e7f, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctls) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2a166145, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdce5684a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x836685ee, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x6a2ef870, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x6ecf305a, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_name) },
	{ 0x127b8725, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8d4a0589, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x2af70af7, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x32ed45f3, __VMLINUX_SYMBOL_STR(snd_hdac_power_down_pm) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc1635ddb, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_in_ctls) },
	{ 0xae89bdbd, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xb78b0968, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x5c07cb49, __VMLINUX_SYMBOL_STR(snd_hdac_calc_stream_format) },
	{ 0x26a79dd9, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0xedae9e04, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0xc992862a, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0xc1b0620b, __VMLINUX_SYMBOL_STR(snd_hda_create_spdif_share_sw) },
	{ 0x49a61484, __VMLINUX_SYMBOL_STR(snd_hda_ctl_add) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5d07ef2f, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_close) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x8b37e337, __VMLINUX_SYMBOL_STR(snd_hda_create_dig_out_ctls) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xfbffd850, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x307ec578, __VMLINUX_SYMBOL_STR(snd_hda_codec_update_widgets) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2a74f0de, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_cleanup) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x29d7dbe8, __VMLINUX_SYMBOL_STR(__snd_hda_codec_cleanup_stream) },
	{ 0xa0480735, __VMLINUX_SYMBOL_STR(snd_hda_codec_pcm_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x65ad6c19, __VMLINUX_SYMBOL_STR(snd_hda_multi_out_dig_open) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7f5af5a5, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xe35e172a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x11fb4748, __VMLINUX_SYMBOL_STR(snd_pcm_add_chmap_ctls) },
	{ 0x3fc7100e, __VMLINUX_SYMBOL_STR(snd_hdac_power_down) },
	{ 0x812f6299, __VMLINUX_SYMBOL_STR(snd_hda_codec_setup_stream) },
	{ 0x8055d058, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0xa0c5b696, __VMLINUX_SYMBOL_STR(snd_hda_codec_load_dsp_cleanup) },
	{ 0xa387e5ad, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0xed83e198, __VMLINUX_SYMBOL_STR(snd_hda_jack_report_sync) },
	{ 0x6d46b953, __VMLINUX_SYMBOL_STR(snd_hda_set_vmaster_tlv) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xd91a88b0, __VMLINUX_SYMBOL_STR(snd_hdac_power_up_pm) },
	{ 0xb14f205c, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x2dd86d1a, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_update) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec,snd,snd-pcm";

MODULE_ALIAS("hdaudio:v11020011r*a01*");

MODULE_INFO(srcversion, "6320F07B84E232B92A1A7BF");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

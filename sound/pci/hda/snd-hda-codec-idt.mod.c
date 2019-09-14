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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7cc0f515, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x9c3c9acd, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x4b02a88f, __VMLINUX_SYMBOL_STR(snd_hda_codec_eapd_power_filter) },
	{ 0x7709bb64, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x64074ede, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xb0d62dae, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0xd1f80916, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x82867e3f, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0x3f2cd06, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_put) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe5543215, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xff4d695e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0x2a166145, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xd19813df, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0xdce5684a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x579924d3, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x836685ee, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x6a2ef870, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xa21fcd78, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x8d4a0589, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xf9b09cbf, __VMLINUX_SYMBOL_STR(snd_hda_gen_fix_pin_power) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0x2af70af7, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0xc8f64c49, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0x305f9129, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_micmute_led) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0xd77c5aa3, __VMLINUX_SYMBOL_STR(snd_hda_gen_path_power_filter) },
	{ 0x4ef567a6, __VMLINUX_SYMBOL_STR(is_jack_detectable) },
	{ 0x9537239a, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0xae89bdbd, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xb78b0968, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x596f5598, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x67111d4d, __VMLINUX_SYMBOL_STR(snd_hda_get_int_hint) },
	{ 0x26a79dd9, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0xedae9e04, __VMLINUX_SYMBOL_STR(snd_hda_jack_tbl_get) },
	{ 0x5e028618, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfbffd850, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0x88071f31, __VMLINUX_SYMBOL_STR(snd_hda_add_imux_item) },
	{ 0xaa070f0b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x36afc7ec, __VMLINUX_SYMBOL_STR(snd_hda_enable_beep_device) },
	{ 0x320cff09, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x49243073, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xd7d123dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7f5af5a5, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xe35e172a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x3fc7100e, __VMLINUX_SYMBOL_STR(snd_hdac_power_down) },
	{ 0xa6da3874, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xa387e5ad, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x99731e47, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x6fdb16b8, __VMLINUX_SYMBOL_STR(snd_hda_codec_amp_init_stereo) },
	{ 0x7cfaea50, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x8c2a2366, __VMLINUX_SYMBOL_STR(snd_hda_get_connections) },
	{ 0x43a8d06b, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-core,snd-hda-codec-generic,snd-hda-codec,snd";

MODULE_ALIAS("hdaudio:v83847690r*a01*");
MODULE_ALIAS("hdaudio:v83847882r*a01*");
MODULE_ALIAS("hdaudio:v83847680r*a01*");
MODULE_ALIAS("hdaudio:v83847880r*a01*");
MODULE_ALIAS("hdaudio:v83847681r*a01*");
MODULE_ALIAS("hdaudio:v83847682r*a01*");
MODULE_ALIAS("hdaudio:v83847683r*a01*");
MODULE_ALIAS("hdaudio:v83847618r*a01*");
MODULE_ALIAS("hdaudio:v83847619r*a01*");
MODULE_ALIAS("hdaudio:v83847638r*a01*");
MODULE_ALIAS("hdaudio:v83847616r*a01*");
MODULE_ALIAS("hdaudio:v83847617r*a01*");
MODULE_ALIAS("hdaudio:v83847614r*a01*");
MODULE_ALIAS("hdaudio:v83847615r*a01*");
MODULE_ALIAS("hdaudio:v83847620r*a01*");
MODULE_ALIAS("hdaudio:v83847621r*a01*");
MODULE_ALIAS("hdaudio:v83847622r*a01*");
MODULE_ALIAS("hdaudio:v83847623r*a01*");
MODULE_ALIAS("hdaudio:v83847624r*a01*");
MODULE_ALIAS("hdaudio:v83847625r*a01*");
MODULE_ALIAS("hdaudio:v83847626r*a01*");
MODULE_ALIAS("hdaudio:v83847627r*a01*");
MODULE_ALIAS("hdaudio:v83847628r*a01*");
MODULE_ALIAS("hdaudio:v83847629r*a01*");
MODULE_ALIAS("hdaudio:v83847632r*a01*");
MODULE_ALIAS("hdaudio:v83847633r*a01*");
MODULE_ALIAS("hdaudio:v83847634r*a01*");
MODULE_ALIAS("hdaudio:v83847635r*a01*");
MODULE_ALIAS("hdaudio:v83847636r*a01*");
MODULE_ALIAS("hdaudio:v83847637r*a01*");
MODULE_ALIAS("hdaudio:v83847645r*a01*");
MODULE_ALIAS("hdaudio:v83847646r*a01*");
MODULE_ALIAS("hdaudio:v83847661r*a01*");
MODULE_ALIAS("hdaudio:v83847662r*a01*");
MODULE_ALIAS("hdaudio:v83847664r*a01*");
MODULE_ALIAS("hdaudio:v83847698r*a01*");
MODULE_ALIAS("hdaudio:v838476A0r*a01*");
MODULE_ALIAS("hdaudio:v838476A1r*a01*");
MODULE_ALIAS("hdaudio:v838476A2r*a01*");
MODULE_ALIAS("hdaudio:v838476A3r*a01*");
MODULE_ALIAS("hdaudio:v838476A4r*a01*");
MODULE_ALIAS("hdaudio:v838476A5r*a01*");
MODULE_ALIAS("hdaudio:v838476A6r*a01*");
MODULE_ALIAS("hdaudio:v838476A7r*a01*");
MODULE_ALIAS("hdaudio:v111D7603r*a01*");
MODULE_ALIAS("hdaudio:v111D7604r*a01*");
MODULE_ALIAS("hdaudio:v111D76D4r*a01*");
MODULE_ALIAS("hdaudio:v111D7605r*a01*");
MODULE_ALIAS("hdaudio:v111D76D5r*a01*");
MODULE_ALIAS("hdaudio:v111D76D1r*a01*");
MODULE_ALIAS("hdaudio:v111D76D9r*a01*");
MODULE_ALIAS("hdaudio:v111D7666r*a01*");
MODULE_ALIAS("hdaudio:v111D7667r*a01*");
MODULE_ALIAS("hdaudio:v111D7668r*a01*");
MODULE_ALIAS("hdaudio:v111D7669r*a01*");
MODULE_ALIAS("hdaudio:v111D7608r*a01*");
MODULE_ALIAS("hdaudio:v111D7674r*a01*");
MODULE_ALIAS("hdaudio:v111D7675r*a01*");
MODULE_ALIAS("hdaudio:v111D7676r*a01*");
MODULE_ALIAS("hdaudio:v111D7695r*a01*");
MODULE_ALIAS("hdaudio:v111D76B0r*a01*");
MODULE_ALIAS("hdaudio:v111D76B1r*a01*");
MODULE_ALIAS("hdaudio:v111D76B2r*a01*");
MODULE_ALIAS("hdaudio:v111D76B3r*a01*");
MODULE_ALIAS("hdaudio:v111D76B4r*a01*");
MODULE_ALIAS("hdaudio:v111D76B5r*a01*");
MODULE_ALIAS("hdaudio:v111D76B6r*a01*");
MODULE_ALIAS("hdaudio:v111D76B7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C0r*a01*");
MODULE_ALIAS("hdaudio:v111D76C1r*a01*");
MODULE_ALIAS("hdaudio:v111D76C2r*a01*");
MODULE_ALIAS("hdaudio:v111D76C3r*a01*");
MODULE_ALIAS("hdaudio:v111D76C4r*a01*");
MODULE_ALIAS("hdaudio:v111D76C5r*a01*");
MODULE_ALIAS("hdaudio:v111D76C6r*a01*");
MODULE_ALIAS("hdaudio:v111D76C7r*a01*");
MODULE_ALIAS("hdaudio:v111D76C8r*a01*");
MODULE_ALIAS("hdaudio:v111D76C9r*a01*");
MODULE_ALIAS("hdaudio:v111D76CAr*a01*");
MODULE_ALIAS("hdaudio:v111D76CBr*a01*");
MODULE_ALIAS("hdaudio:v111D76CCr*a01*");
MODULE_ALIAS("hdaudio:v111D76CDr*a01*");
MODULE_ALIAS("hdaudio:v111D76CEr*a01*");
MODULE_ALIAS("hdaudio:v111D76DFr*a01*");
MODULE_ALIAS("hdaudio:v111D76E0r*a01*");
MODULE_ALIAS("hdaudio:v111D76E3r*a01*");
MODULE_ALIAS("hdaudio:v111D76E5r*a01*");
MODULE_ALIAS("hdaudio:v111D76E7r*a01*");
MODULE_ALIAS("hdaudio:v111D76E8r*a01*");
MODULE_ALIAS("hdaudio:v111D76E9r*a01*");
MODULE_ALIAS("hdaudio:v111D76EAr*a01*");
MODULE_ALIAS("hdaudio:v111D76EBr*a01*");
MODULE_ALIAS("hdaudio:v111D76ECr*a01*");
MODULE_ALIAS("hdaudio:v111D76EDr*a01*");
MODULE_ALIAS("hdaudio:v111D76EEr*a01*");
MODULE_ALIAS("hdaudio:v111D76EFr*a01*");
MODULE_ALIAS("hdaudio:v111D76F0r*a01*");
MODULE_ALIAS("hdaudio:v111D76F1r*a01*");
MODULE_ALIAS("hdaudio:v111D76F2r*a01*");
MODULE_ALIAS("hdaudio:v111D76F3r*a01*");

MODULE_INFO(srcversion, "50CD298285CC92502ECB7F4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

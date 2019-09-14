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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7cc0f515, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x7069d3c2, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pin_target) },
	{ 0x375cacd5, __VMLINUX_SYMBOL_STR(snd_hda_input_mux_info) },
	{ 0x9c3c9acd, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x64074ede, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xb0d62dae, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0xd1f80916, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x82867e3f, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0xe5543215, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0xff4d695e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x2a166145, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x141271bf, __VMLINUX_SYMBOL_STR(acpi_dev_found) },
	{ 0x579924d3, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x8950e585, __VMLINUX_SYMBOL_STR(snd_hda_get_path_from_idx) },
	{ 0x6a2ef870, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0xa21fcd78, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x9e1ffaf1, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0xfac5c298, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x19f1ae8f, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0xc8f64c49, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_add_vendor_verb) },
	{ 0x305f9129, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_micmute_led) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xebb1d565, __VMLINUX_SYMBOL_STR(snd_hda_activate_path) },
	{ 0x9537239a, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0xae89bdbd, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x801ea60f, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_gating_jack) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xb78b0968, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x596f5598, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x26a79dd9, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfbffd850, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xaa070f0b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x320cff09, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x49243073, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xd9b8ae83, __VMLINUX_SYMBOL_STR(snd_hda_add_new_path) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xe35e172a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xa6da3874, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xca1d341e, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_read_raw) },
	{ 0xa387e5ad, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x99731e47, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x5d549c0f, __VMLINUX_SYMBOL_STR(snd_hda_gen_mic_autoswitch) },
	{ 0x7cfaea50, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xb14f205c, __VMLINUX_SYMBOL_STR(snd_hda_add_new_ctls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v14F12008r*a01*");
MODULE_ALIAS("hdaudio:v14F15045r*a01*");
MODULE_ALIAS("hdaudio:v14F15047r*a01*");
MODULE_ALIAS("hdaudio:v14F15051r*a01*");
MODULE_ALIAS("hdaudio:v14F15066r*a01*");
MODULE_ALIAS("hdaudio:v14F15067r*a01*");
MODULE_ALIAS("hdaudio:v14F15068r*a01*");
MODULE_ALIAS("hdaudio:v14F15069r*a01*");
MODULE_ALIAS("hdaudio:v14F1506Cr*a01*");
MODULE_ALIAS("hdaudio:v14F1506Er*a01*");
MODULE_ALIAS("hdaudio:v14F15097r*a01*");
MODULE_ALIAS("hdaudio:v14F15098r*a01*");
MODULE_ALIAS("hdaudio:v14F150A1r*a01*");
MODULE_ALIAS("hdaudio:v14F150A2r*a01*");
MODULE_ALIAS("hdaudio:v14F150ABr*a01*");
MODULE_ALIAS("hdaudio:v14F150ACr*a01*");
MODULE_ALIAS("hdaudio:v14F150B8r*a01*");
MODULE_ALIAS("hdaudio:v14F150B9r*a01*");
MODULE_ALIAS("hdaudio:v14F150F1r*a01*");
MODULE_ALIAS("hdaudio:v14F150F2r*a01*");
MODULE_ALIAS("hdaudio:v14F150F3r*a01*");
MODULE_ALIAS("hdaudio:v14F150F4r*a01*");
MODULE_ALIAS("hdaudio:v14F1510Fr*a01*");
MODULE_ALIAS("hdaudio:v14F15110r*a01*");
MODULE_ALIAS("hdaudio:v14F15111r*a01*");
MODULE_ALIAS("hdaudio:v14F15113r*a01*");
MODULE_ALIAS("hdaudio:v14F15114r*a01*");
MODULE_ALIAS("hdaudio:v14F15115r*a01*");
MODULE_ALIAS("hdaudio:v14F151D7r*a01*");

MODULE_INFO(srcversion, "51FF51A24F2DAA0A531BABE");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

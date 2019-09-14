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
	{ 0x9c3c9acd, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_put) },
	{ 0x7709bb64, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x64074ede, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xd1f80916, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0xb0d62dae, __VMLINUX_SYMBOL_STR(snd_hda_add_verbs) },
	{ 0x82867e3f, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0xba982a6f, __VMLINUX_SYMBOL_STR(snd_pci_quirk_lookup) },
	{ 0xe5543215, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_tlv) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xff4d695e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x676f5ac, __VMLINUX_SYMBOL_STR(snd_hda_get_input_pin_attr) },
	{ 0xb81a118a, __VMLINUX_SYMBOL_STR(snd_hda_override_conn_list) },
	{ 0x2a166145, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x141271bf, __VMLINUX_SYMBOL_STR(acpi_dev_found) },
	{ 0xd19813df, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0xdce5684a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put) },
	{ 0x579924d3, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x836685ee, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x2953511d, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x6a2ef870, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_get) },
	{ 0x6ecf305a, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_name) },
	{ 0xa21fcd78, __VMLINUX_SYMBOL_STR(snd_hdac_regmap_write_raw) },
	{ 0x8d4a0589, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbcd795e6, __VMLINUX_SYMBOL_STR(snd_hda_gen_hp_automute) },
	{ 0x9e1ffaf1, __VMLINUX_SYMBOL_STR(snd_hda_gen_check_power_status) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xfac5c298, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pin_target) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0x2af70af7, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get) },
	{ 0x19f1ae8f, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_power_to_all) },
	{ 0x305f9129, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_micmute_led) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x32ed45f3, __VMLINUX_SYMBOL_STR(snd_hdac_power_down_pm) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd77c5aa3, __VMLINUX_SYMBOL_STR(snd_hda_gen_path_power_filter) },
	{ 0x9537239a, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0xae89bdbd, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x801ea60f, __VMLINUX_SYMBOL_STR(snd_hda_jack_set_gating_jack) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xb78b0968, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x26a79dd9, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xcf511423, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0xc992862a, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x5e028618, __VMLINUX_SYMBOL_STR(snd_hda_get_bool_hint) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb22feff5, __VMLINUX_SYMBOL_STR(snd_hdac_override_parm) },
	{ 0xe4d0573d, __VMLINUX_SYMBOL_STR(snd_hda_pick_pin_fixup) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb7d27f45, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xfbffd850, __VMLINUX_SYMBOL_STR(_snd_hdac_read_parm) },
	{ 0xaa070f0b, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_put_beep) },
	{ 0xab72d020, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8ca1cbe0, __VMLINUX_SYMBOL_STR(snd_hda_jack_add_kctl) },
	{ 0x320cff09, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7304db2f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x49243073, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_get_beep) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xd7d123dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7f5af5a5, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xe35e172a, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_switch_info) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xa6da3874, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0xa387e5ad, __VMLINUX_SYMBOL_STR(snd_hda_mixer_amp_volume_info) },
	{ 0x99731e47, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x4e81f890, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0x7cfaea50, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0xd91a88b0, __VMLINUX_SYMBOL_STR(snd_hdac_power_up_pm) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe8fe6cd4, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x43a8d06b, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec,snd-hda-core,snd";

MODULE_ALIAS("hdaudio:v10EC0215r*a01*");
MODULE_ALIAS("hdaudio:v10EC0221r*a01*");
MODULE_ALIAS("hdaudio:v10EC0225r*a01*");
MODULE_ALIAS("hdaudio:v10EC0231r*a01*");
MODULE_ALIAS("hdaudio:v10EC0233r*a01*");
MODULE_ALIAS("hdaudio:v10EC0234r*a01*");
MODULE_ALIAS("hdaudio:v10EC0235r*a01*");
MODULE_ALIAS("hdaudio:v10EC0236r*a01*");
MODULE_ALIAS("hdaudio:v10EC0255r*a01*");
MODULE_ALIAS("hdaudio:v10EC0256r*a01*");
MODULE_ALIAS("hdaudio:v10EC0257r*a01*");
MODULE_ALIAS("hdaudio:v10EC0260r*a01*");
MODULE_ALIAS("hdaudio:v10EC0262r*a01*");
MODULE_ALIAS("hdaudio:v10EC0267r*a01*");
MODULE_ALIAS("hdaudio:v10EC0268r*a01*");
MODULE_ALIAS("hdaudio:v10EC0269r*a01*");
MODULE_ALIAS("hdaudio:v10EC0270r*a01*");
MODULE_ALIAS("hdaudio:v10EC0272r*a01*");
MODULE_ALIAS("hdaudio:v10EC0274r*a01*");
MODULE_ALIAS("hdaudio:v10EC0275r*a01*");
MODULE_ALIAS("hdaudio:v10EC0276r*a01*");
MODULE_ALIAS("hdaudio:v10EC0280r*a01*");
MODULE_ALIAS("hdaudio:v10EC0282r*a01*");
MODULE_ALIAS("hdaudio:v10EC0283r*a01*");
MODULE_ALIAS("hdaudio:v10EC0284r*a01*");
MODULE_ALIAS("hdaudio:v10EC0285r*a01*");
MODULE_ALIAS("hdaudio:v10EC0286r*a01*");
MODULE_ALIAS("hdaudio:v10EC0288r*a01*");
MODULE_ALIAS("hdaudio:v10EC0289r*a01*");
MODULE_ALIAS("hdaudio:v10EC0290r*a01*");
MODULE_ALIAS("hdaudio:v10EC0292r*a01*");
MODULE_ALIAS("hdaudio:v10EC0293r*a01*");
MODULE_ALIAS("hdaudio:v10EC0294r*a01*");
MODULE_ALIAS("hdaudio:v10EC0295r*a01*");
MODULE_ALIAS("hdaudio:v10EC0298r*a01*");
MODULE_ALIAS("hdaudio:v10EC0299r*a01*");
MODULE_ALIAS("hdaudio:v10EC0300r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r00100340a01*");
MODULE_ALIAS("hdaudio:v10EC0660r*a01*");
MODULE_ALIAS("hdaudio:v10EC0861r*a01*");
MODULE_ALIAS("hdaudio:v10EC0862r*a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100002a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0662r00100300a01*");
MODULE_ALIAS("hdaudio:v10EC0663r*a01*");
MODULE_ALIAS("hdaudio:v10EC0665r*a01*");
MODULE_ALIAS("hdaudio:v10EC0667r*a01*");
MODULE_ALIAS("hdaudio:v10EC0668r*a01*");
MODULE_ALIAS("hdaudio:v10EC0670r*a01*");
MODULE_ALIAS("hdaudio:v10EC0671r*a01*");
MODULE_ALIAS("hdaudio:v10EC0680r*a01*");
MODULE_ALIAS("hdaudio:v10EC0700r*a01*");
MODULE_ALIAS("hdaudio:v10EC0701r*a01*");
MODULE_ALIAS("hdaudio:v10EC0703r*a01*");
MODULE_ALIAS("hdaudio:v10EC0867r*a01*");
MODULE_ALIAS("hdaudio:v10EC0880r*a01*");
MODULE_ALIAS("hdaudio:v10EC0882r*a01*");
MODULE_ALIAS("hdaudio:v10EC0883r*a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0885r00100103a01*");
MODULE_ALIAS("hdaudio:v10EC0885r*a01*");
MODULE_ALIAS("hdaudio:v10EC0887r*a01*");
MODULE_ALIAS("hdaudio:v10EC0888r00100101a01*");
MODULE_ALIAS("hdaudio:v10EC0888r*a01*");
MODULE_ALIAS("hdaudio:v10EC0889r*a01*");
MODULE_ALIAS("hdaudio:v10EC0892r*a01*");
MODULE_ALIAS("hdaudio:v10EC0899r*a01*");
MODULE_ALIAS("hdaudio:v10EC0900r*a01*");
MODULE_ALIAS("hdaudio:v10EC1168r*a01*");
MODULE_ALIAS("hdaudio:v10EC1220r*a01*");

MODULE_INFO(srcversion, "AF47A79C9D5BBEBDA1762DE");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

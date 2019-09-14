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
	{ 0x7cc0f515, __VMLINUX_SYMBOL_STR(snd_hda_gen_free) },
	{ 0x7709bb64, __VMLINUX_SYMBOL_STR(snd_hdac_codec_read) },
	{ 0x64074ede, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xd1f80916, __VMLINUX_SYMBOL_STR(snd_hda_apply_fixup) },
	{ 0x82867e3f, __VMLINUX_SYMBOL_STR(snd_hda_pick_fixup) },
	{ 0xff4d695e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x2a166145, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0xd19813df, __VMLINUX_SYMBOL_STR(snd_hda_codec_set_pincfg) },
	{ 0x579924d3, __VMLINUX_SYMBOL_STR(snd_hda_gen_update_outputs) },
	{ 0x836685ee, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_enable_callback) },
	{ 0x8d4a0589, __VMLINUX_SYMBOL_STR(_snd_hda_set_pin_ctl) },
	{ 0xf9b09cbf, __VMLINUX_SYMBOL_STR(snd_hda_gen_fix_pin_power) },
	{ 0x9537239a, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0xae89bdbd, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xb78b0968, __VMLINUX_SYMBOL_STR(snd_hda_override_amp_caps) },
	{ 0x26a79dd9, __VMLINUX_SYMBOL_STR(snd_hda_jack_detect_state) },
	{ 0xcf511423, __VMLINUX_SYMBOL_STR(snd_hda_find_mixer_ctl) },
	{ 0xc992862a, __VMLINUX_SYMBOL_STR(snd_hda_sequence_write) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x320cff09, __VMLINUX_SYMBOL_STR(snd_hda_gen_add_kctl) },
	{ 0x26b1bb58, __VMLINUX_SYMBOL_STR(snd_hdac_codec_write) },
	{ 0xd7d123dc, __VMLINUX_SYMBOL_STR(snd_hda_codec_get_pincfg) },
	{ 0x7f5af5a5, __VMLINUX_SYMBOL_STR(snd_hda_apply_pincfgs) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xa6da3874, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x99731e47, __VMLINUX_SYMBOL_STR(query_amp_caps) },
	{ 0x7cfaea50, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
	{ 0x43a8d06b, __VMLINUX_SYMBOL_STR(snd_hda_shutup_pins) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-core,snd-hda-codec";

MODULE_ALIAS("hdaudio:v10134206r*a01*");
MODULE_ALIAS("hdaudio:v10134207r*a01*");
MODULE_ALIAS("hdaudio:v10134208r*a01*");
MODULE_ALIAS("hdaudio:v10134210r*a01*");
MODULE_ALIAS("hdaudio:v10134213r*a01*");

MODULE_INFO(srcversion, "E7F0F5BCE349CC76D2D4AA5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

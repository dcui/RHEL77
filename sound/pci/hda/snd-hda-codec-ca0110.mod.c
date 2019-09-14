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
	{ 0x64074ede, __VMLINUX_SYMBOL_STR(snd_hda_gen_parse_auto_config) },
	{ 0xff4d695e, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_pcms) },
	{ 0x2a166145, __VMLINUX_SYMBOL_STR(snd_hda_jack_unsol_event) },
	{ 0x9537239a, __VMLINUX_SYMBOL_STR(snd_hda_gen_init) },
	{ 0xae89bdbd, __VMLINUX_SYMBOL_STR(snd_hda_parse_pin_defcfg) },
	{ 0x79741dc7, __VMLINUX_SYMBOL_STR(__hda_codec_driver_register) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfccd10f, __VMLINUX_SYMBOL_STR(hda_codec_driver_unregister) },
	{ 0xa6da3874, __VMLINUX_SYMBOL_STR(snd_hda_gen_spec_init) },
	{ 0x7cfaea50, __VMLINUX_SYMBOL_STR(snd_hda_gen_build_controls) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-hda-codec-generic,snd-hda-codec";

MODULE_ALIAS("hdaudio:v1102000Ar*a01*");
MODULE_ALIAS("hdaudio:v1102000Br*a01*");
MODULE_ALIAS("hdaudio:v1102000Dr*a01*");

MODULE_INFO(srcversion, "3D25E5E4C9900E37EEB5B5A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

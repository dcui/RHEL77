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
	{ 0x3a0b010d, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x400cb8fd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0x75481cbc, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd1f69f64, __VMLINUX_SYMBOL_STR(sst_hsw_device_set_config) },
	{ 0xc79585e3, __VMLINUX_SYMBOL_STR(snd_soc_rtdcom_lookup) },
	{ 0x53aaea4f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7af90349, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xfd4a731b, __VMLINUX_SYMBOL_STR(rt286_mic_detect) },
	{ 0xe3f82ead, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-sst-haswell-pcm,snd-soc-rt286";


MODULE_INFO(srcversion, "10AE0D1F9A6D9E279855743");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

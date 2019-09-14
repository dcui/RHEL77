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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3a0b010d, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x400cb8fd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0x75481cbc, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0x5bb3ee22, __VMLINUX_SYMBOL_STR(rt5677_sel_asrc_clk_src) },
	{ 0x1715a1d6, __VMLINUX_SYMBOL_STR(__devm_gpiod_get) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4f641445, __VMLINUX_SYMBOL_STR(devm_acpi_dev_add_driver_gpios) },
	{ 0xd1f69f64, __VMLINUX_SYMBOL_STR(sst_hsw_device_set_config) },
	{ 0xc79585e3, __VMLINUX_SYMBOL_STR(snd_soc_rtdcom_lookup) },
	{ 0x53aaea4f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7af90349, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xe3f82ead, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x8a54c38f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x74b4aeb2, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0xedc5bfdc, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x91286982, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-rt5677,snd-soc-sst-haswell-pcm";


MODULE_INFO(srcversion, "8BB59F5A56DB4E5D1ED9123");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

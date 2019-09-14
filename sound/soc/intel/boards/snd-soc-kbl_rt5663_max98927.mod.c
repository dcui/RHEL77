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
	{ 0xf0f72dee, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x3a0b010d, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x7a933c98, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x30c5c30d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x8c7087df, __VMLINUX_SYMBOL_STR(snd_soc_pm_ops) },
	{ 0x3a2abdbf, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x400cb8fd, __VMLINUX_SYMBOL_STR(snd_soc_dapm_info_pin_switch) },
	{ 0x729b18, __VMLINUX_SYMBOL_STR(rt5663_sel_asrc_clk_src) },
	{ 0x75481cbc, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_pin_switch) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe0a9ae43, __VMLINUX_SYMBOL_STR(snd_jack_set_key) },
	{ 0x98410dda, __VMLINUX_SYMBOL_STR(hdac_hdmi_jack_port_init) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x769e3fb3, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x9d232596, __VMLINUX_SYMBOL_STR(snd_soc_dapm_ignore_suspend) },
	{ 0x53aaea4f, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_pin_switch) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xad5a6715, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe2caf32c, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x7af90349, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0xe86a6a77, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xceb2240d, __VMLINUX_SYMBOL_STR(rt5663_set_jack_detect) },
	{ 0xe3f82ead, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0xd44ec78, __VMLINUX_SYMBOL_STR(hdac_hdmi_jack_init) },
	{ 0x9fc2b217, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-pcm,snd-soc-rt5663,snd,snd-soc-hdac-hdmi";


MODULE_INFO(srcversion, "0B4174B6BF4E6FD24835DD1");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

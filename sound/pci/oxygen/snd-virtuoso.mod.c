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
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xc12e1f64, __VMLINUX_SYMBOL_STR(oxygen_read16) },
	{ 0x3a86e7c0, __VMLINUX_SYMBOL_STR(oxygen_pci_remove) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x566df2b4, __VMLINUX_SYMBOL_STR(oxygen_write8_masked) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x82ca7acf, __VMLINUX_SYMBOL_STR(oxygen_write16_masked) },
	{ 0xc2d25ca7, __VMLINUX_SYMBOL_STR(oxygen_write_ac97_masked) },
	{ 0xbad31b90, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xe3df0bee, __VMLINUX_SYMBOL_STR(oxygen_write_spi) },
	{ 0xaa2e776f, __VMLINUX_SYMBOL_STR(dev_crit) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x766bde5d, __VMLINUX_SYMBOL_STR(oxygen_pci_probe) },
	{ 0xc9235785, __VMLINUX_SYMBOL_STR(snd_jack_new) },
	{ 0x596f5598, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x9292bdb9, __VMLINUX_SYMBOL_STR(oxygen_write16) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0x8b90c524, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x31a56fdf, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0xf172f658, __VMLINUX_SYMBOL_STR(oxygen_read8) },
	{ 0x6d7315, __VMLINUX_SYMBOL_STR(oxygen_reset_uart) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xd265ed56, __VMLINUX_SYMBOL_STR(oxygen_write_uart) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x156efdb, __VMLINUX_SYMBOL_STR(oxygen_write_i2c) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xd42d2b05, __VMLINUX_SYMBOL_STR(oxygen_pci_pm) },
	{ 0x390629d7, __VMLINUX_SYMBOL_STR(oxygen_pci_shutdown) },
	{ 0x158120c4, __VMLINUX_SYMBOL_STR(snd_jack_report) },
	{ 0x5bf5706c, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-oxygen-lib,snd";

MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008269bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008275bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000082B7bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008314bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008327bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000834Fbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Cbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Dbc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000835Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd0000838Ebc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008428bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd00008522bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv00001043sd000085F4bc*sc*i*");
MODULE_ALIAS("pci:v000013F6d00008788sv000013F6sd00008788bc*sc*i*");

MODULE_INFO(srcversion, "095296A2CA42A02E1205402");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xbb925525, __VMLINUX_SYMBOL_STR(snd_emux_new) },
	{ 0xc9a9687b, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_alloc) },
	{ 0xd0e44582, __VMLINUX_SYMBOL_STR(snd_emux_register) },
	{ 0x321100e9, __VMLINUX_SYMBOL_STR(snd_emu10k1_memblk_map) },
	{ 0xd212afdd, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_alloc) },
	{ 0xf578ff8f, __VMLINUX_SYMBOL_STR(__snd_seq_driver_register) },
	{ 0xbb5ec3b3, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_bzero) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6d185c0d, __VMLINUX_SYMBOL_STR(snd_emux_free) },
	{ 0x20c24b7c, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_write) },
	{ 0xfa6939bd, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_free) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb5fefc5b, __VMLINUX_SYMBOL_STR(snd_emu10k1_voice_free) },
	{ 0x74b3ac8a, __VMLINUX_SYMBOL_STR(snd_emu10k1_synth_copy_from_user) },
	{ 0x414c648e, __VMLINUX_SYMBOL_STR(snd_emu10k1_ptr_read) },
	{ 0x9278320d, __VMLINUX_SYMBOL_STR(snd_seq_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-emux-synth,snd-emu10k1,snd-seq-device";


MODULE_INFO(srcversion, "0430085254355503F0B4FAD");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

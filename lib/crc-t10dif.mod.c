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
	{ 0x848fdfcb, __VMLINUX_SYMBOL_STR(crypto_alloc_shash) },
	{ 0x2ecd3315, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x765ff474, __VMLINUX_SYMBOL_STR(crc_t10dif_generic) },
	{ 0x8f944a92, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x368f1fea, __VMLINUX_SYMBOL_STR(static_key_slow_inc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crct10dif_common";


MODULE_INFO(srcversion, "58573C4B8B920FE99512BD9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

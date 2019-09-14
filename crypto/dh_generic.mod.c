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
	{ 0x80d5e57a, __VMLINUX_SYMBOL_STR(mpi_free) },
	{ 0xb57e8ddc, __VMLINUX_SYMBOL_STR(crypto_register_kpp) },
	{ 0xf9f04dac, __VMLINUX_SYMBOL_STR(mpi_write_to_sgl) },
	{ 0xbaf6d630, __VMLINUX_SYMBOL_STR(mpi_read_raw_from_sgl) },
	{ 0x98503a63, __VMLINUX_SYMBOL_STR(mpi_alloc) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9fe939e1, __VMLINUX_SYMBOL_STR(mpi_powm) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xceb1f126, __VMLINUX_SYMBOL_STR(mpi_read_raw_data) },
	{ 0x37df1920, __VMLINUX_SYMBOL_STR(crypto_unregister_kpp) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8EEBD15A81E554A0919703D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

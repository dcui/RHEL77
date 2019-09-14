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
	{ 0x70fff458, __VMLINUX_SYMBOL_STR(pmbus_do_remove) },
	{ 0x87e8c458, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xe9712989, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x4cc4af96, __VMLINUX_SYMBOL_STR(pmbus_do_probe) },
	{ 0xec9c706c, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9dd95c22, __VMLINUX_SYMBOL_STR(pmbus_read_byte_data) },
	{ 0x35c6d2c5, __VMLINUX_SYMBOL_STR(pmbus_read_word_data) },
	{ 0x98f48169, __VMLINUX_SYMBOL_STR(pmbus_get_driver_info) },
	{ 0xa9e7ea03, __VMLINUX_SYMBOL_STR(pmbus_write_byte) },
	{ 0x3a99fe2b, __VMLINUX_SYMBOL_STR(pmbus_clear_cache) },
	{ 0x478776db, __VMLINUX_SYMBOL_STR(pmbus_write_word_data) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pmbus_core";

MODULE_ALIAS("i2c:lm25056");
MODULE_ALIAS("i2c:lm25066");
MODULE_ALIAS("i2c:lm5064");
MODULE_ALIAS("i2c:lm5066");

MODULE_INFO(srcversion, "18906E4FB023A37AA1E6926");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

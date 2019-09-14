#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xd134b06d, __VMLINUX_SYMBOL_STR(iio_kfifo_allocate) },
	{ 0xf47a5b79, __VMLINUX_SYMBOL_STR(devres_alloc_node) },
	{ 0x9abfdf2a, __VMLINUX_SYMBOL_STR(devm_iio_device_match) },
	{ 0x2b0d483, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_postenable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xee2dc47a, __VMLINUX_SYMBOL_STR(iio_buffer_get) },
	{ 0x2ef6256f, __VMLINUX_SYMBOL_STR(devres_release) },
	{ 0xb509ab6a, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_predisable) },
	{ 0x2010be6, __VMLINUX_SYMBOL_STR(iio_kfifo_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb00baff7, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x1496d564, __VMLINUX_SYMBOL_STR(iio_alloc_pollfunc) },
	{ 0xb3864b53, __VMLINUX_SYMBOL_STR(iio_dealloc_pollfunc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E6C701783AF27252026FF9B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

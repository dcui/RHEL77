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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xeca746e5, __VMLINUX_SYMBOL_STR(i2c_clients_command) },
	{ 0xc2821775, __VMLINUX_SYMBOL_STR(tuner_count) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xcb4b189, __VMLINUX_SYMBOL_STR(tuners) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tuner-types";


MODULE_INFO(srcversion, "ACEC1B48B83FF22ABDC16A6");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

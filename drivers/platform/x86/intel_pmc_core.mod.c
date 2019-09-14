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
	{ 0x3cd32b71, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x57805a8e, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{  0x3d853, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xc821665c, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x636c619f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xad73cd4b, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0xae9bb4d4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x9f13414d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xe247eb68, __VMLINUX_SYMBOL_STR(lpit_read_residency_count_address) },
	{ 0x3145216f, __VMLINUX_SYMBOL_STR(pci_dev_present) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x8f763434, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xdc20f322, __VMLINUX_SYMBOL_STR(kstrtouint_from_user) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:004E:feature:*0083*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:005E:feature:*0083*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:008E:feature:*0083*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:009E:feature:*0083*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0066:feature:*0083*");

MODULE_INFO(srcversion, "1178CFFA2421D6A3CFE3C82");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

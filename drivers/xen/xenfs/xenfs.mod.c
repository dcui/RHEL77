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
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x3700e3df, __VMLINUX_SYMBOL_STR(xen_xenbus_fops) },
	{ 0x8621edef, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0x193b7634, __VMLINUX_SYMBOL_STR(xen_privcmd_fops) },
	{ 0x985ec4a3, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x76212ad1, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x1d24f3a7, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xen-privcmd";


MODULE_INFO(srcversion, "C66CC662B7507A2C62CB207");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

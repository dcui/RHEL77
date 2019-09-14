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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcd064321, __VMLINUX_SYMBOL_STR(mlxsw_core_port_clear) },
	{ 0xbfb7df3c, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_priv) },
	{ 0x8231dd28, __VMLINUX_SYMBOL_STR(mlxsw_core_trap_register) },
	{ 0x674187c7, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_unregister) },
	{ 0xcc31f329, __VMLINUX_SYMBOL_STR(mlxsw_core_port_init) },
	{ 0xbb97f6d3, __VMLINUX_SYMBOL_STR(mlxsw_pci_driver_register) },
	{ 0x82bb04bb, __VMLINUX_SYMBOL_STR(mlxsw_pci_driver_unregister) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x5f2d7b40, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_register) },
	{ 0x141e6a0d, __VMLINUX_SYMBOL_STR(mlxsw_core_port_fini) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x354b044, __VMLINUX_SYMBOL_STR(mlxsw_core_trap_unregister) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xee8a3880, __VMLINUX_SYMBOL_STR(mlxsw_reg_query) },
	{ 0xa1b59fab, __VMLINUX_SYMBOL_STR(mlxsw_core_port_ib_set) },
	{ 0xf7d733e8, __VMLINUX_SYMBOL_STR(mlxsw_reg_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core,mlxsw_pci";

MODULE_ALIAS("pci:v000015B3d0000CF08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B3d0000CB20sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "4177DF547F006A0DCD54863");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

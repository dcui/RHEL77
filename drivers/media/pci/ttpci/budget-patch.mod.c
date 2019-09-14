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
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xd5485e35, __VMLINUX_SYMBOL_STR(ttpci_budget_irq10_handler) },
	{ 0x6d224fd1, __VMLINUX_SYMBOL_STR(saa7146_unregister_extension) },
	{ 0x9b29eb08, __VMLINUX_SYMBOL_STR(saa7146_register_extension) },
	{ 0xe6ba037f, __VMLINUX_SYMBOL_STR(ttpci_budget_debiwrite) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x9e0e82c9, __VMLINUX_SYMBOL_STR(ttpci_budget_init_hooks) },
	{ 0xe5e7034a, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x833bce65, __VMLINUX_SYMBOL_STR(ttpci_budget_init) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcc776ac0, __VMLINUX_SYMBOL_STR(saa7146_setgpio) },
	{ 0x7948c222, __VMLINUX_SYMBOL_STR(budget_debug) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa9d02396, __VMLINUX_SYMBOL_STR(ttpci_budget_deinit) },
	{ 0xb3a85523, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xb0d2b7e8, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=budget-core,saa7146,dvb-core";


MODULE_INFO(srcversion, "AC35FF3FE7D9E14D6C4D7B7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

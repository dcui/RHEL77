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
	{ 0xf0f72dee, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x1298a576, __VMLINUX_SYMBOL_STR(sdhci_remove_host) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6020f5b6, __VMLINUX_SYMBOL_STR(sdhci_alloc_host) },
	{ 0x3a2abdbf, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x32f8b8f4, __VMLINUX_SYMBOL_STR(sdhci_resume_host) },
	{ 0xec80b4d2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x165c2efb, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x82813faa, __VMLINUX_SYMBOL_STR(sdhci_add_host) },
	{ 0xdf7c36a1, __VMLINUX_SYMBOL_STR(sdhci_free_host) },
	{ 0xc0e9989b, __VMLINUX_SYMBOL_STR(sdhci_set_clock) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x664af2b5, __VMLINUX_SYMBOL_STR(sdhci_suspend_host) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x1c520ecf, __VMLINUX_SYMBOL_STR(sdhci_reset) },
	{ 0xcaf928b5, __VMLINUX_SYMBOL_STR(sdhci_set_uhs_signaling) },
	{ 0xa2fc2879, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf9fb4037, __VMLINUX_SYMBOL_STR(sdhci_set_bus_width) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sdhci";


MODULE_INFO(srcversion, "90EB4B85DBA547A353B84C7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

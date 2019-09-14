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
	{ 0xa52f2f9a, __VMLINUX_SYMBOL_STR(sst_context_init) },
	{ 0x169a2664, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x14874345, __VMLINUX_SYMBOL_STR(sst_context_cleanup) },
	{ 0x28e09af1, __VMLINUX_SYMBOL_STR(iosf_mbi_available) },
	{ 0xe0400445, __VMLINUX_SYMBOL_STR(sst_alloc_drv_context) },
	{ 0x779bedf3, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc738327b, __VMLINUX_SYMBOL_STR(acpi_match_device) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x46fa1e94, __VMLINUX_SYMBOL_STR(intel_sst_pm) },
	{ 0xe1931daf, __VMLINUX_SYMBOL_STR(sst_configure_runtime_pm) },
	{ 0x6a82fb86, __VMLINUX_SYMBOL_STR(snd_soc_acpi_find_machine) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x837cebc0, __VMLINUX_SYMBOL_STR(snd_soc_acpi_intel_cherrytrail_machines) },
	{ 0x932493a8, __VMLINUX_SYMBOL_STR(iosf_mbi_read) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x42dd7ad7, __VMLINUX_SYMBOL_STR(snd_soc_acpi_intel_baytrail_machines) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xa2fc2879, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-intel-sst-core,iosf_mbi,snd-soc-acpi,snd-soc-acpi-intel-match";

MODULE_ALIAS("acpi*:80860F28:*");
MODULE_ALIAS("acpi*:808622A8:*");

MODULE_INFO(srcversion, "0AF79940311FA068AD71EB4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

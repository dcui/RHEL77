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
	{ 0x4b2ad866, __VMLINUX_SYMBOL_STR(tpm_pm_resume) },
	{ 0xdf837b55, __VMLINUX_SYMBOL_STR(tpm_pm_suspend) },
	{ 0xf10126f1, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x26147af8, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb4b0efd9, __VMLINUX_SYMBOL_STR(tpm_chip_register) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1bf7346, __VMLINUX_SYMBOL_STR(tpmm_chip_alloc) },
	{ 0xdc6699cb, __VMLINUX_SYMBOL_STR(acpi_dev_free_resource_list) },
	{ 0xe811d8a, __VMLINUX_SYMBOL_STR(acpi_dev_get_resources) },
	{ 0x40b85fdc, __VMLINUX_SYMBOL_STR(acpi_device_hid) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x81472677, __VMLINUX_SYMBOL_STR(acpi_get_table) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xec80b4d2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa5e75e9a, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2af63321, __VMLINUX_SYMBOL_STR(acpi_dev_resource_address_space) },
	{ 0x61cde409, __VMLINUX_SYMBOL_STR(acpi_dev_resource_memory) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x65638157, __VMLINUX_SYMBOL_STR(tpm_chip_unregister) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:MSFT0101:*");

MODULE_INFO(srcversion, "F464692F1D363EA45F2C618");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

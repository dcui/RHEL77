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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x9b36baa6, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xee23857b, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xad09d5d, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0x50d5b739, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0xaf11acb3, __VMLINUX_SYMBOL_STR(platform_device_add_resources) },
	{ 0x7db9025b, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xaea976a8, __VMLINUX_SYMBOL_STR(acpi_check_resource_conflict) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x8bd590db, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5bd84714, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x54677dd5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xae1bcb49, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x910538ff, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf69fef42, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7dbdd117, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001106d00008235sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CBBD81FC9652560861A15F7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

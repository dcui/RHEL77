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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2966ef5e, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7c481ff1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x910538ff, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xc4e2dd17, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x45449b56, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xcbe7fb80, __VMLINUX_SYMBOL_STR(amd_smn_read) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xfdf8da6a, __VMLINUX_SYMBOL_STR(node_to_amd_nb) },
	{ 0x2d408224, __VMLINUX_SYMBOL_STR(amd_nb_num) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d00001203sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001303sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001703sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001603sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001403sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000141Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001573sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001533sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001583sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001463sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d000015EBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001493sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "E9C9DC5AC3DDEECF1CAC72F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

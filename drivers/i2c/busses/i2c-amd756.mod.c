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
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xca7b7a8, __VMLINUX_SYMBOL_STR(acpi_check_region) },
	{ 0xa6f8da46, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x28a636e9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x910538ff, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001022d0000740Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00007443sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d0000746Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd000001B4sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "6419B31009372862EA2CDC8");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

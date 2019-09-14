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
	{ 0x9dd70dc5, __VMLINUX_SYMBOL_STR(edac_mc_del_mc) },
	{ 0xf2d7d87, __VMLINUX_SYMBOL_STR(mce_unregister_decode_chain) },
	{ 0xb8b2b1f7, __VMLINUX_SYMBOL_STR(mce_register_decode_chain) },
	{ 0x70af3595, __VMLINUX_SYMBOL_STR(edac_mc_free) },
	{ 0xc110ca23, __VMLINUX_SYMBOL_STR(edac_mc_add_mc_with_groups) },
	{ 0x2cd8ae37, __VMLINUX_SYMBOL_STR(edac_mc_alloc) },
	{ 0x37b12c10, __VMLINUX_SYMBOL_STR(pci_find_bus) },
	{ 0xb51fbd64, __VMLINUX_SYMBOL_STR(edac_op_state) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x8c646600, __VMLINUX_SYMBOL_STR(edac_report_status) },
	{ 0x6cbcb3ec, __VMLINUX_SYMBOL_STR(edac_mc_handle_error) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xb576174c, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x7c481ff1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0x8fb5a29a, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2966ef5e, __VMLINUX_SYMBOL_STR(pci_bus_write_config_dword) },
	{ 0x1aa4c8bf, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x8e86d8, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x58af4a0f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:005C:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:005F:feature:*");

MODULE_INFO(srcversion, "4111B528DB287892D82C13D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

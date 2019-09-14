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
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa6ea6151, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xebfb79ce, __VMLINUX_SYMBOL_STR(gpiochip_irqchip_add) },
	{ 0x2f471678, __VMLINUX_SYMBOL_STR(handle_simple_irq) },
	{ 0xe9597b38, __VMLINUX_SYMBOL_STR(gpiochip_add_pin_range) },
	{ 0x86e60ebd, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0x4ab3b90b, __VMLINUX_SYMBOL_STR(devm_pinctrl_register) },
	{ 0xa2fc2879, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x169a2664, __VMLINUX_SYMBOL_STR(devm_ioremap_nocache) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3d5ecf5, __VMLINUX_SYMBOL_STR(gpiochip_line_is_irq) },
	{ 0x844e3767, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x67dc3167, __VMLINUX_SYMBOL_STR(pinctrl_dev_get_drvdata) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1870e0bc, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0x40c17c4d, __VMLINUX_SYMBOL_STR(handle_edge_irq) },
	{ 0xcfa0c721, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0xbb9d722a, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xb40f48b1, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("acpi*:AMD0030:*");
MODULE_ALIAS("acpi*:AMDI0030:*");

MODULE_INFO(srcversion, "434733BE95E6E405215C476");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

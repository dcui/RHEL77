#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9037ef17, __VMLINUX_SYMBOL_STR(gpiochip_generic_config) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xcfa0c721, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1b8822d8, __VMLINUX_SYMBOL_STR(pinctrl_gpio_direction_output) },
	{ 0xbb9d722a, __VMLINUX_SYMBOL_STR(irq_find_mapping) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6d549e6, __VMLINUX_SYMBOL_STR(pinctrl_free_gpio) },
	{ 0xec80b4d2, __VMLINUX_SYMBOL_STR(devm_ioremap_resource) },
	{ 0x40c17c4d, __VMLINUX_SYMBOL_STR(handle_edge_irq) },
	{ 0xb40f48b1, __VMLINUX_SYMBOL_STR(gpiochip_remove) },
	{ 0x3d5ecf5, __VMLINUX_SYMBOL_STR(gpiochip_line_is_irq) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x4ab3b90b, __VMLINUX_SYMBOL_STR(devm_pinctrl_register) },
	{ 0x395d4a93, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xebfb79ce, __VMLINUX_SYMBOL_STR(gpiochip_irqchip_add) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x86e60ebd, __VMLINUX_SYMBOL_STR(gpiochip_add_data) },
	{ 0x13b89dee, __VMLINUX_SYMBOL_STR(pinctrl_request_gpio) },
	{ 0xda47b8ae, __VMLINUX_SYMBOL_STR(handle_bad_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x67dc3167, __VMLINUX_SYMBOL_STR(pinctrl_dev_get_drvdata) },
	{ 0xe9597b38, __VMLINUX_SYMBOL_STR(gpiochip_add_pin_range) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x125ba9f2, __VMLINUX_SYMBOL_STR(gpiochip_set_chained_irqchip) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x844e3767, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1bc5eebe, __VMLINUX_SYMBOL_STR(pinctrl_gpio_direction_input) },
	{ 0xa2fc2879, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa6ea6151, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x1870e0bc, __VMLINUX_SYMBOL_STR(handle_level_irq) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "21B6793A156ACB1F421C051");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

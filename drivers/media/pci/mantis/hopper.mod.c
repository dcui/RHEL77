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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x44934c64, __VMLINUX_SYMBOL_STR(mantis_stream_control) },
	{ 0x6e422809, __VMLINUX_SYMBOL_STR(mantis_i2c_exit) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x398a88bb, __VMLINUX_SYMBOL_STR(mantis_gpio_set_bits) },
	{ 0xd5672a83, __VMLINUX_SYMBOL_STR(mantis_dvb_init) },
	{ 0x9918f373, __VMLINUX_SYMBOL_STR(mantis_i2c_init) },
	{ 0x3218c5b0, __VMLINUX_SYMBOL_STR(mantis_pci_exit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x9540cfb9, __VMLINUX_SYMBOL_STR(mantis_get_mac) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xd15c0c4b, __VMLINUX_SYMBOL_STR(mantis_dma_init) },
	{ 0x2606d731, __VMLINUX_SYMBOL_STR(mantis_dma_exit) },
	{ 0xd192620d, __VMLINUX_SYMBOL_STR(mantis_pci_init) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5a1063ab, __VMLINUX_SYMBOL_STR(mantis_frontend_power) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x223df1f9, __VMLINUX_SYMBOL_STR(mantis_dvb_exit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mantis_core";

MODULE_ALIAS("pci:v00001822d00004E35sv00001822sd00000028bc*sc*i*");

MODULE_INFO(srcversion, "AD882A3D9B5721C50CC47E2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

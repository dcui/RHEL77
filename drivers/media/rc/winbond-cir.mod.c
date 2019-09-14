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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xf5fc268e, __VMLINUX_SYMBOL_STR(pnp_unregister_driver) },
	{ 0xc0bf66f6, __VMLINUX_SYMBOL_STR(pnp_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1f58d34, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x281d3312, __VMLINUX_SYMBOL_STR(sev_enable_key) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4a15197a, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xce9d96ee, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xc5d1b6c5, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x2a7aa085, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0xaa8369c5, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb3569bce, __VMLINUX_SYMBOL_STR(led_trigger_register_simple) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf4d63ca3, __VMLINUX_SYMBOL_STR(pnp_get_resource) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xd16262c6, __VMLINUX_SYMBOL_STR(ir_raw_event_set_idle) },
	{ 0xa23c0e3e, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xa39e123d, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x6f5a5739, __VMLINUX_SYMBOL_STR(led_trigger_unregister_simple) },
	{ 0xe54145e8, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa8fef85d, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0xafb66681, __VMLINUX_SYMBOL_STR(led_trigger_event) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("pnp:dWEC1022*");
MODULE_ALIAS("acpi*:WEC1022:*");

MODULE_INFO(srcversion, "D27B6D4BF84EC1AC2222E30");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x4470a79b, __VMLINUX_SYMBOL_STR(param_ops_long) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf5fc268e, __VMLINUX_SYMBOL_STR(pnp_unregister_driver) },
	{ 0xc0bf66f6, __VMLINUX_SYMBOL_STR(pnp_register_driver) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0xc5d1b6c5, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf4d63ca3, __VMLINUX_SYMBOL_STR(pnp_get_resource) },
	{ 0xce9d96ee, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x2a7aa085, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa23c0e3e, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x1f58d34, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe54145e8, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("pnp:dITE8704*");
MODULE_ALIAS("acpi*:ITE8704:*");
MODULE_ALIAS("pnp:dITE8713*");
MODULE_ALIAS("acpi*:ITE8713:*");
MODULE_ALIAS("pnp:dITE8708*");
MODULE_ALIAS("acpi*:ITE8708:*");
MODULE_ALIAS("pnp:dITE8709*");
MODULE_ALIAS("acpi*:ITE8709:*");

MODULE_INFO(srcversion, "A74B38DD12F7131286FE041");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

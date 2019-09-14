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
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc5d1b6c5, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd0abc268, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xce9d96ee, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x2a7aa085, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa8fef85d, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0xa1f9a134, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rsi) },
	{ 0xa23c0e3e, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0xb46e51b2, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1f58d34, __VMLINUX_SYMBOL_STR(ir_raw_event_store_with_filter) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x434eb397, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xa68ef25c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xe54145e8, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v1781p0938d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "535A64694A0B86074CA8413");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
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
	{ 0xe3bd23fc, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x6710938a, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x5a4213c2, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xac522ac2, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xcb9fc200, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x795f30e6, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9817f256, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x1a8f3884, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xff1076fc, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xa68ef25c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v091Ep0003d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E8D2AA771D471CE65ADBEC6");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
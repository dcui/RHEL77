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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x399ebca8, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf0a16657, __VMLINUX_SYMBOL_STR(FsmNew) },
	{ 0x59cc8a7e, __VMLINUX_SYMBOL_STR(isdnhdlc_out_init) },
	{ 0x3e4f834, __VMLINUX_SYMBOL_STR(usb_reset_endpoint) },
	{ 0xa68ef25c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x85bdb772, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xb46e51b2, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x7f29ce36, __VMLINUX_SYMBOL_STR(FsmInitTimer) },
	{ 0x148f0c99, __VMLINUX_SYMBOL_STR(FsmFree) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xfd9d4c09, __VMLINUX_SYMBOL_STR(isdnhdlc_encode) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbe7567f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x8ee38862, __VMLINUX_SYMBOL_STR(isdnhdlc_rcv_init) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x93a64734, __VMLINUX_SYMBOL_STR(FsmChangeState) },
	{ 0x4c759827, __VMLINUX_SYMBOL_STR(byte_rev_table) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0x3b71e4fc, __VMLINUX_SYMBOL_STR(isdnhdlc_decode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xee93522c, __VMLINUX_SYMBOL_STR(hisax_register) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe227344e, __VMLINUX_SYMBOL_STR(FsmRestartTimer) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7f4f2ce, __VMLINUX_SYMBOL_STR(hisax_unregister) },
	{ 0xd8f7e3c5, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x43331e5d, __VMLINUX_SYMBOL_STR(usb_get_current_frame_number) },
	{ 0x9df0cd27, __VMLINUX_SYMBOL_STR(FsmEvent) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xff2db2cf, __VMLINUX_SYMBOL_STR(FsmDelTimer) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hisax,isdnhdlc";

MODULE_ALIAS("usb:v0483p4810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4811d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4812d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4813d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4814d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4816d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4818d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p4819d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0483p481Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EF0B523F3B1FD5D3954F592");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

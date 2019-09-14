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
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf2cc4dab, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0xc0d9e140, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x8e2c4e43, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xfc9352fd, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x6191990b, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x5baea47, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xe5e7034a, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x163c9666, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfa0693d7, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb8a675f8, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0xb41b577b, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0x25cbb5bb, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x4b1d7935, __VMLINUX_SYMBOL_STR(cx231xx_enable_i2c_port_3) },
	{ 0xcad8db6, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0x56b80af, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x10fb14a6, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xb3a85523, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xb0d2b7e8, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x83f3de1f, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x3d001aa3, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xae8eef9a, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x13a0fb98, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,dvb-core";


MODULE_INFO(srcversion, "77698AB29C292DE1CECF569");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

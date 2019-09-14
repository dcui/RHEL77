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
	{ 0x4c27cd29, __VMLINUX_SYMBOL_STR(cx8802_unregister_driver) },
	{ 0x2823f5af, __VMLINUX_SYMBOL_STR(cx8802_register_driver) },
	{ 0xd11d6075, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x3e2820eb, __VMLINUX_SYMBOL_STR(videobuf_dvb_alloc_frontend) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x96320135, __VMLINUX_SYMBOL_STR(vp3054_i2c_probe) },
	{ 0xa3568c94, __VMLINUX_SYMBOL_STR(videobuf_dvb_dealloc_frontends) },
	{ 0x48b2dca4, __VMLINUX_SYMBOL_STR(videobuf_dvb_register_bus) },
	{ 0x6141c8c5, __VMLINUX_SYMBOL_STR(cx88_tuner_callback) },
	{ 0xb0d2b7e8, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb3a85523, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xa275695, __VMLINUX_SYMBOL_STR(cx88_setup_xc3028) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1430059, __VMLINUX_SYMBOL_STR(cx8802_get_driver) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x455eff6, __VMLINUX_SYMBOL_STR(videobuf_dvb_find_frontend) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xbe934b9b, __VMLINUX_SYMBOL_STR(cx8802_buf_prepare) },
	{ 0xdf61b4f8, __VMLINUX_SYMBOL_STR(cx8802_buf_queue) },
	{ 0x10b6d450, __VMLINUX_SYMBOL_STR(cx88_free_buffer) },
	{ 0xb513b40b, __VMLINUX_SYMBOL_STR(videobuf_dvb_get_frontend) },
	{ 0x3f1f063f, __VMLINUX_SYMBOL_STR(vp3054_i2c_remove) },
	{ 0x7d92748e, __VMLINUX_SYMBOL_STR(videobuf_dvb_unregister_bus) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx8802,videobuf-dma-sg,videobuf-dvb,cx88-vp3054-i2c,cx88xx,dvb-core";


MODULE_INFO(srcversion, "413828821DFCA21404DEA69");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

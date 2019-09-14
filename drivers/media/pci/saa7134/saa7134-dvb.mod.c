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
	{ 0x8bd57b37, __VMLINUX_SYMBOL_STR(saa7134_ts_unregister) },
	{ 0xcddaff67, __VMLINUX_SYMBOL_STR(saa7134_ts_register) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xa3568c94, __VMLINUX_SYMBOL_STR(videobuf_dvb_dealloc_frontends) },
	{ 0x48b2dca4, __VMLINUX_SYMBOL_STR(videobuf_dvb_register_bus) },
	{ 0x4e83446, __VMLINUX_SYMBOL_STR(saa7134_tuner_callback) },
	{ 0xd11d6075, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x6f2d9be4, __VMLINUX_SYMBOL_STR(saa7134_ts_qops) },
	{ 0x3e2820eb, __VMLINUX_SYMBOL_STR(videobuf_dvb_alloc_frontend) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xde29e27, __VMLINUX_SYMBOL_STR(saa7134_set_gpio) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7d92748e, __VMLINUX_SYMBOL_STR(videobuf_dvb_unregister_bus) },
	{ 0xb513b40b, __VMLINUX_SYMBOL_STR(videobuf_dvb_get_frontend) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=saa7134,videobuf-dvb,videobuf-dma-sg";


MODULE_INFO(srcversion, "8F61D75BDB6245770534696");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x3456eff2, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x6a0e8e30, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xef58d645, __VMLINUX_SYMBOL_STR(smscore_start_device) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43fc08a4, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xcacf9a53, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x6526fc4c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xaf366c44, __VMLINUX_SYMBOL_STR(smscore_set_board_id) },
	{ 0xb987c91e, __VMLINUX_SYMBOL_STR(smscore_register_device) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf8b36ca5, __VMLINUX_SYMBOL_STR(sdio_memcpy_toio) },
	{ 0x37d91069, __VMLINUX_SYMBOL_STR(smsendian_handle_tx_message) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xecd3d901, __VMLINUX_SYMBOL_STR(smscore_getbuffer) },
	{ 0x55d13c7f, __VMLINUX_SYMBOL_STR(smscore_onresponse) },
	{ 0x45284ae9, __VMLINUX_SYMBOL_STR(smsendian_handle_rx_message) },
	{ 0xb85da78f, __VMLINUX_SYMBOL_STR(sdio_memcpy_fromio) },
	{ 0xaecfc1bc, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x40eaa386, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xa2a93eff, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x84ebc2ea, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x7f3fd881, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xb80f5d57, __VMLINUX_SYMBOL_STR(smscore_unregister_device) },
	{ 0x8a9b8987, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,smsmdtv";

MODULE_ALIAS("sdio:c*v039Ad5347*");
MODULE_ALIAS("sdio:c*v039Ad1100*");
MODULE_ALIAS("sdio:c*v039Ad0201*");
MODULE_ALIAS("sdio:c*v039Ad0300*");
MODULE_ALIAS("sdio:c*v039Ad0301*");
MODULE_ALIAS("sdio:c*v039Ad0302*");
MODULE_ALIAS("sdio:c*v039Ad0500*");
MODULE_ALIAS("sdio:c*v039Ad0600*");
MODULE_ALIAS("sdio:c*v039Ad0700*");
MODULE_ALIAS("sdio:c*v039Ad0800*");

MODULE_INFO(srcversion, "894340858C802BEE6C37C19");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

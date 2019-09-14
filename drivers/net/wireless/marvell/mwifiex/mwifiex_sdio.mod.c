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
	{ 0xbd66232b, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xaecfc1bc, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9078a84e, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0xafda1e8d, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x6526fc4c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x43fc08a4, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xa9595937, __VMLINUX_SYMBOL_STR(mmc_hw_reset) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x504dac22, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x83d60235, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x30d6de77, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd093241a, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc10105b7, __VMLINUX_SYMBOL_STR(_mwifiex_dbg) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x3a8127e1, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6d786f68, __VMLINUX_SYMBOL_STR(mwifiex_shutdown_sw) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0xad51b92b, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x3456eff2, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xbbf68398, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0xa91f7c15, __VMLINUX_SYMBOL_STR(mwifiex_dnld_fw) },
	{ 0x5149226a, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x84ebc2ea, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9d8697dd, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa7f2a93, __VMLINUX_SYMBOL_STR(mwifiex_reinit_sw) },
	{ 0x9a2d1501, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0x1aa935a1, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0xf5ce4757, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0x6cdb2539, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x432f19c, __VMLINUX_SYMBOL_STR(mwifiex_upload_device_dump) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x6a0e8e30, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x7f3fd881, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x87516cd, __VMLINUX_SYMBOL_STR(mwifiex_drv_info_dump) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x6fcce3cb, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xcacf9a53, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xa2a93eff, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x40eaa386, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");
MODULE_ALIAS("sdio:c*v02DFd9141*");

MODULE_INFO(srcversion, "1896AE186430B68CF8532FE");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xafda1e8d, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xcacf9a53, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x43fc08a4, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0xd15c1852, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0x9f4f98c8, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6526fc4c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xef2972d4, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x3dba2f78, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0xb4a9182a, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0x92439092, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x1e71c74c, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x95287b85, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xad51b92b, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x74b57b65, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0xaecfc1bc, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x9d8697dd, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa2a93eff, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x84ebc2ea, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x40eaa386, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xbd66232b, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x7f3fd881, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0xbbf68398, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x9ae48a7f, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0xda425824, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xce2840e7, __VMLINUX_SYMBOL_STR(irq_set_irq_wake) },
	{ 0x726782a9, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xd093241a, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core,btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "17E03B0896AD9F61A37C4F7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

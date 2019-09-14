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
	{ 0x532894bc, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xea513432, __VMLINUX_SYMBOL_STR(eth_change_mtu) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xa38ee07d, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x87bc5bc7, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x784984fa, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xe4740a86, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x2e42fa36, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0x3085bd19, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x63fedd30, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xa0f3b7a1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x8bd590db, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x6840cbd6, __VMLINUX_SYMBOL_STR(__dynamic_netdev_dbg) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7028aa99, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x64d6bea2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5948f2f0, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xbfe4f83a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x93a99dbc, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs_rh) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x5c04acc5, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001011d00000002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001011d00000014sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A0160DB27A725CB6979E3A7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x9f13414d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb225b3a8, __VMLINUX_SYMBOL_STR(napi_disable) },
	{ 0xedd6b68c, __VMLINUX_SYMBOL_STR(napi_schedule_prep) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x257f3887, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x3142b10b, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x58ecf574, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0x7028aa99, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x3994bee8, __VMLINUX_SYMBOL_STR(__hw_addr_sync_dev) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xbfe4f83a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xae9bb4d4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x636c619f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x8616cca3, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x8cecb562, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xe4740a86, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x532894bc, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xe15f42bb, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5948f2f0, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfb4e23d9, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x4492645d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x4c48a854, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6343a556, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x9f5cd5dd, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x748555b5, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x909b4067, __VMLINUX_SYMBOL_STR(pci_clear_master) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x8d0dfb83, __VMLINUX_SYMBOL_STR(pcie_relaxed_ordering_enabled) },
	{ 0x683abeb9, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xa5d8a74d, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x4c423fc1, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x63fedd30, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x52b645e5, __VMLINUX_SYMBOL_STR(__smp_mb__after_atomic) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xabda77d3, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2b0b1f28, __VMLINUX_SYMBOL_STR(pci_ioremap_bar) },
	{ 0x384e70ae, __VMLINUX_SYMBOL_STR(__smp_mb__before_atomic) },
	{ 0x52b8d960, __VMLINUX_SYMBOL_STR(__netif_napi_add) },
	{ 0x9f3f6845, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x79142775, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x8784fa04, __VMLINUX_SYMBOL_STR(napi_get_frags) },
	{ 0x64d6bea2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x93a99dbc, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs_rh) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f897611, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x7a5dd5b5, __VMLINUX_SYMBOL_STR(napi_gro_frags) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("pci:v00001425d00004800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000480Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00004888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005800sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000580Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005810sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005812sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005813sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005816sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005817sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005818sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005819sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000581Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000581Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005889sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005890sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005891sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005892sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005893sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005894sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005895sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005896sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005897sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005898sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00005899sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000589Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058A9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058AAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ACsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058ADsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058AEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058AFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d000058B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006801sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006802sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006803sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006804sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006805sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006806sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006807sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000680Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006811sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006814sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006815sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006880sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006881sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006882sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006883sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006884sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006885sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006886sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006887sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006888sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d00006889sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000688Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001425d0000688Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "DAD1E44A74A95AE549457E7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

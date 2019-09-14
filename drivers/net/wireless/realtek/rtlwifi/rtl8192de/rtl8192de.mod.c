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
	{ 0x4830cbb1, __VMLINUX_SYMBOL_STR(rtl_cam_delete_one_entry) },
	{ 0xa9ae641c, __VMLINUX_SYMBOL_STR(rtl_fill_dummy) },
	{ 0x5c84f062, __VMLINUX_SYMBOL_STR(rtl_fw_cb) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcdff489, __VMLINUX_SYMBOL_STR(rtl_pci_probe) },
	{ 0xacdb20c6, __VMLINUX_SYMBOL_STR(rtl_cam_get_free_entry) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x97c0bd92, __VMLINUX_SYMBOL_STR(rtl_dm_diginit) },
	{ 0x4476f3b7, __VMLINUX_SYMBOL_STR(rtl_ps_disable_nic) },
	{ 0xa935fa3d, __VMLINUX_SYMBOL_STR(rtl_get_tcb_desc) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xcc56bcc8, __VMLINUX_SYMBOL_STR(rtl_cam_add_one_entry) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x2b0ef9f6, __VMLINUX_SYMBOL_STR(rtl_phy_scan_operation_backup) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xf6fc35ee, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xfc17b61, __VMLINUX_SYMBOL_STR(rtl_pci_resume) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xd71dc5a2, __VMLINUX_SYMBOL_STR(rtl_ps_enable_nic) },
	{ 0xce7cf56e, __VMLINUX_SYMBOL_STR(rtl_get_hwinfo) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x2921a4d4, __VMLINUX_SYMBOL_STR(rtl_btc_status_false) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4190de42, __VMLINUX_SYMBOL_STR(rtl_fw_page_write) },
	{ 0xe9abba3f, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x79ed07f7, __VMLINUX_SYMBOL_STR(rtl_pci_suspend) },
	{ 0x68a0843f, __VMLINUX_SYMBOL_STR(rtlwifi_rate_mapping) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xef6d28e4, __VMLINUX_SYMBOL_STR(rtl_pci_disconnect) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x684a6e31, __VMLINUX_SYMBOL_STR(rtl_rfreg_delay) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3cfadfa0, __VMLINUX_SYMBOL_STR(rtl_cam_mark_invalid) },
	{ 0xad041b34, __VMLINUX_SYMBOL_STR(channel5g) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x710b81cc, __VMLINUX_SYMBOL_STR(rtl_cam_del_entry) },
	{ 0xbb1cac57, __VMLINUX_SYMBOL_STR(rtl_cam_empty_entry) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x148b328b, __VMLINUX_SYMBOL_STR(rtl_cam_reset_all_entry) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x980848e2, __VMLINUX_SYMBOL_STR(rtl_addr_delay) },
	{ 0x3bae9e4b, __VMLINUX_SYMBOL_STR(param_ops_ullong) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rtlwifi,rtl_pci";

MODULE_ALIAS("pci:v000010ECd00008193sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd0000002Bsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "78DCFE5D7C89D4C016DA4C6");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

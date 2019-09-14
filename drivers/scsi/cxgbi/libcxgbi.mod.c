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
	{ 0x893429ed, __VMLINUX_SYMBOL_STR(cxgbi_ppm_ppods_reserve) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xa91296bd, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xa25aba33, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15d4461e, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0x1678cf3c, __VMLINUX_SYMBOL_STR(cxgbi_ppm_ppod_release) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x3c6b5572, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xf3d26f34, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xad09d5d, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xe495a8e4, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xa1e21efe, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x88e3b639, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x451dcbe5, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x80c7e05c, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xdecfd1a1, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x7830e638, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x61121b14, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3c3c71a5, __VMLINUX_SYMBOL_STR(cxgbi_ppm_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x4de5b65e, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xf8085462, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x161f2a7e, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x1fecbc34, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6343a556, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x3ce46354, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x6f8d91ba, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x81533963, __VMLINUX_SYMBOL_STR(sysfs_format_mac) },
	{ 0xa9607bf3, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x86971169, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0x8b8837ba, __VMLINUX_SYMBOL_STR(ip6_route_output) },
	{ 0x85d2749f, __VMLINUX_SYMBOL_STR(ipv6_dev_get_saddr) },
	{ 0x1e1fb219, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa3d2392c, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x321dc15f, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x898dd5d8, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x486f8ada, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x623c5915, __VMLINUX_SYMBOL_STR(cxgbi_ppm_release) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd7d9c13e, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xb32ff9a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x5ed720ef, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x535fc2f7, __VMLINUX_SYMBOL_STR(__ip_dev_find) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbd0351dd, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xd762a901, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xda14a643, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x80251bd2, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_segment_is_hdr) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xfbe0b64c, __VMLINUX_SYMBOL_STR(cxgbi_ppm_make_ppod_hdr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcxgb,libiscsi,libiscsi_tcp,scsi_transport_iscsi";


MODULE_INFO(srcversion, "86F15FFE29B88BD3405BD38");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

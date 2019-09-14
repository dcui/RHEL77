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
	{ 0xa7345d19, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x7a8ff660, __VMLINUX_SYMBOL_STR(nfs4_schedule_session_recovery) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x8928e440, __VMLINUX_SYMBOL_STR(pnfs_nfs_generic_sync) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xbfb83ea7, __VMLINUX_SYMBOL_STR(xdr_init_encode) },
	{ 0xd393a2a1, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_connect) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x355c433a, __VMLINUX_SYMBOL_STR(pnfs_generic_clear_request_commit) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x98ff166d, __VMLINUX_SYMBOL_STR(nfs4_setup_sequence) },
	{ 0xc65238b8, __VMLINUX_SYMBOL_STR(nfs_init_cinfo) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xa910955, __VMLINUX_SYMBOL_STR(nfs_initiate_commit) },
	{ 0xc967e14e, __VMLINUX_SYMBOL_STR(pnfs_error_mark_layout_for_return) },
	{ 0x2035a60c, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_put) },
	{ 0xd9f2846d, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x54bef45, __VMLINUX_SYMBOL_STR(layoutstats_timer) },
	{ 0x5f9d82ea, __VMLINUX_SYMBOL_STR(nfs4_delete_deviceid) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xeef161aa, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x471de0a9, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_commit_ds) },
	{ 0x2ce59e81, __VMLINUX_SYMBOL_STR(nfs4_decode_mp_ds_addr) },
	{ 0xa2841fd6, __VMLINUX_SYMBOL_STR(nfs_initiate_pgio) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x506ae907, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_pagelist) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0xfc316134, __VMLINUX_SYMBOL_STR(pnfs_generic_recover_commit_reqs) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf08a1cbb, __VMLINUX_SYMBOL_STR(nfs4_sequence_done) },
	{ 0x292edbc9, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xafdf92b6, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x40652a4f, __VMLINUX_SYMBOL_STR(pnfs_update_layout) },
	{ 0x41972754, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x2f41f64c, __VMLINUX_SYMBOL_STR(rpc_exit) },
	{ 0x7ddc6cd2, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x1baa100a, __VMLINUX_SYMBOL_STR(pnfs_generic_write_commit_done) },
	{ 0x4e113380, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x9e259d36, __VMLINUX_SYMBOL_STR(pnfs_generic_layout_insert_lseg) },
	{ 0x5a0fc8f4, __VMLINUX_SYMBOL_STR(xdr_init_decode_pages) },
	{ 0x830404f3, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xa1ecb492, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7b74a9ca, __VMLINUX_SYMBOL_STR(pnfs_read_resend_pnfs) },
	{ 0x997bac6e, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x1fe8f483, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0xb749545, __VMLINUX_SYMBOL_STR(nfs4_find_or_create_ds_client) },
	{ 0xec0332f1, __VMLINUX_SYMBOL_STR(rpc_max_payload) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa016511, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_write_mds) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x57093cc, __VMLINUX_SYMBOL_STR(pnfs_layout_mark_request_commit) },
	{ 0xeed42584, __VMLINUX_SYMBOL_STR(pnfs_destroy_layout) },
	{ 0xbd629a1d, __VMLINUX_SYMBOL_STR(nfs4_pnfs_ds_add) },
	{ 0x5e69f24d, __VMLINUX_SYMBOL_STR(pnfs_layoutcommit_inode) },
	{ 0x393402bb, __VMLINUX_SYMBOL_STR(pnfs_put_lseg) },
	{ 0x1b23ad75, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0xb4ef4865, __VMLINUX_SYMBOL_STR(pnfs_report_layoutstat) },
	{ 0xed15fb41, __VMLINUX_SYMBOL_STR(nfs4_print_deviceid) },
	{ 0x88321e, __VMLINUX_SYMBOL_STR(pnfs_set_layoutcommit) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x57189fc8, __VMLINUX_SYMBOL_STR(pnfs_generic_scan_commit_lists) },
	{ 0x69d3558d, __VMLINUX_SYMBOL_STR(pnfs_generic_rw_release) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x2a196e39, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x5cb67d4f, __VMLINUX_SYMBOL_STR(nfs4_test_deviceid_unavailable) },
	{ 0x6085edbd, __VMLINUX_SYMBOL_STR(nfs_map_string_to_numeric) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf999267e, __VMLINUX_SYMBOL_STR(pnfs_generic_commit_release) },
	{ 0x64047202, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xe2a5d5a, __VMLINUX_SYMBOL_STR(pnfs_read_done_resend_to_mds) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x5132f133, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0x36bd681b, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x625c7be5, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0x5dec9c3a, __VMLINUX_SYMBOL_STR(pnfs_generic_prepare_to_resend_writes) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xaaa6ee88, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_check_layout) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x3dfe6fe3, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_read) },
	{ 0x989cd857, __VMLINUX_SYMBOL_STR(pnfs_write_done_resend_to_mds) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x7a36ddbd, __VMLINUX_SYMBOL_STR(rpc_wake_up) },
	{ 0xa31fdd70, __VMLINUX_SYMBOL_STR(rpc_count_iostats_metrics) },
	{ 0x4d033d97, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x6c36816, __VMLINUX_SYMBOL_STR(__tracepoint_nfs4_pnfs_write) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xfbec9ee9, __VMLINUX_SYMBOL_STR(rpc_lookup_generic_cred) },
	{ 0x5484680e, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0x2bce3fd9, __VMLINUX_SYMBOL_STR(nfs_pageio_reset_read_mds) },
	{ 0x948e5a4, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x9929085d, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x70a0e5cf, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0xf6dc5a47, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,nfs";


MODULE_INFO(srcversion, "B768A14E602E9FE699D809F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

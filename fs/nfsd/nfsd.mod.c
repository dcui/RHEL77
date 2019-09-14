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
	{ 0xba70d5ae, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x1cbff4d8, __VMLINUX_SYMBOL_STR(svcauth_gss_flavor) },
	{ 0x2964a688, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x35ba116a, __VMLINUX_SYMBOL_STR(auth_domain_put) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbaff9656, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x31908c63, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x9ab56ef4, __VMLINUX_SYMBOL_STR(set_groups) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x74403ca6, __VMLINUX_SYMBOL_STR(locks_free_lock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x300e1753, __VMLINUX_SYMBOL_STR(xdr_truncate_encode) },
	{ 0x58af38c0, __VMLINUX_SYMBOL_STR(sunrpc_cache_update) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x90470aca, __VMLINUX_SYMBOL_STR(vfs_setlease) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x67288ffc, __VMLINUX_SYMBOL_STR(__mnt_is_readonly) },
	{ 0xf3da4a7d, __VMLINUX_SYMBOL_STR(lease_get_mtime) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x1b06b8d1, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0x68cd4849, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xbb300883, __VMLINUX_SYMBOL_STR(locks_start_grace) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x4b6ae087, __VMLINUX_SYMBOL_STR(cache_destroy_net) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5fa875f0, __VMLINUX_SYMBOL_STR(rpc_call_async) },
	{ 0x41056496, __VMLINUX_SYMBOL_STR(write_bytes_to_xdr_buf) },
	{ 0xf68285c0, __VMLINUX_SYMBOL_STR(register_inetaddr_notifier) },
	{ 0xcbbf077f, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x257f3887, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xf841f90a, __VMLINUX_SYMBOL_STR(groups_sort) },
	{ 0x69ad5cf2, __VMLINUX_SYMBOL_STR(svc_pool_stats_open) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xfe2b82d6, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0x7e005d6c, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0x2cb5891e, __VMLINUX_SYMBOL_STR(svc_print_addr) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6fae2dcf, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x59af0246, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x62e8ba3a, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x94683f44, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0x19a5b768, __VMLINUX_SYMBOL_STR(svc_fill_write_vector) },
	{ 0x8d35fc5a, __VMLINUX_SYMBOL_STR(gss_mech_get) },
	{ 0x560cd071, __VMLINUX_SYMBOL_STR(lookup_one_len_unlocked) },
	{ 0x93007744, __VMLINUX_SYMBOL_STR(svc_addsock) },
	{ 0x1930a265, __VMLINUX_SYMBOL_STR(vfs_clone_file_range) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xd9f2846d, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0xcde0e455, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x6e458f64, __VMLINUX_SYMBOL_STR(gss_mech_put) },
	{ 0x2f14a14, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0x52cbb014, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xa3a1832f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x6ac32ac9, __VMLINUX_SYMBOL_STR(svc_proc_unregister) },
	{ 0xa1f9a134, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rsi) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x29823ab4, __VMLINUX_SYMBOL_STR(svc_find_xprt) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xa16aae11, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x60352082, __VMLINUX_SYMBOL_STR(register_inet6addr_notifier) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x61aa871a, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xba1caea9, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x4254c20c, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x71cab41e, __VMLINUX_SYMBOL_STR(nlmsvc_ops) },
	{ 0xc8df6d08, __VMLINUX_SYMBOL_STR(rpc_uaddr2sockaddr) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x51a0f688, __VMLINUX_SYMBOL_STR(cache_register_net) },
	{ 0x93ff17d9, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0xeef161aa, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x71fa908a, __VMLINUX_SYMBOL_STR(cache_flush) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6def63e1, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x3d20e87a, __VMLINUX_SYMBOL_STR(svc_seq_show) },
	{ 0xe5318711, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x912b5f0b, __VMLINUX_SYMBOL_STR(filter_current_check_discard) },
	{ 0x43e6367e, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0x95dad3f2, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x96e07094, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbe52ee31, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x88c9c2d8, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xa47b5f2e, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x292edbc9, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x1e3a8c5f, __VMLINUX_SYMBOL_STR(rpc_wake_up_next) },
	{ 0x19135100, __VMLINUX_SYMBOL_STR(svc_set_client) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xd3bc530e, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0xe8617a03, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x14fd200, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x4d405db8, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xf271c448, __VMLINUX_SYMBOL_STR(gss_pseudoflavor_to_service) },
	{ 0x67cea32a, __VMLINUX_SYMBOL_STR(splice_direct_to_actor) },
	{ 0x41972754, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xec730387, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x7bf5899, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0x74834736, __VMLINUX_SYMBOL_STR(svc_xprt_names) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2fe252cc, __VMLINUX_SYMBOL_STR(unregister_inet6addr_notifier) },
	{ 0x4e113380, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0x2d1a8b65, __VMLINUX_SYMBOL_STR(cache_check) },
	{ 0xa0b5b192, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0xe2253bd7, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x6a4c7c4e, __VMLINUX_SYMBOL_STR(vfs_lock_file) },
	{ 0x389ff91f, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x37f036b6, __VMLINUX_SYMBOL_STR(vfs_readv) },
	{ 0xaf560797, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x830404f3, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x73839c7a, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x19472cde, __VMLINUX_SYMBOL_STR(locks_alloc_lock) },
	{ 0x985ec4a3, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x76212ad1, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x1d0144f7, __VMLINUX_SYMBOL_STR(svcauth_unix_purge) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xb07abe2, __VMLINUX_SYMBOL_STR(unshare_fs_struct) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xa1ecb492, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0x43c1baa8, __VMLINUX_SYMBOL_STR(cache_seq_stop) },
	{ 0x69a1f3f5, __VMLINUX_SYMBOL_STR(svc_destroy) },
	{ 0xc770d15c, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xfa66d4db, __VMLINUX_SYMBOL_STR(rpc_create) },
	{ 0xad567f89, __VMLINUX_SYMBOL_STR(ima_file_check) },
	{ 0xafbf00ce, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xa3584a1, __VMLINUX_SYMBOL_STR(sunrpc_cache_lookup) },
	{ 0x9621ece6, __VMLINUX_SYMBOL_STR(xdr_restrict_buflen) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x774ad8de, __VMLINUX_SYMBOL_STR(simple_transaction_read) },
	{ 0x60e5312e, __VMLINUX_SYMBOL_STR(svc_alien_sock) },
	{ 0x80951b28, __VMLINUX_SYMBOL_STR(rpcauth_get_gssinfo) },
	{ 0xad039c54, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xce28e715, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x1fe8f483, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x4492645d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xc851ba0e, __VMLINUX_SYMBOL_STR(mount_ns) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x593c1bac, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rbx) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7a4a60c, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xd5ae145, __VMLINUX_SYMBOL_STR(svc_create_pooled) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x3dd7de7f, __VMLINUX_SYMBOL_STR(rpc_lookup_machine_cred) },
	{ 0x99412956, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0x6343a556, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0xe97f4ce5, __VMLINUX_SYMBOL_STR(qword_get) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xc8e96dea, __VMLINUX_SYMBOL_STR(qword_addhex) },
	{ 0x399713db, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x48c001a8, __VMLINUX_SYMBOL_STR(unix_domain_find) },
	{ 0xa1802938, __VMLINUX_SYMBOL_STR(svc_process) },
	{ 0xe0a83aa, __VMLINUX_SYMBOL_STR(svc_rpcb_cleanup) },
	{ 0xa092236, __VMLINUX_SYMBOL_STR(svc_set_num_threads) },
	{ 0x6350db4a, __VMLINUX_SYMBOL_STR(cache_seq_next) },
	{ 0xe4210afa, __VMLINUX_SYMBOL_STR(exportfs_encode_fh) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x3de2640, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x40cbfccd, __VMLINUX_SYMBOL_STR(svc_age_temp_xprts_now) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x15859051, __VMLINUX_SYMBOL_STR(lease_modify) },
	{ 0x9b617a5b, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0x270f3550, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0xedcf6be4, __VMLINUX_SYMBOL_STR(qword_add) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xc5ed6853, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x3c405191, __VMLINUX_SYMBOL_STR(cache_unregister_net) },
	{ 0x56d28f4c, __VMLINUX_SYMBOL_STR(security_inode_getsecctx) },
	{ 0x35d4cd9f, __VMLINUX_SYMBOL_STR(__fsnotify_parent) },
	{ 0x697c8e19, __VMLINUX_SYMBOL_STR(svc_xprt_put) },
	{ 0x5f31288f, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xcfe8b72c, __VMLINUX_SYMBOL_STR(simple_transaction_release) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x30a84815, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc24e8da2, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x5c198c6f, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x884a0d1a, __VMLINUX_SYMBOL_STR(blk_rq_map_kern) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbf9d1b96, __VMLINUX_SYMBOL_STR(nfsd_debug) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x9ce12cae, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xc50bab05, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xdd5647ee, __VMLINUX_SYMBOL_STR(locks_init_lock) },
	{ 0xfe029963, __VMLINUX_SYMBOL_STR(unregister_inetaddr_notifier) },
	{ 0x2d8f30bb, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0xeb03d0ea, __VMLINUX_SYMBOL_STR(locks_release_private) },
	{ 0x2a196e39, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x7add44b5, __VMLINUX_SYMBOL_STR(posix_acl_valid) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x1fb99830, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x308b733a, __VMLINUX_SYMBOL_STR(getboottime) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe6eac7c3, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0x8eb26f91, __VMLINUX_SYMBOL_STR(vfs_fallocate) },
	{ 0xdcf51fcb, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x3f0966c7, __VMLINUX_SYMBOL_STR(exportfs_decode_fh) },
	{ 0x41cb24d7, __VMLINUX_SYMBOL_STR(cache_purge) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x211f68f1, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x8f944a92, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x8c8eb4d1, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x2d038ddf, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x86707aec, __VMLINUX_SYMBOL_STR(svc_proc_register) },
	{ 0x8b037ae2, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x1611b9ef, __VMLINUX_SYMBOL_STR(locks_in_grace) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9a5349f3, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xf394d1e3, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x8405afe2, __VMLINUX_SYMBOL_STR(vfs_copy_file_range) },
	{ 0xe4a8abdd, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x26209714, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x91242962, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc83b4d5b, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0xacd82c54, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x7bffa193, __VMLINUX_SYMBOL_STR(simple_transaction_set) },
	{ 0x838ec443, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0x1979a2ad, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xa83971ad, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd4220784, __VMLINUX_SYMBOL_STR(security_inode_setsecctx) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5132f133, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xb8152d6e, __VMLINUX_SYMBOL_STR(svc_shutdown_net) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x4b27002e, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x36bd681b, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0xa171aa78, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0x8c34c149, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1f279cfc, __VMLINUX_SYMBOL_STR(follow_down) },
	{ 0xb5f3c8d1, __VMLINUX_SYMBOL_STR(posix_unblock_lock) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x4fc321ba, __VMLINUX_SYMBOL_STR(xdr_commit_encode) },
	{ 0xcaa4983f, __VMLINUX_SYMBOL_STR(svc_exit_thread) },
	{ 0x40f8c269, __VMLINUX_SYMBOL_STR(vfs_test_lock) },
	{ 0x67120238, __VMLINUX_SYMBOL_STR(svc_max_payload) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3bfed0ec, __VMLINUX_SYMBOL_STR(simple_transaction_get) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9ec5e8ac, __VMLINUX_SYMBOL_STR(follow_up) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71995c4e, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xf4a2d539, __VMLINUX_SYMBOL_STR(fsnotify) },
	{ 0x9518b623, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x953e589d, __VMLINUX_SYMBOL_STR(svc_reserve) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x2679dcad, __VMLINUX_SYMBOL_STR(svc_xprt_do_enqueue) },
	{ 0x1d24f3a7, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x16f5bf3d, __VMLINUX_SYMBOL_STR(abort_creds) },
	{ 0xf05c7b8, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r15) },
	{ 0x81da77f2, __VMLINUX_SYMBOL_STR(lockd_up) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x19590e63, __VMLINUX_SYMBOL_STR(lockd_down) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x31c168b0, __VMLINUX_SYMBOL_STR(read_bytes_from_xdr_buf) },
	{ 0xe668dbe1, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x1fe1e1ad, __VMLINUX_SYMBOL_STR(locks_end_grace) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xe11321db, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_sb) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xd21fded0, __VMLINUX_SYMBOL_STR(cache_create_net) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4d033d97, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4f897611, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x18cb6ac8, __VMLINUX_SYMBOL_STR(svc_recv) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe925b204, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xd979a547, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdi) },
	{ 0xf90ba5a1, __VMLINUX_SYMBOL_STR(auth_domain_find) },
	{ 0x272be9b4, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xe1aebdfd, __VMLINUX_SYMBOL_STR(svc_bind) },
	{ 0xdd3a3aa9, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xa32acc77, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xc26151de, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0xe388bca, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xadcd0a77, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x2919b156, __VMLINUX_SYMBOL_STR(xdr_decode_string_inplace) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x1197bf0d, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0xc8e3b4d, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xf42104e, __VMLINUX_SYMBOL_STR(opens_in_grace) },
	{ 0x4b55313f, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xb6856fb0, __VMLINUX_SYMBOL_STR(svc_close_xprt) },
	{ 0xd54a000c, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xc3320156, __VMLINUX_SYMBOL_STR(cache_seq_start) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x96435078, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0xbc86417f, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x84ec74f, __VMLINUX_SYMBOL_STR(seq_path) },
	{ 0x77e35ccc, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_ip) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x851afea5, __VMLINUX_SYMBOL_STR(locks_mandatory_area) },
	{ 0x9c7c731b, __VMLINUX_SYMBOL_STR(filp_open) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=auth_rpcgss,sunrpc,grace,lockd,nfs_acl";


MODULE_INFO(srcversion, "0A79BF76C571BD996815070");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
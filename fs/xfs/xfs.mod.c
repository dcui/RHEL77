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
	{ 0xd0298b8b, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x54554948, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x9a0d63fa, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xbb77301a, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x30877173, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x35b4bcb2, __VMLINUX_SYMBOL_STR(unregister_fo_extend) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xb5ddb7af, __VMLINUX_SYMBOL_STR(iomap_seek_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x37e57c3d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x1299cf0f, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xfe6fd8db, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xeb862489, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xa24be4f0, __VMLINUX_SYMBOL_STR(register_fo_extend) },
	{ 0xc821665c, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x69c74a2b, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x6f4c812f, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0xbe18153d, __VMLINUX_SYMBOL_STR(try_wait_for_completion) },
	{ 0xd01cf20f, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xd7d990c8, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x628121e9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67a0306a, __VMLINUX_SYMBOL_STR(percpu_counter_set) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x542de561, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x45044497, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x3fd2571, __VMLINUX_SYMBOL_STR(vm_unmap_ram) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0xd4f08f00, __VMLINUX_SYMBOL_STR(proc_symlink) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x945b8886, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xcbbf077f, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x64999478, __VMLINUX_SYMBOL_STR(congestion_wait) },
	{ 0x29221c3b, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xfe2b82d6, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x6fae2dcf, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x1af83d54, __VMLINUX_SYMBOL_STR(iomap_zero_range) },
	{ 0x1518e251, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0x7242d92, __VMLINUX_SYMBOL_STR(put_dax) },
	{ 0xc22a3091, __VMLINUX_SYMBOL_STR(vm_unmap_aliases) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x1b91c19c, __VMLINUX_SYMBOL_STR(noop_invalidatepage_range) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x6f715d0f, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0x73a78bc4, __VMLINUX_SYMBOL_STR(downgrade_write) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x76d6a5f3, __VMLINUX_SYMBOL_STR(posix_acl_update_mode) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0x5c34ce5a, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0x3da636f6, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xcde0e455, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xf3108d14, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xa3a1832f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xa1f9a134, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rsi) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1793f685, __VMLINUX_SYMBOL_STR(radix_tree_tagged) },
	{ 0xdada62f3, __VMLINUX_SYMBOL_STR(generic_file_remap_pages) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x5fc6aa47, __VMLINUX_SYMBOL_STR(buffer_migrate_page) },
	{ 0x9cea7384, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x11dc4014, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x787f3839, __VMLINUX_SYMBOL_STR(d_find_alias) },
	{ 0xba1caea9, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xee0a055c, __VMLINUX_SYMBOL_STR(__percpu_counter_sum) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf8983de7, __VMLINUX_SYMBOL_STR(prepare_to_wait_exclusive) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x38b26a9c, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x9ded188e, __VMLINUX_SYMBOL_STR(kobject_del) },
	{ 0x7f9ad7a0, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xde4fab67, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0x912b5f0b, __VMLINUX_SYMBOL_STR(filter_current_check_discard) },
	{ 0xe62cbe6d, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0xc86f5985, __VMLINUX_SYMBOL_STR(noop_direct_IO) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x61abde57, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x65935fa6, __VMLINUX_SYMBOL_STR(generic_write_sync) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xe7bbb60, __VMLINUX_SYMBOL_STR(redirty_page_for_writepage) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0x6263e02d, __VMLINUX_SYMBOL_STR(strncpy_from_user) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd0ae4755, __VMLINUX_SYMBOL_STR(pipe_to_file) },
	{ 0xc35e4b4e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x919efeec, __VMLINUX_SYMBOL_STR(dax_finish_sync_fault) },
	{ 0xb7125089, __VMLINUX_SYMBOL_STR(wake_bit_function_rh) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x112e26ae, __VMLINUX_SYMBOL_STR(cancel_dirty_page) },
	{ 0xb39698d5, __VMLINUX_SYMBOL_STR(blk_get_backing_dev_info) },
	{ 0x2f4c181a, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xe196a9f7, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x35225ea3, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0xdbe86ff6, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0x7655f61b, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0x41972754, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0xec730387, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xadac4d0f, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x5ae7445f, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2ed623, __VMLINUX_SYMBOL_STR(iomap_fiemap) },
	{ 0xfbf0c40b, __VMLINUX_SYMBOL_STR(noop_set_page_dirty) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0xa0b5b192, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0xe2253bd7, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xddaaea68, __VMLINUX_SYMBOL_STR(splice_from_pipe_feed) },
	{ 0x830404f3, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xf8cb7bbe, __VMLINUX_SYMBOL_STR(sync_inodes_sb) },
	{ 0x73839c7a, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xdf11b5de, __VMLINUX_SYMBOL_STR(d_add_ci) },
	{ 0x6c9eb947, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0xc09c1ef5, __VMLINUX_SYMBOL_STR(dax_layout_busy_page) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xfed6e3f3, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x940602e5, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0x6da76f20, __VMLINUX_SYMBOL_STR(block_invalidatepage_range) },
	{ 0xafbf00ce, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe15f42bb, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x42f90a31, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x4dca5a4f, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x8e864a86, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0x221201db, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd0b56b57, __VMLINUX_SYMBOL_STR(dax_writeback_mapping_range) },
	{ 0x4554b079, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0xa2118a69, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x6f5f38f7, __VMLINUX_SYMBOL_STR(file_remove_privs) },
	{ 0xb4dadcc, __VMLINUX_SYMBOL_STR(blkdev_issue_zeroout) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x6b69c8e8, __VMLINUX_SYMBOL_STR(account_page_dirtied) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xccc91589, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x76d3cd60, __VMLINUX_SYMBOL_STR(laptop_mode) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x6dcf857f, __VMLINUX_SYMBOL_STR(uuid_null) },
	{ 0x1fe8f483, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x6f3b39e8, __VMLINUX_SYMBOL_STR(blkdev_get_by_path) },
	{ 0x4492645d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x82d79b51, __VMLINUX_SYMBOL_STR(sysctl_vfs_cache_pressure) },
	{ 0xd34ddc39, __VMLINUX_SYMBOL_STR(security_inode_init_security) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0x593c1bac, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rbx) },
	{ 0xae792bc5, __VMLINUX_SYMBOL_STR(vm_map_ram) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x93a6e0b2, __VMLINUX_SYMBOL_STR(io_schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfd5cf105, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc70f9cd8, __VMLINUX_SYMBOL_STR(file_update_time) },
	{ 0x848a13bc, __VMLINUX_SYMBOL_STR(write_cache_pages) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xf0a8237a, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup_tag) },
	{ 0x68aca4ad, __VMLINUX_SYMBOL_STR(down) },
	{ 0xe69d2ea7, __VMLINUX_SYMBOL_STR(thaw_bdev) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x5240ee7, __VMLINUX_SYMBOL_STR(percpu_counter_batch) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x348c722a, __VMLINUX_SYMBOL_STR(thp_get_unmapped_area) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x8df92f66, __VMLINUX_SYMBOL_STR(memchr_inv) },
	{ 0x194fd0c2, __VMLINUX_SYMBOL_STR(mark_tech_preview) },
	{ 0x5de75127, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x3de2640, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x23532c4d, __VMLINUX_SYMBOL_STR(ftrace_print_flags_seq) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x2d03c10d, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x3c483012, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xc0fba65a, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0xaf6ae696, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xbbfcaca5, __VMLINUX_SYMBOL_STR(bit_waitqueue) },
	{ 0x4f6d74cf, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xc4ccc793, __VMLINUX_SYMBOL_STR(mark_buffer_write_io_error) },
	{ 0x5f31288f, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xbbe2a625, __VMLINUX_SYMBOL_STR(iomap_page_mkwrite) },
	{ 0x5f80e56b, __VMLINUX_SYMBOL_STR(__destroy_inode) },
	{ 0xeb5c4279, __VMLINUX_SYMBOL_STR(__var_waitqueue) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x5c198c6f, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xc4076f47, __VMLINUX_SYMBOL_STR(submit_bio) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xce900af, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x39804438, __VMLINUX_SYMBOL_STR(capable_wrt_inode_uidgid) },
	{ 0xe2433644, __VMLINUX_SYMBOL_STR(init_wait_var_entry) },
	{ 0xe20372ae, __VMLINUX_SYMBOL_STR(radix_tree_gang_lookup) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x7fb3badd, __VMLINUX_SYMBOL_STR(default_file_splice_write) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x1a86fdbf, __VMLINUX_SYMBOL_STR(blkdev_put) },
	{ 0xc50bab05, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x7985d043, __VMLINUX_SYMBOL_STR(radix_tree_tag_set) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xe9011563, __VMLINUX_SYMBOL_STR(fs_kobj) },
	{ 0x8f619a88, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x27b252f3, __VMLINUX_SYMBOL_STR(try_to_free_buffers) },
	{ 0x2a196e39, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0x7add44b5, __VMLINUX_SYMBOL_STR(posix_acl_valid) },
	{ 0xac3d20e2, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x9cb986f2, __VMLINUX_SYMBOL_STR(vmalloc_base) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x6d334118, __VMLINUX_SYMBOL_STR(__get_user_8) },
	{ 0xe6eac7c3, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0xa20591eb, __VMLINUX_SYMBOL_STR(iomap_seek_hole) },
	{ 0xfca3f8c8, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0x3e985a65, __VMLINUX_SYMBOL_STR(make_kprojid) },
	{ 0x1b57183e, __VMLINUX_SYMBOL_STR(bioset_create) },
	{ 0xdc2cbf2b, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xeebd4852, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xdcf51fcb, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x3f0966c7, __VMLINUX_SYMBOL_STR(exportfs_decode_fh) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x73ed6e61, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xe5554450, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbb34134a, __VMLINUX_SYMBOL_STR(iov_shorten) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xa099cf1d, __VMLINUX_SYMBOL_STR(default_file_splice_read) },
	{ 0x3f4547a7, __VMLINUX_SYMBOL_STR(put_unused_fd) },
	{ 0xf8489fcd, __VMLINUX_SYMBOL_STR(user_path_at) },
	{ 0x27aaccea, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57a36573, __VMLINUX_SYMBOL_STR(vfs_setpos) },
	{ 0x2e1a09e1, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xe4a8abdd, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0xb61e2101, __VMLINUX_SYMBOL_STR(splice_write_to_file) },
	{ 0x7a718643, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0xa3a77c69, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0x91242962, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x73ad2ed8, __VMLINUX_SYMBOL_STR(fget_light) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x10950ee1, __VMLINUX_SYMBOL_STR(radix_tree_tag_clear) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x5144fadf, __VMLINUX_SYMBOL_STR(d_tmpfile) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb902321, __VMLINUX_SYMBOL_STR(dax_iomap_fault) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x5ae98fc6, __VMLINUX_SYMBOL_STR(remove_proc_subtree) },
	{ 0xcc2d3792, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x8c34c149, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x3d966527, __VMLINUX_SYMBOL_STR(freeze_bdev) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xbe83e4ff, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0xe644f4ea, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37eef37b, __VMLINUX_SYMBOL_STR(dax_iomap_rw) },
	{ 0xa9bd2676, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0xdc233361, __VMLINUX_SYMBOL_STR(invalidate_inode_pages2_range) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x744690c8, __VMLINUX_SYMBOL_STR(truncate_pagecache_range) },
	{ 0xb25db026, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x9559e8eb, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x193c8872, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc062e48f, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x71995c4e, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x8a51d565, __VMLINUX_SYMBOL_STR(quota_send_warning) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa90886d5, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1bc99760, __VMLINUX_SYMBOL_STR(generic_error_remove_page) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x35f498ea, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x9518b623, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x9754ec10, __VMLINUX_SYMBOL_STR(radix_tree_preload) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0xee46885d, __VMLINUX_SYMBOL_STR(add_wait_queue_exclusive) },
	{ 0xf05c7b8, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r15) },
	{ 0xb0449fc, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x1cd3bdb9, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x46af2b76, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x9aba54e3, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x844e3767, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0xdc25ea86, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0x47b6a10f, __VMLINUX_SYMBOL_STR(ftrace_print_symbols_seq) },
	{ 0xabee204a, __VMLINUX_SYMBOL_STR(mapping_tagged) },
	{ 0x8f9c199c, __VMLINUX_SYMBOL_STR(__get_user_2) },
	{ 0x3d408e4d, __VMLINUX_SYMBOL_STR(fs_dax_get_by_bdev) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x971f06a3, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x6fd040ec, __VMLINUX_SYMBOL_STR(generic_segment_checks) },
	{ 0x14437b61, __VMLINUX_SYMBOL_STR(inode_sb_list_add) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xf593898a, __VMLINUX_SYMBOL_STR(iomap_truncate_page) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x628c917c, __VMLINUX_SYMBOL_STR(iomap_file_buffered_write) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe925b204, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0x52e938b2, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x18e6b5cd, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x6772454, __VMLINUX_SYMBOL_STR(__bdev_dax_supported) },
	{ 0xca919404, __VMLINUX_SYMBOL_STR(set_blocksize) },
	{ 0x86e7a6f4, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x82bc86da, __VMLINUX_SYMBOL_STR(__percpu_counter_compare) },
	{ 0xe2d94ff3, __VMLINUX_SYMBOL_STR(inode_init_always) },
	{ 0x819b4061, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x8f49a246, __VMLINUX_SYMBOL_STR(bioset_free) },
	{ 0x925520d2, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x4b55313f, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0xa1501aec, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0xfdb5cbba, __VMLINUX_SYMBOL_STR(filemap_flush) },
	{ 0x5776642c, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcrc32c";


MODULE_INFO(srcversion, "A1F331609278C64155482F0");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
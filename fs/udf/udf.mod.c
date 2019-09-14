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
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37e57c3d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x24a5d9bf, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xe063f03d, __VMLINUX_SYMBOL_STR(__bread) },
	{ 0x5d43e8d3, __VMLINUX_SYMBOL_STR(unload_nls) },
	{ 0x34f3fb1f, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0xc821665c, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x69c74a2b, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x68cd4849, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x6d356209, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x4ed2fb8e, __VMLINUX_SYMBOL_STR(simple_write_end) },
	{ 0x815b5dd4, __VMLINUX_SYMBOL_STR(match_octal) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0x564be946, __VMLINUX_SYMBOL_STR(block_write_begin) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe954762d, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x2ee05603, __VMLINUX_SYMBOL_STR(generic_file_open) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xd488791e, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0xf16169f8, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x3da636f6, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xf3108d14, __VMLINUX_SYMBOL_STR(generic_file_aio_read) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x9cea7384, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x38b26a9c, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x12e16ccb, __VMLINUX_SYMBOL_STR(d_instantiate_new) },
	{ 0x7f9ad7a0, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xe62cbe6d, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xf08c1f24, __VMLINUX_SYMBOL_STR(generic_file_aio_write) },
	{ 0x2f4c181a, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x41972754, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5ae7445f, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x830404f3, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x6c9eb947, __VMLINUX_SYMBOL_STR(mpage_readpage) },
	{ 0x210a6e36, __VMLINUX_SYMBOL_STR(inode_add_bytes) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xafbf00ce, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x221201db, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcd25c12, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0xa90d3cd7, __VMLINUX_SYMBOL_STR(mpage_writepages) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x1fe8f483, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfd5cf105, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x40ccf25c, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x13a1a61a, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x2677c1b1, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xb7bfb080, __VMLINUX_SYMBOL_STR(insert_inode_locked) },
	{ 0x3eb351fa, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0xfe3d5457, __VMLINUX_SYMBOL_STR(truncate_pagecache) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x5de75127, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x872fc991, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xfe5d4bb2, __VMLINUX_SYMBOL_STR(sys_tz) },
	{ 0x4f6d74cf, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xfd2e34b, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbf0410cd, __VMLINUX_SYMBOL_STR(invalidate_inode_buffers) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x7fc02f17, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x978c969f, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0xad14d0f, __VMLINUX_SYMBOL_STR(inode_sub_bytes) },
	{ 0xce9b6ece, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x2a196e39, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xfb2449f0, __VMLINUX_SYMBOL_STR(load_nls) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6d334118, __VMLINUX_SYMBOL_STR(__get_user_8) },
	{ 0xfca3f8c8, __VMLINUX_SYMBOL_STR(generic_write_end) },
	{ 0xdc2cbf2b, __VMLINUX_SYMBOL_STR(do_sync_read) },
	{ 0xeebd4852, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x73ed6e61, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe4a8abdd, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe644f4ea, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x11c05483, __VMLINUX_SYMBOL_STR(generic_file_fsync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9559e8eb, __VMLINUX_SYMBOL_STR(do_sync_write) },
	{ 0x193c8872, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x6d2ce923, __VMLINUX_SYMBOL_STR(load_nls_default) },
	{ 0x35f498ea, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xb601909e, __VMLINUX_SYMBOL_STR(block_truncate_page) },
	{ 0xce605b1e, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0x1cd3bdb9, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x46af2b76, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x9aba54e3, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x5e14c0ee, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x213f7bd5, __VMLINUX_SYMBOL_STR(ioctl_by_bdev) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x971f06a3, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0xd434cca4, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x52e938b2, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0xbf3dbf85, __VMLINUX_SYMBOL_STR(__getblk) },
	{ 0x819b4061, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0x913c50e8, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xa9af4b38, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0xa1501aec, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x5776642c, __VMLINUX_SYMBOL_STR(generic_block_bmap) },
	{ 0x473b7306, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x5ffa6a7f, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0xf812cff6, __VMLINUX_SYMBOL_STR(memscan) },
	{ 0xb1eab091, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-itu-t";


MODULE_INFO(srcversion, "A49EA90EE9D7190A2519A4D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

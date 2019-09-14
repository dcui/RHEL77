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
	{ 0x47510d53, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0xba70d5ae, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37e57c3d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xfe6fd8db, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xceab0311, __VMLINUX_SYMBOL_STR(strchrnul) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd01cf20f, __VMLINUX_SYMBOL_STR(d_invalidate) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x68cd4849, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xabcaa577, __VMLINUX_SYMBOL_STR(free_anon_bdev) },
	{ 0xe91fc98, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0x2e99f239, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0xcbbf077f, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xfe2b82d6, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0x7e005d6c, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc4784734, __VMLINUX_SYMBOL_STR(vfs_tmpfile) },
	{ 0x6fae2dcf, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x94683f44, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0x560cd071, __VMLINUX_SYMBOL_STR(lookup_one_len_unlocked) },
	{ 0x1930a265, __VMLINUX_SYMBOL_STR(vfs_clone_file_range) },
	{ 0xcde0e455, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xc07f211d, __VMLINUX_SYMBOL_STR(generic_delete_inode) },
	{ 0x52cbb014, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xace53ed6, __VMLINUX_SYMBOL_STR(take_dentry_name_snapshot) },
	{ 0xa3a1832f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x9cea7384, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xba1caea9, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x93ff17d9, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd45cc6ca, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6def63e1, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0x7f9ad7a0, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xde4fab67, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xe5318711, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x61abde57, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0x258b1c5, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x9781a2b9, __VMLINUX_SYMBOL_STR(security_dentry_create_files_as) },
	{ 0x88c9c2d8, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0xa47b5f2e, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd74a8cb1, __VMLINUX_SYMBOL_STR(security_inode_copy_up) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8245326, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0xe8617a03, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x14fd200, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0x257ee9ad, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xadac4d0f, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x389ff91f, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x2d994605, __VMLINUX_SYMBOL_STR(security_inode_copy_up_xattr) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7a9ef84, __VMLINUX_SYMBOL_STR(release_dentry_name_snapshot) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xce28e715, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0x6dcf857f, __VMLINUX_SYMBOL_STR(uuid_null) },
	{ 0x4492645d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x7a4a60c, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfd5cf105, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xb11f6a3d, __VMLINUX_SYMBOL_STR(vfs_whiteout) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x194fd0c2, __VMLINUX_SYMBOL_STR(mark_tech_preview) },
	{ 0xe4210afa, __VMLINUX_SYMBOL_STR(exportfs_encode_fh) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x2d03c10d, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0x9b617a5b, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0xc0fba65a, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0xaf6ae696, __VMLINUX_SYMBOL_STR(kstrndup) },
	{ 0x843b364e, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x4f6d74cf, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xc685f1cb, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x39804438, __VMLINUX_SYMBOL_STR(capable_wrt_inode_uidgid) },
	{ 0x873f58c1, __VMLINUX_SYMBOL_STR(iterate_fd) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x2d8f30bb, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe6eac7c3, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0xeebd4852, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x3f0966c7, __VMLINUX_SYMBOL_STR(exportfs_decode_fh) },
	{ 0xf83fbf40, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x8c8eb4d1, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0x8b037ae2, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x2f021678, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0x9a5349f3, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe4a8abdd, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x91242962, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xa83971ad, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x2070d090, __VMLINUX_SYMBOL_STR(do_splice_direct) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xe644f4ea, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcfc6c7df, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0xb0337dac, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x193c8872, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x35f498ea, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x1e26be3b, __VMLINUX_SYMBOL_STR(get_anon_bdev) },
	{ 0x696bcdda, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x1cd3bdb9, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0x46af2b76, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xe4c7a06b, __VMLINUX_SYMBOL_STR(is_subdir) },
	{ 0x3797ecc1, __VMLINUX_SYMBOL_STR(inode_set_flags) },
	{ 0xe0f6811b, __VMLINUX_SYMBOL_STR(d_instantiate_anon) },
	{ 0xe668dbe1, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x971f06a3, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd434cca4, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x8cab7e99, __VMLINUX_SYMBOL_STR(inode_insert5) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x272be9b4, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x487d9343, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x9b4370f9, __VMLINUX_SYMBOL_STR(clone_private_mount) },
	{ 0xdd3a3aa9, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xc26151de, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xea03e824, __VMLINUX_SYMBOL_STR(d_alloc_anon) },
	{ 0x1197bf0d, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0xc8e3b4d, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xa1501aec, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xd54a000c, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xc6e4b7ce, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0x473b7306, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0x96435078, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0xbc86417f, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0xb1eab091, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "35816F78BA4302A3CFE3853");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
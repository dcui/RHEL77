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
	{ 0xcbbc096f, __VMLINUX_SYMBOL_STR(nfs_unlink) },
	{ 0x2f49e7, __VMLINUX_SYMBOL_STR(nfs_symlink) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0x5e50556b, __VMLINUX_SYMBOL_STR(xdr_stream_pos) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x6507f4b9, __VMLINUX_SYMBOL_STR(nfs_refresh_inode) },
	{ 0x9843ca0d, __VMLINUX_SYMBOL_STR(nfs_close_context) },
	{ 0x50ddb7e3, __VMLINUX_SYMBOL_STR(nfs_free_client) },
	{ 0xf10ec257, __VMLINUX_SYMBOL_STR(nfs_try_mount) },
	{ 0xfe2b82d6, __VMLINUX_SYMBOL_STR(posix_acl_to_xattr) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x29884695, __VMLINUX_SYMBOL_STR(nfs_permission) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xe789dd2c, __VMLINUX_SYMBOL_STR(put_nfs_open_context) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0x79cea99a, __VMLINUX_SYMBOL_STR(nfs_link) },
	{ 0x6c577425, __VMLINUX_SYMBOL_STR(xdr_inline_pages) },
	{ 0x4254c20c, __VMLINUX_SYMBOL_STR(rpc_restart_call) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x54f6320b, __VMLINUX_SYMBOL_STR(nfs_instantiate) },
	{ 0xfde2f6c1, __VMLINUX_SYMBOL_STR(nfs_sops) },
	{ 0xb38ea809, __VMLINUX_SYMBOL_STR(nfs_setattr_update_inode) },
	{ 0xf181b373, __VMLINUX_SYMBOL_STR(nfs_async_iocounter_wait) },
	{ 0xfac358bd, __VMLINUX_SYMBOL_STR(unregister_nfs_version) },
	{ 0xf7beb2a9, __VMLINUX_SYMBOL_STR(nfs_rmdir) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x292edbc9, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xfb7ee006, __VMLINUX_SYMBOL_STR(nfs_alloc_fattr) },
	{ 0x41972754, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x98b0ece8, __VMLINUX_SYMBOL_STR(nfs_init_timeout_values) },
	{ 0x4e113380, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xb606e716, __VMLINUX_SYMBOL_STR(nfs_fattr_init) },
	{ 0x6db7aa8e, __VMLINUX_SYMBOL_STR(xdr_terminate_string) },
	{ 0x92d0d022, __VMLINUX_SYMBOL_STR(nfs_setattr) },
	{ 0x560fed3c, __VMLINUX_SYMBOL_STR(nfs_fs_type) },
	{ 0x830404f3, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0xb18756ea, __VMLINUX_SYMBOL_STR(rpc_call_sync) },
	{ 0xa1ecb492, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xfed6e3f3, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2bba6c7f, __VMLINUX_SYMBOL_STR(register_nfs_version) },
	{ 0x2b3e3da4, __VMLINUX_SYMBOL_STR(rpc_bind_new_program) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x1fe8f483, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x6a7b1009, __VMLINUX_SYMBOL_STR(nfs_zap_acl_cache) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfc91af3a, __VMLINUX_SYMBOL_STR(nfs_getattr) },
	{ 0x60df1e3b, __VMLINUX_SYMBOL_STR(posix_acl_equiv_mode) },
	{ 0x70e85f96, __VMLINUX_SYMBOL_STR(nfs_invalidate_atime) },
	{ 0x81f21227, __VMLINUX_SYMBOL_STR(get_nfs_open_context) },
	{ 0x2d03c10d, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0x270f3550, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0xc8b6bd51, __VMLINUX_SYMBOL_STR(nfs_lookup) },
	{ 0x17145489, __VMLINUX_SYMBOL_STR(nfs_rename) },
	{ 0x3a812bc3, __VMLINUX_SYMBOL_STR(nfs_put_lock_context) },
	{ 0xfccdba43, __VMLINUX_SYMBOL_STR(nfs_file_operations) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1943ada0, __VMLINUX_SYMBOL_STR(nfs_get_client) },
	{ 0x2a196e39, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe6eac7c3, __VMLINUX_SYMBOL_STR(posix_acl_from_xattr) },
	{ 0x1139f22d, __VMLINUX_SYMBOL_STR(nfs_get_lock_context) },
	{ 0xc1fdbc61, __VMLINUX_SYMBOL_STR(nfs_revalidate_inode) },
	{ 0x3dc20416, __VMLINUX_SYMBOL_STR(nfs_mkdir) },
	{ 0x5e95b1cd, __VMLINUX_SYMBOL_STR(current_umask) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x57622d11, __VMLINUX_SYMBOL_STR(nfs_create) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc83b4d5b, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0xacd82c54, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0x57f81843, __VMLINUX_SYMBOL_STR(xdr_read_pages) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0x1f2a9970, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x3b4c24f8, __VMLINUX_SYMBOL_STR(nfs_post_op_update_inode) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf2d7a1b1, __VMLINUX_SYMBOL_STR(nfs_init_client) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x52926122, __VMLINUX_SYMBOL_STR(nfs_create_server) },
	{ 0xb70ef8d0, __VMLINUX_SYMBOL_STR(nfs_mknod) },
	{ 0x2cdb8318, __VMLINUX_SYMBOL_STR(nfs_submount) },
	{ 0x4d033d97, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xbdc29cbf, __VMLINUX_SYMBOL_STR(nfs_wb_all) },
	{ 0xd3a0a256, __VMLINUX_SYMBOL_STR(nfs_access_zap_cache) },
	{ 0x5484680e, __VMLINUX_SYMBOL_STR(xdr_write_pages) },
	{ 0xe8e7db4d, __VMLINUX_SYMBOL_STR(nfs_dentry_operations) },
	{ 0x3e149de6, __VMLINUX_SYMBOL_STR(nfs_alloc_client) },
	{ 0x70a0e5cf, __VMLINUX_SYMBOL_STR(nfs_writeback_update_inode) },
	{ 0x2f30c30c, __VMLINUX_SYMBOL_STR(nlmclnt_proc) },
	{ 0xce9fd2e4, __VMLINUX_SYMBOL_STR(nfs_clone_server) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfs,sunrpc,nfs_acl,lockd";


MODULE_INFO(srcversion, "D995BE49C886F03B15376E1");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

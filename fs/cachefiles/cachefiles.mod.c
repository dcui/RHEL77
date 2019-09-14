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
	{ 0xdd9d130d, __VMLINUX_SYMBOL_STR(set_create_files_as) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xe8e5c2f8, __VMLINUX_SYMBOL_STR(set_security_override_from_ctx) },
	{ 0xd43db344, __VMLINUX_SYMBOL_STR(security_path_rename) },
	{ 0x9da2fb26, __VMLINUX_SYMBOL_STR(security_inode_mkdir) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xfe46381f, __VMLINUX_SYMBOL_STR(fscache_object_mark_killed) },
	{ 0xf7c286cf, __VMLINUX_SYMBOL_STR(prepare_kernel_cred) },
	{ 0xcbbf077f, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xcde0e455, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x52cbb014, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xa3a1832f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xba1caea9, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0xd1b71145, __VMLINUX_SYMBOL_STR(add_to_page_cache_lru) },
	{ 0x8ec4efa6, __VMLINUX_SYMBOL_STR(fscache_object_init) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb48a2e08, __VMLINUX_SYMBOL_STR(fscache_object_lookup_negative) },
	{ 0x95dad3f2, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4e72b71a, __VMLINUX_SYMBOL_STR(fscache_add_cache) },
	{ 0x69fe8a29, __VMLINUX_SYMBOL_STR(fscache_check_aux) },
	{ 0x88c9c2d8, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xa3564480, __VMLINUX_SYMBOL_STR(security_inode_create) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x4320b4fa, __VMLINUX_SYMBOL_STR(security_path_unlink) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x14fd200, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0xe74bdba6, __VMLINUX_SYMBOL_STR(fscache_cache_cleared_wq) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xf23b2e74, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x389ff91f, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x4cfe6c89, __VMLINUX_SYMBOL_STR(security_path_mkdir) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8fe405cc, __VMLINUX_SYMBOL_STR(fscache_obtained_object) },
	{ 0xce28e715, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x970e9af7, __VMLINUX_SYMBOL_STR(__page_cache_alloc) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x7a4a60c, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x13a1a61a, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x6343a556, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb6e7122, __VMLINUX_SYMBOL_STR(fscache_withdraw_cache) },
	{ 0xa07a37f0, __VMLINUX_SYMBOL_STR(memchr) },
	{ 0x5de75127, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xa3638609, __VMLINUX_SYMBOL_STR(fscache_mark_pages_cached) },
	{ 0x7d02b90e, __VMLINUX_SYMBOL_STR(fscache_mark_page_cached) },
	{ 0x9b617a5b, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0xbbfcaca5, __VMLINUX_SYMBOL_STR(bit_waitqueue) },
	{ 0xb347bb2c, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0xc685f1cb, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x783b3563, __VMLINUX_SYMBOL_STR(wake_up_atomic_t) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x33b84f74, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0x519bc28, __VMLINUX_SYMBOL_STR(fscache_fsdef_index) },
	{ 0xca25ac59, __VMLINUX_SYMBOL_STR(fscache_init_cache) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x708705f9, __VMLINUX_SYMBOL_STR(fscache_object_destroy) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x8c8eb4d1, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0x8b037ae2, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x9a5349f3, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x91242962, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0xcb6fe75, __VMLINUX_SYMBOL_STR(vfs_truncate) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3a6ea805, __VMLINUX_SYMBOL_STR(security_path_mknod) },
	{ 0x23070c33, __VMLINUX_SYMBOL_STR(fscache_put_operation) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xa83971ad, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x41333485, __VMLINUX_SYMBOL_STR(add_page_wait_queue) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc062e48f, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0x696bcdda, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x38e736ae, __VMLINUX_SYMBOL_STR(fscache_io_error) },
	{ 0x16f5bf3d, __VMLINUX_SYMBOL_STR(abort_creds) },
	{ 0xb0449fc, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x92cf98e, __VMLINUX_SYMBOL_STR(fscache_object_sleep_till_congested) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xadeacf60, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0x431ca18d, __VMLINUX_SYMBOL_STR(fscache_enqueue_operation) },
	{ 0x272be9b4, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xdd3a3aa9, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x8daac550, __VMLINUX_SYMBOL_STR(fscache_object_retrying_stale) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1150e947, __VMLINUX_SYMBOL_STR(fscache_op_complete) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x1197bf0d, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0xc8e3b4d, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xa1012e43, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xd54a000c, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x96435078, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fscache";


MODULE_INFO(srcversion, "C3E2F5B06AF784959418E6B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

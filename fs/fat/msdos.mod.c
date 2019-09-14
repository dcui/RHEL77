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
	{ 0xd96e76b1, __VMLINUX_SYMBOL_STR(fat_detach) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x37e57c3d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x24a5d9bf, __VMLINUX_SYMBOL_STR(mark_buffer_dirty_inode) },
	{ 0x69c74a2b, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x43d23d4c, __VMLINUX_SYMBOL_STR(fat_flush_inodes) },
	{ 0x9cea7384, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x38b26a9c, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xdc590474, __VMLINUX_SYMBOL_STR(fat_sync_inode) },
	{ 0xed4c5eb2, __VMLINUX_SYMBOL_STR(fat_add_entries) },
	{ 0xdda412e, __VMLINUX_SYMBOL_STR(fat_remove_entries) },
	{ 0x2d62293f, __VMLINUX_SYMBOL_STR(fat_alloc_new_dir) },
	{ 0x8b4e328f, __VMLINUX_SYMBOL_STR(fat_fill_super) },
	{ 0x6b979666, __VMLINUX_SYMBOL_STR(fat_build_inode) },
	{ 0xcaebf78f, __VMLINUX_SYMBOL_STR(fat_attach) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfd5cf105, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x3eb351fa, __VMLINUX_SYMBOL_STR(sync_dirty_buffer) },
	{ 0x4fa75ab2, __VMLINUX_SYMBOL_STR(fat_getattr) },
	{ 0x872fc991, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x73ed6e61, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6f20960a, __VMLINUX_SYMBOL_STR(full_name_hash) },
	{ 0x676f1c44, __VMLINUX_SYMBOL_STR(fat_scan) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x93cb31b1, __VMLINUX_SYMBOL_STR(__fat_fs_error) },
	{ 0x35f498ea, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x10097bb9, __VMLINUX_SYMBOL_STR(fat_setattr) },
	{ 0x67ff6dfd, __VMLINUX_SYMBOL_STR(fat_free_clusters) },
	{ 0xf781837f, __VMLINUX_SYMBOL_STR(fat_get_dotdot_entry) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xbd44efc2, __VMLINUX_SYMBOL_STR(fat_time_unix2fat) },
	{ 0x23a4076f, __VMLINUX_SYMBOL_STR(fat_dir_empty) },
	{ 0xa1501aec, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x473b7306, __VMLINUX_SYMBOL_STR(clear_nlink) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fat";


MODULE_INFO(srcversion, "4F6C3F5CD5452A5E7F290E0");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

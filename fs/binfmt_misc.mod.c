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
	{ 0x985ec4a3, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x76212ad1, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x520dda72, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0xd235532c, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xdebdb3cf, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0x878754c0, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x97e1f970, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xe644f4ea, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xa1501aec, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x327bb5b3, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0xafbf00ce, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0xd434cca4, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x272be9b4, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x52cbb014, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x64bbc288, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xf6d4839d, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xa3a1832f, __VMLINUX_SYMBOL_STR(dput) },
	{ 0xf83fbf40, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x37e57c3d, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x13a1a61a, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x913c50e8, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0x1d24f3a7, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x8621edef, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x85c55bcc, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x7db558d, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xa90886d5, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xf157731d, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0xe15705a4, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0x60e4ad78, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xf43a93eb, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0x3d1d9222, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x121ea706, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "94E4CE2E390B0EECC8654D6");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

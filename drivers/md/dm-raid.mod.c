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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x33f324ab, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xfcd652d7, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x3fe2ccbe, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x875f4640, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x4c43e783, __VMLINUX_SYMBOL_STR(r5c_journal_mode_set) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x71505b0e, __VMLINUX_SYMBOL_STR(md_start) },
	{ 0x67384cb6, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xbc71b787, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x11e0ec41, __VMLINUX_SYMBOL_STR(dm_read_arg) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xc7d094b5, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0xb47d14be, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x28cafaa5, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x304f1d09, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x5a37c304, __VMLINUX_SYMBOL_STR(dm_disk) },
	{ 0x2979b801, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0x771188b9, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x3df019ff, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x941ec40f, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xacbc72c2, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xfd396ce9, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x660c95fc, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xdcc6f2b5, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0xf9cc0124, __VMLINUX_SYMBOL_STR(md_handle_request) },
	{ 0x4bf25125, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0x2debc632, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x5e2cd4f9, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0xf0759b4e, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4ee390dd, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xcc98e5b7, __VMLINUX_SYMBOL_STR(md_update_sb) },
	{ 0x1ce05459, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xaf17931f, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x7c922190, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x124af3bf, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,raid456";


MODULE_INFO(srcversion, "A9818823322564DBADF42A3");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7959fc3f, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x9f13414d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x5ef68d5c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x25efd73, __VMLINUX_SYMBOL_STR(nd_btt_version) },
	{ 0x10e74b6d, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x507d34f3, __VMLINUX_SYMBOL_STR(generic_end_io_acct) },
	{ 0x2965bdcd, __VMLINUX_SYMBOL_STR(nvdimm_namespace_capacity) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbe8358e1, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x636c619f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3ad0dc58, __VMLINUX_SYMBOL_STR(nvdimm_namespace_disk_name) },
	{ 0x1d45035, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb5b1004f, __VMLINUX_SYMBOL_STR(nd_region_acquire_lane) },
	{ 0xddc65021, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9369425, __VMLINUX_SYMBOL_STR(to_nd_btt) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x95f82b97, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2b4459d7, __VMLINUX_SYMBOL_STR(btt_lbasize_is_supported) },
	{ 0x138e5c86, __VMLINUX_SYMBOL_STR(generic_start_io_acct) },
	{ 0xf45c0ff, __VMLINUX_SYMBOL_STR(nd_region_release_lane) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x7c56c563, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x975089b1, __VMLINUX_SYMBOL_STR(nd_dev_to_uuid) },
	{ 0x55610108, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x9d2a62b0, __VMLINUX_SYMBOL_STR(debugfs_create_x64) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x58390d3, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x26ade7cd, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x92744619, __VMLINUX_SYMBOL_STR(blk_integrity_unregister) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xfe65b33c, __VMLINUX_SYMBOL_STR(nd_btt_arena_is_valid) },
	{ 0x32ddc69b, __VMLINUX_SYMBOL_STR(nd_sb_checksum) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x8cf143d2, __VMLINUX_SYMBOL_STR(bio_integrity_enabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbc28fd2e, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xd1a6508c, __VMLINUX_SYMBOL_STR(to_nd_region) },
	{ 0xbefee8e4, __VMLINUX_SYMBOL_STR(debugfs_create_u16) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x20a7e727, __VMLINUX_SYMBOL_STR(nvdimm_revalidate_disk) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x177c57ca, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0xc855bb15, __VMLINUX_SYMBOL_STR(page_endio) },
	{ 0xaee2ce2a, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0xbdc527f, __VMLINUX_SYMBOL_STR(bio_integrity_prep) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm";


MODULE_INFO(srcversion, "D766E0F1418B0F59388456B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

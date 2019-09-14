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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x1d934684, __VMLINUX_SYMBOL_STR(memstick_unregister_driver) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x652b14d5, __VMLINUX_SYMBOL_STR(memstick_register_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xbc28fd2e, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x177c57ca, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x925e00bb, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0xbe0a2f77, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x5ef68d5c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x7c56c563, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x3ecb7e0f, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x84daafd0, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x7959fc3f, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x54677dd5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x973afab2, __VMLINUX_SYMBOL_STR(memstick_set_rw_addr) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3a7a8735, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf69fef42, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x95f82b97, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2efe9d0, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x5d820a02, __VMLINUX_SYMBOL_STR(memstick_init_req_sg) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x2d5e143b, __VMLINUX_SYMBOL_STR(__blk_end_request) },
	{ 0x40256835, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x52385726, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0xe0c3a1f3, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x605420f9, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd36a5252, __VMLINUX_SYMBOL_STR(memstick_new_req) },
	{ 0xdc07e67e, __VMLINUX_SYMBOL_STR(memstick_init_req) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x58390d3, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x24e6fc92, __VMLINUX_SYMBOL_STR(blk_stop_queue) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x149a3e2d, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=memstick";


MODULE_INFO(srcversion, "951EA769B8CDD5EEED0C68F");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

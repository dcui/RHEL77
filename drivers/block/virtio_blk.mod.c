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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xe22ac1ea, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x42734772, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xaee2ce2a, __VMLINUX_SYMBOL_STR(set_disk_ro) },
	{ 0x177c57ca, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x504b2a, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xfb458a6a, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0xa98189e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xea1f9d8a, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x2ff01a81, __VMLINUX_SYMBOL_STR(add_disk_with_attributes) },
	{ 0x925e00bb, __VMLINUX_SYMBOL_STR(blk_queue_max_segment_size) },
	{ 0x5ef68d5c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x7c56c563, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xbe0a2f77, __VMLINUX_SYMBOL_STR(blk_queue_max_segments) },
	{ 0x91ac8b2f, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xac338874, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0x7959fc3f, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x2a3e5d36, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe2a14390, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x6ab8a57f, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0xcf91794a, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x8b90c524, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xb4ce0e94, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xb4beff51, __VMLINUX_SYMBOL_STR(virtqueue_notify) },
	{ 0x4836f241, __VMLINUX_SYMBOL_STR(virtqueue_kick_prepare) },
	{ 0x86ad3ea6, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queue) },
	{ 0xa92c1d8b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xe0c3a1f3, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xc476f46, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0x6a591269, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x9c97ff25, __VMLINUX_SYMBOL_STR(blk_mq_end_request) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x62e8ba3a, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x1fb99830, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x449b3dbe, __VMLINUX_SYMBOL_STR(blk_make_request) },
	{ 0xbc102f29, __VMLINUX_SYMBOL_STR(bio_map_kern) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x58390d3, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5977d514, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x95f82b97, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7a156513, __VMLINUX_SYMBOL_STR(blk_mq_stop_hw_queues) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xa165d3d4, __VMLINUX_SYMBOL_STR(blk_mq_start_stopped_hw_queues) },
	{ 0xa611e6c9, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0x772a231f, __VMLINUX_SYMBOL_STR(virtqueue_is_broken) },
	{ 0x61d8bc72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0xdf209b2e, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x300209eb, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000002v*");

MODULE_INFO(srcversion, "E5518DC539C30F0B59254A2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

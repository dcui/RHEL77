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
	{ 0x450c190, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x856eabb1, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbc28fd2e, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x2a3e5d36, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x3ecb7e0f, __VMLINUX_SYMBOL_STR(blk_queue_prep_rq) },
	{ 0x738bbe5a, __VMLINUX_SYMBOL_STR(blk_queue_start_tag) },
	{ 0x8cf1dab2, __VMLINUX_SYMBOL_STR(blk_queue_stack_limits) },
	{ 0x294f285c, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x84daafd0, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0x7959fc3f, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x7b7f76d0, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x7c520392, __VMLINUX_SYMBOL_STR(osd_execute_request) },
	{ 0x180ef224, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0xdce747ae, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xc17edb1, __VMLINUX_SYMBOL_STR(osd_sec_init_nosec_doall_caps) },
	{ 0x7f806c24, __VMLINUX_SYMBOL_STR(osduld_path_lookup) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x86cf4bf2, __VMLINUX_SYMBOL_STR(osd_req_flush_object) },
	{ 0xf33ece8e, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0xbf3c143a, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x41d25037, __VMLINUX_SYMBOL_STR(blk_requeue_request) },
	{ 0x83123af6, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0xf1bfdcce, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0xbdae296, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0x7502c520, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xd6cb6349, __VMLINUX_SYMBOL_STR(blk_end_request_all) },
	{ 0x605420f9, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0x95f82b97, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x1b61ff91, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x58390d3, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3a7a8735, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0xbb4f81e1, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0xb524bed4, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,osd";


MODULE_INFO(srcversion, "70E906175578B1B9C08F3D3");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

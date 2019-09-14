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
	{ 0xd010a5d7, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf39caec7, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x7959fc3f, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x44fabea1, __VMLINUX_SYMBOL_STR(blk_add_request_payload) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x20eadeb6, __VMLINUX_SYMBOL_STR(ip_compute_csum) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3a9b6fb9, __VMLINUX_SYMBOL_STR(blk_unregister_region) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x7c1c337b, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xa98189e5, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xca66296f, __VMLINUX_SYMBOL_STR(scsi_mode_select) },
	{ 0xaa786c01, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x2a3e5d36, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xfb458a6a, __VMLINUX_SYMBOL_STR(blk_queue_alignment_offset) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xe2a14390, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xff7753bc, __VMLINUX_SYMBOL_STR(scsi_autopm_get_device) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x5c1b0517, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xb327d49, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x95f82b97, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xc554721a, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0xaf3dd7dc, __VMLINUX_SYMBOL_STR(scsi_logging_level) },
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x78a1f8cc, __VMLINUX_SYMBOL_STR(blk_register_region) },
	{ 0xf16c5307, __VMLINUX_SYMBOL_STR(scsi_report_opcode) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7e142e03, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0x2ea111e, __VMLINUX_SYMBOL_STR(scsi_driverbyte_string) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xb4ce0e94, __VMLINUX_SYMBOL_STR(string_get_size) },
	{ 0xc5be78f8, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x856eabb1, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x5d550c4d, __VMLINUX_SYMBOL_STR(scsi_sd_probe_domain) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x68d95008, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xb1c0c1c2, __VMLINUX_SYMBOL_STR(async_schedule_domain) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x504b2a, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2f1b8501, __VMLINUX_SYMBOL_STR(scsi_verify_blk_ioctl) },
	{ 0xb090dcb4, __VMLINUX_SYMBOL_STR(scsi_nonblockable_ioctl) },
	{ 0x709b797d, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x58390d3, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3f71faa1, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x593cc3b9, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xd8c2f104, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x6da4c5c5, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0xdbef80a4, __VMLINUX_SYMBOL_STR(scsi_device_set_state) },
	{ 0xba6d60b1, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x92744619, __VMLINUX_SYMBOL_STR(blk_integrity_unregister) },
	{ 0xb3d2c76d, __VMLINUX_SYMBOL_STR(scsi_hostbyte_string) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xf15d8de0, __VMLINUX_SYMBOL_STR(scsi_command_normalize_sense) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x9f986669, __VMLINUX_SYMBOL_STR(scsicam_bios_param) },
	{ 0x248c273b, __VMLINUX_SYMBOL_STR(ida_remove) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ca4bf88, __VMLINUX_SYMBOL_STR(async_synchronize_full_domain) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xbc28fd2e, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x5182420f, __VMLINUX_SYMBOL_STR(ida_pre_get) },
	{ 0x40677d0d, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x385d716f, __VMLINUX_SYMBOL_STR(scsi_get_vpd_page) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0x31dd2157, __VMLINUX_SYMBOL_STR(blk_pm_runtime_init) },
	{ 0xc666a132, __VMLINUX_SYMBOL_STR(crc_t10dif) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf7490fa, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x564218cf, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x5492940, __VMLINUX_SYMBOL_STR(scsi_autopm_put_device) },
	{ 0x3ea0773c, __VMLINUX_SYMBOL_STR(ida_get_new_above) },
	{ 0x177c57ca, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x79ed4f8c, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
	{ 0xf927fa22, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xdf0bcb1a, __VMLINUX_SYMBOL_STR(blk_integrity_register) },
	{ 0x814d8434, __VMLINUX_SYMBOL_STR(scsi_print_sense_hdr) },
	{ 0xaee2ce2a, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=crc-t10dif";


MODULE_INFO(srcversion, "6E3890E040BF5458588927E");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

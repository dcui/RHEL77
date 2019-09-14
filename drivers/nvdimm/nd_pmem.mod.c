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
	{ 0x359389b7, __VMLINUX_SYMBOL_STR(nd_btt_probe) },
	{ 0x86f3e8c2, __VMLINUX_SYMBOL_STR(to_nd_pfn) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x79229a90, __VMLINUX_SYMBOL_STR(alloc_disk_node) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xca7f6070, __VMLINUX_SYMBOL_STR(devm_init_badblocks) },
	{ 0x2e5a3f9d, __VMLINUX_SYMBOL_STR(badblocks_clear) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x5ef68d5c, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x2c635527, __VMLINUX_SYMBOL_STR(arch_invalidate_pmem) },
	{ 0xf458bd46, __VMLINUX_SYMBOL_STR(nvdimm_namespace_common_probe) },
	{ 0xe762571e, __VMLINUX_SYMBOL_STR(is_nd_pfn) },
	{ 0x10e74b6d, __VMLINUX_SYMBOL_STR(badblocks_check) },
	{ 0x7242d92, __VMLINUX_SYMBOL_STR(put_dax) },
	{ 0x507d34f3, __VMLINUX_SYMBOL_STR(generic_end_io_acct) },
	{ 0x8135613, __VMLINUX_SYMBOL_STR(dax_write_cache) },
	{ 0xfaffbf3a, __VMLINUX_SYMBOL_STR(devm_nsio_disable) },
	{ 0x527e2344, __VMLINUX_SYMBOL_STR(memcpy_fromiovecend_partial_flushcache) },
	{ 0x454b26cd, __VMLINUX_SYMBOL_STR(devm_memremap_pages) },
	{ 0x698da816, __VMLINUX_SYMBOL_STR(kernfs_put) },
	{ 0x9db0b640, __VMLINUX_SYMBOL_STR(nd_dax_probe) },
	{ 0xd5eb0e1a, __VMLINUX_SYMBOL_STR(memcpy_toiovecend_partial_mcsafe) },
	{ 0x2a3e5d36, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xde5a4e55, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x2f80dc85, __VMLINUX_SYMBOL_STR(blk_alloc_queue_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1016ca34, __VMLINUX_SYMBOL_STR(nd_pfn_probe) },
	{ 0x37d2d441, __VMLINUX_SYMBOL_STR(nvdimm_flush) },
	{ 0x1c6c5580, __VMLINUX_SYMBOL_STR(is_nd_btt) },
	{ 0x3ad0dc58, __VMLINUX_SYMBOL_STR(nvdimm_namespace_disk_name) },
	{ 0xa8aefbcc, __VMLINUX_SYMBOL_STR(devm_nsio_enable) },
	{ 0xf8f61ebc, __VMLINUX_SYMBOL_STR(wake_up_var) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9369425, __VMLINUX_SYMBOL_STR(to_nd_btt) },
	{ 0xd791b91, __VMLINUX_SYMBOL_STR(pmem_sector_size) },
	{ 0x95f82b97, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x1340efc5, __VMLINUX_SYMBOL_STR(__nd_driver_register) },
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xbfe4b685, __VMLINUX_SYMBOL_STR(dax_attribute_group) },
	{ 0x67e078d6, __VMLINUX_SYMBOL_STR(nvdimm_clear_poison) },
	{ 0x158bcb59, __VMLINUX_SYMBOL_STR(kernfs_find_and_get_ns) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5f6f1e9e, __VMLINUX_SYMBOL_STR(dax_get_private) },
	{ 0x138e5c86, __VMLINUX_SYMBOL_STR(generic_start_io_acct) },
	{ 0xdd5fbc2b, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xebf4c365, __VMLINUX_SYMBOL_STR(pmem_should_map_pages) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xabe4bec7, __VMLINUX_SYMBOL_STR(nvdimm_has_flush) },
	{ 0x76a2d755, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x7c56c563, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0xdfbd130e, __VMLINUX_SYMBOL_STR(nvdimm_namespace_detach_btt) },
	{ 0x55610108, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x4ecd6958, __VMLINUX_SYMBOL_STR(nvdimm_badblocks_populate) },
	{ 0x504b2a, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0x6350cf20, __VMLINUX_SYMBOL_STR(nvdimm_namespace_attach_btt) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2dab4f41, __VMLINUX_SYMBOL_STR(nvdimm_setup_pfn) },
	{ 0xfad9c827, __VMLINUX_SYMBOL_STR(kill_dax) },
	{ 0x58390d3, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xae1bcb49, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x258e5a3a, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x381e1dfd, __VMLINUX_SYMBOL_STR(alloc_dax) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x8b38b6a3, __VMLINUX_SYMBOL_STR(__memcpy_mcsafe) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9a4a9d94, __VMLINUX_SYMBOL_STR(mcsafe_key) },
	{ 0xbc28fd2e, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xd1a6508c, __VMLINUX_SYMBOL_STR(to_nd_region) },
	{ 0x4d95d6d1, __VMLINUX_SYMBOL_STR(memcpy_flushcache) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x20a7e727, __VMLINUX_SYMBOL_STR(nvdimm_revalidate_disk) },
	{ 0xdd5ab751, __VMLINUX_SYMBOL_STR(devm_memremap) },
	{ 0x513a3f81, __VMLINUX_SYMBOL_STR(nvdimm_has_cache) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x177c57ca, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xc855bb15, __VMLINUX_SYMBOL_STR(page_endio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm,nd_btt";


MODULE_INFO(srcversion, "AB42622FC08BA561E068DDB");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

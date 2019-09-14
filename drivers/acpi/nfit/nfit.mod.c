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
	{ 0x26147af8, __VMLINUX_SYMBOL_STR(acpi_bus_register_driver) },
	{ 0xc26b7532, __VMLINUX_SYMBOL_STR(nvdimm_cmd_mask) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xbb9acf8b, __VMLINUX_SYMBOL_STR(nd_blk_region_provider_data) },
	{ 0xaf20f5f4, __VMLINUX_SYMBOL_STR(nd_blk_region_to_dimm) },
	{ 0x61f4039, __VMLINUX_SYMBOL_STR(acpi_get_table_with_size) },
	{ 0x2bb55d6e, __VMLINUX_SYMBOL_STR(acpi_remove_notify_handler) },
	{ 0x7d36b7ad, __VMLINUX_SYMBOL_STR(region_intersects_pmem) },
	{ 0x4db70865, __VMLINUX_SYMBOL_STR(nvdimm_bus_attribute_group) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x35bf2acd, __VMLINUX_SYMBOL_STR(nd_fletcher64) },
	{ 0xd9091363, __VMLINUX_SYMBOL_STR(acpi_install_notify_handler) },
	{ 0x9e9eb34c, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0x146e7d3, __VMLINUX_SYMBOL_STR(nvdimm_attribute_group) },
	{ 0x8f2703b7, __VMLINUX_SYMBOL_STR(wbinvd_on_all_cpus) },
	{ 0x88844313, __VMLINUX_SYMBOL_STR(nd_blk_region_set_provider_data) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xb8b2b1f7, __VMLINUX_SYMBOL_STR(mce_register_decode_chain) },
	{ 0x20035347, __VMLINUX_SYMBOL_STR(nvdimm_kobj) },
	{ 0xaecbb5e8, __VMLINUX_SYMBOL_STR(nvdimm_pmem_region_create) },
	{ 0x44a81d5f, __VMLINUX_SYMBOL_STR(acpi_evaluate_object) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0x698da816, __VMLINUX_SYMBOL_STR(kernfs_put) },
	{ 0xb89b6e6b, __VMLINUX_SYMBOL_STR(guid_parse) },
	{ 0xf10126f1, __VMLINUX_SYMBOL_STR(acpi_bus_unregister_driver) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1877ca13, __VMLINUX_SYMBOL_STR(mce_is_memory_error) },
	{ 0x1921be11, __VMLINUX_SYMBOL_STR(nd_cmd_in_size) },
	{ 0xc2124bca, __VMLINUX_SYMBOL_STR(nd_region_dev) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5b8245ed, __VMLINUX_SYMBOL_STR(nvdimm_bus_register) },
	{ 0x899079d6, __VMLINUX_SYMBOL_STR(nvdimm_to_bus) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x6cfedeb3, __VMLINUX_SYMBOL_STR(nd_numa_attribute_group) },
	{ 0xd3d574d7, __VMLINUX_SYMBOL_STR(nvdimm_in_overwrite) },
	{ 0x37d2d441, __VMLINUX_SYMBOL_STR(nvdimm_flush) },
	{ 0xc805f93, __VMLINUX_SYMBOL_STR(clflush_cache_range) },
	{ 0xcd54220, __VMLINUX_SYMBOL_STR(insert_resource) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb5b1004f, __VMLINUX_SYMBOL_STR(nd_region_acquire_lane) },
	{ 0x5ea67322, __VMLINUX_SYMBOL_STR(nvdimm_provider_data) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xb87d3e22, __VMLINUX_SYMBOL_STR(nvdimm_volatile_region_create) },
	{ 0x70c1c699, __VMLINUX_SYMBOL_STR(devm_nvdimm_memremap) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf2000fbf, __VMLINUX_SYMBOL_STR(nd_region_attribute_group) },
	{ 0x8e97a6b5, __VMLINUX_SYMBOL_STR(to_nvdimm_bus_dev) },
	{ 0xda6fd9c4, __VMLINUX_SYMBOL_STR(nvdimm_name) },
	{ 0x29770cdd, __VMLINUX_SYMBOL_STR(nd_blk_memremap_flags) },
	{ 0x158bcb59, __VMLINUX_SYMBOL_STR(kernfs_find_and_get_ns) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x80ef3404, __VMLINUX_SYMBOL_STR(nvdimm_bus_unregister) },
	{ 0xf1c346b6, __VMLINUX_SYMBOL_STR(nd_cmd_dimm_desc) },
	{ 0xd9ab6907, __VMLINUX_SYMBOL_STR(nd_mapping_attribute_group) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x2545dc0f, __VMLINUX_SYMBOL_STR(nd_cmd_out_size) },
	{ 0x15784899, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xf45c0ff, __VMLINUX_SYMBOL_STR(nd_region_release_lane) },
	{ 0xa5e75e9a, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x112f5877, __VMLINUX_SYMBOL_STR(nd_device_attribute_group) },
	{ 0xca60df62, __VMLINUX_SYMBOL_STR(to_nd_desc) },
	{ 0x2bfeb410, __VMLINUX_SYMBOL_STR(acpi_get_handle) },
	{ 0xb347bb2c, __VMLINUX_SYMBOL_STR(work_busy) },
	{ 0x6cc67693, __VMLINUX_SYMBOL_STR(remove_resource) },
	{ 0xabe4bec7, __VMLINUX_SYMBOL_STR(nvdimm_has_flush) },
	{ 0x76a2d755, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1e3976a7, __VMLINUX_SYMBOL_STR(acpi_find_child_device) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x26ade7cd, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa22af16d, __VMLINUX_SYMBOL_STR(to_nvdimm_bus) },
	{ 0x258e5a3a, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x4b1d94aa, __VMLINUX_SYMBOL_STR(mce_is_correctable) },
	{ 0x8384647a, __VMLINUX_SYMBOL_STR(acpi_map_pxm_to_online_node) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbf66876, __VMLINUX_SYMBOL_STR(nvdimm_bus_check_dimm_count) },
	{ 0xd1a6508c, __VMLINUX_SYMBOL_STR(to_nd_region) },
	{ 0x13eec272, __VMLINUX_SYMBOL_STR(__nvdimm_create) },
	{ 0x4d95d6d1, __VMLINUX_SYMBOL_STR(memcpy_flushcache) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf2d7d87, __VMLINUX_SYMBOL_STR(mce_unregister_decode_chain) },
	{ 0xa360170d, __VMLINUX_SYMBOL_STR(to_nvdimm) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x66c397f7, __VMLINUX_SYMBOL_STR(nd_cmd_bus_desc) },
	{ 0xe5d95985, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x92f33430, __VMLINUX_SYMBOL_STR(nvdimm_bus_add_badrange) },
	{ 0xc40d11cb, __VMLINUX_SYMBOL_STR(nd_region_provider_data) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x174ef6c2, __VMLINUX_SYMBOL_STR(mce_usable_address) },
	{ 0xf683c0e0, __VMLINUX_SYMBOL_STR(to_nd_blk_region) },
	{ 0x78032f13, __VMLINUX_SYMBOL_STR(nvdimm_region_notify) },
	{ 0xeb9e357a, __VMLINUX_SYMBOL_STR(nvdimm_blk_region_create) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm";

MODULE_ALIAS("acpi*:ACPI0012:*");

MODULE_INFO(srcversion, "689D70D25C87622B5C0A827");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

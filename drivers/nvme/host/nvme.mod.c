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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0xa3f96685, __VMLINUX_SYMBOL_STR(wait_for_completion_io_timeout) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xf000f839, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0xc2f36f9b, __VMLINUX_SYMBOL_STR(pci_free_irq_vectors) },
	{ 0x2d1aeea5, __VMLINUX_SYMBOL_STR(nvme_reset_ctrl) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x253bdb78, __VMLINUX_SYMBOL_STR(param_get_int) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3d888bb8, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x2b45a889, __VMLINUX_SYMBOL_STR(pci_is_enabled) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xba559bfb, __VMLINUX_SYMBOL_STR(nvme_stop_ctrl) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x2b50bf5c, __VMLINUX_SYMBOL_STR(nvme_unfreeze) },
	{ 0x9343e812, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0xc476f46, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0xa9daec42, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xcea7749, __VMLINUX_SYMBOL_STR(nvme_shutdown_ctrl) },
	{ 0x6de8d0f3, __VMLINUX_SYMBOL_STR(nvme_set_queue_count) },
	{ 0x81af4e22, __VMLINUX_SYMBOL_STR(blk_rq_map_integrity_sg) },
	{ 0xefba93e1, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x79a21fb, __VMLINUX_SYMBOL_STR(nvme_stop_queues) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x142c4702, __VMLINUX_SYMBOL_STR(blk_mq_tag_to_rq) },
	{ 0x5d3b766, __VMLINUX_SYMBOL_STR(nvme_complete_async_event) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x3914025c, __VMLINUX_SYMBOL_STR(nvme_kill_queues) },
	{ 0x83c8a355, __VMLINUX_SYMBOL_STR(param_set_int) },
	{ 0xf9765833, __VMLINUX_SYMBOL_STR(dmi_match) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0xdf209b2e, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x6a708e2c, __VMLINUX_SYMBOL_STR(blk_mq_update_nr_hw_queues) },
	{ 0x91ac8b2f, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8d6e940f, __VMLINUX_SYMBOL_STR(pci_alloc_irq_vectors_affinity) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2abcf5b4, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0x7248face, __VMLINUX_SYMBOL_STR(nvme_enable_ctrl) },
	{ 0x5bbdc39c, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0xb0c277ee, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x813cf212, __VMLINUX_SYMBOL_STR(nvme_io_timeout) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x468a442b, __VMLINUX_SYMBOL_STR(sysfs_remove_file_from_group) },
	{ 0x5977d514, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x495e47c2, __VMLINUX_SYMBOL_STR(nvme_init_identify) },
	{ 0xe8ac4db1, __VMLINUX_SYMBOL_STR(nvme_remove_namespaces) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x85179274, __VMLINUX_SYMBOL_STR(pci_device_is_present) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x87526260, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0xb25b6ec8, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0x43e3cbdf, __VMLINUX_SYMBOL_STR(nvme_init_ctrl) },
	{ 0x15455c9c, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb3ea49f2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0xbddfff8f, __VMLINUX_SYMBOL_STR(nvme_change_ctrl_state) },
	{ 0x89b58b55, __VMLINUX_SYMBOL_STR(blk_mq_free_request) },
	{ 0xe9dff136, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x87dc469a, __VMLINUX_SYMBOL_STR(mempool_create_node) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x18045377, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x656b17ff, __VMLINUX_SYMBOL_STR(nvme_cancel_request) },
	{ 0xa7fe99f8, __VMLINUX_SYMBOL_STR(nvme_wait_freeze) },
	{ 0x1dafbfb9, __VMLINUX_SYMBOL_STR(blk_mq_pci_map_queues) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x6a037cf1, __VMLINUX_SYMBOL_STR(mempool_kfree) },
	{ 0x1a80e3f3, __VMLINUX_SYMBOL_STR(blk_rq_count_integrity_sg) },
	{ 0xe0c3a1f3, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0xac338874, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x4aad52d7, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xf99d347e, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0x43dcfab0, __VMLINUX_SYMBOL_STR(nvme_disable_ctrl) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x2eac8294, __VMLINUX_SYMBOL_STR(pci_irq_vector) },
	{ 0x64b62862, __VMLINUX_SYMBOL_STR(nvme_wq) },
	{ 0xa05c03df, __VMLINUX_SYMBOL_STR(mempool_kmalloc) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x6a4ce13c, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x220887b7, __VMLINUX_SYMBOL_STR(nvme_submit_sync_cmd) },
	{ 0x47d692e0, __VMLINUX_SYMBOL_STR(blk_mq_quiesce_queue) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xe66cbd01, __VMLINUX_SYMBOL_STR(blk_mq_unquiesce_queue) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x9c0419b9, __VMLINUX_SYMBOL_STR(pcibios_resource_to_bus) },
	{ 0xf3a1c758, __VMLINUX_SYMBOL_STR(nvme_start_ctrl) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2691f446, __VMLINUX_SYMBOL_STR(nvme_start_freeze) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x9bcc3f3b, __VMLINUX_SYMBOL_STR(nvme_setup_cmd) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xd45434ee, __VMLINUX_SYMBOL_STR(admin_timeout) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xa37163f, __VMLINUX_SYMBOL_STR(nvme_alloc_request) },
	{ 0xe06d9afa, __VMLINUX_SYMBOL_STR(nvme_start_queues) },
	{ 0xfff8c1d6, __VMLINUX_SYMBOL_STR(sysfs_add_file_to_group) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbecbf54e, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1cfb9239, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x5f1ec678, __VMLINUX_SYMBOL_STR(nvme_wait_freeze_timeout) },
	{ 0x841b8930, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x78815045, __VMLINUX_SYMBOL_STR(nvme_reset_ctrl_sync) },
	{ 0xdc61ce31, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0x499b83d8, __VMLINUX_SYMBOL_STR(nvme_complete_rq) },
	{ 0x4c255593, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xb794641, __VMLINUX_SYMBOL_STR(nvme_uninit_ctrl) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x53108e44, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core";

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");

MODULE_INFO(srcversion, "140159834F069DD89E947C3");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

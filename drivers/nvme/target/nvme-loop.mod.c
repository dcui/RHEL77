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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xba2cb84e, __VMLINUX_SYMBOL_STR(sg_alloc_table_chained) },
	{ 0x2d1aeea5, __VMLINUX_SYMBOL_STR(nvme_reset_ctrl) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xba559bfb, __VMLINUX_SYMBOL_STR(nvme_stop_ctrl) },
	{ 0x9343e812, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0xc476f46, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0xc7973762, __VMLINUX_SYMBOL_STR(nvmf_register_transport) },
	{ 0xcea7749, __VMLINUX_SYMBOL_STR(nvme_shutdown_ctrl) },
	{ 0x6de8d0f3, __VMLINUX_SYMBOL_STR(nvme_set_queue_count) },
	{ 0x79a21fb, __VMLINUX_SYMBOL_STR(nvme_stop_queues) },
	{ 0x142c4702, __VMLINUX_SYMBOL_STR(blk_mq_tag_to_rq) },
	{ 0x5d3b766, __VMLINUX_SYMBOL_STR(nvme_complete_async_event) },
	{ 0x78191a7, __VMLINUX_SYMBOL_STR(nvmet_sq_init) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdf209b2e, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x89f61236, __VMLINUX_SYMBOL_STR(nvmf_reg_write32) },
	{ 0x6a708e2c, __VMLINUX_SYMBOL_STR(blk_mq_update_nr_hw_queues) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7f7b5c18, __VMLINUX_SYMBOL_STR(nvmet_req_execute) },
	{ 0x91ac8b2f, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x7248face, __VMLINUX_SYMBOL_STR(nvme_enable_ctrl) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x813cf212, __VMLINUX_SYMBOL_STR(nvme_io_timeout) },
	{ 0x6a925259, __VMLINUX_SYMBOL_STR(nvmf_connect_admin_queue) },
	{ 0x5977d514, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0x495e47c2, __VMLINUX_SYMBOL_STR(nvme_init_identify) },
	{ 0xc07c02fe, __VMLINUX_SYMBOL_STR(nvmf_reg_read64) },
	{ 0x39626a1a, __VMLINUX_SYMBOL_STR(nvmet_register_transport) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x181fdba5, __VMLINUX_SYMBOL_STR(nvmet_req_init) },
	{ 0xd58bbbcb, __VMLINUX_SYMBOL_STR(nvme_delete_wq) },
	{ 0x43e3cbdf, __VMLINUX_SYMBOL_STR(nvme_init_ctrl) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xbddfff8f, __VMLINUX_SYMBOL_STR(nvme_change_ctrl_state) },
	{ 0xc6e24173, __VMLINUX_SYMBOL_STR(nvmet_unregister_transport) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x9392dcd3, __VMLINUX_SYMBOL_STR(nvmf_unregister_transport) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x656b17ff, __VMLINUX_SYMBOL_STR(nvme_cancel_request) },
	{ 0xb59434cf, __VMLINUX_SYMBOL_STR(nvmet_sq_destroy) },
	{ 0x59ce4509, __VMLINUX_SYMBOL_STR(nvmf_get_address) },
	{ 0xe0c3a1f3, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xac338874, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x2d3a2b9b, __VMLINUX_SYMBOL_STR(nvme_delete_ctrl) },
	{ 0x3595aa94, __VMLINUX_SYMBOL_STR(nvmf_reg_read32) },
	{ 0x5e3f7a3, __VMLINUX_SYMBOL_STR(__nvmf_check_ready) },
	{ 0x9d6e9700, __VMLINUX_SYMBOL_STR(sg_free_table_chained) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x47d692e0, __VMLINUX_SYMBOL_STR(blk_mq_quiesce_queue) },
	{ 0xd7ffd446, __VMLINUX_SYMBOL_STR(nvmf_connect_io_queue) },
	{ 0xe66cbd01, __VMLINUX_SYMBOL_STR(blk_mq_unquiesce_queue) },
	{ 0xf3a1c758, __VMLINUX_SYMBOL_STR(nvme_start_ctrl) },
	{ 0x9bcc3f3b, __VMLINUX_SYMBOL_STR(nvme_setup_cmd) },
	{ 0xd45434ee, __VMLINUX_SYMBOL_STR(admin_timeout) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfb37f925, __VMLINUX_SYMBOL_STR(nvmf_free_options) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd87a491, __VMLINUX_SYMBOL_STR(nvmf_fail_nonready_command) },
	{ 0x499b83d8, __VMLINUX_SYMBOL_STR(nvme_complete_rq) },
	{ 0xb794641, __VMLINUX_SYMBOL_STR(nvme_uninit_ctrl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core,nvme-fabrics,nvmet";


MODULE_INFO(srcversion, "FF12FE9262E71BD7C0BC2E9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

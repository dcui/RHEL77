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
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x61762346, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xba2cb84e, __VMLINUX_SYMBOL_STR(sg_alloc_table_chained) },
	{ 0x2d1aeea5, __VMLINUX_SYMBOL_STR(nvme_reset_ctrl) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xba559bfb, __VMLINUX_SYMBOL_STR(nvme_stop_ctrl) },
	{ 0x9343e812, __VMLINUX_SYMBOL_STR(blk_mq_tagset_busy_iter) },
	{ 0xc476f46, __VMLINUX_SYMBOL_STR(blk_mq_start_request) },
	{ 0xc7973762, __VMLINUX_SYMBOL_STR(nvmf_register_transport) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x6de8d0f3, __VMLINUX_SYMBOL_STR(nvme_set_queue_count) },
	{ 0x48259f91, __VMLINUX_SYMBOL_STR(device_destroy) },
	{ 0x79a21fb, __VMLINUX_SYMBOL_STR(nvme_stop_queues) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x5d3b766, __VMLINUX_SYMBOL_STR(nvme_complete_async_event) },
	{ 0x3440cc00, __VMLINUX_SYMBOL_STR(nvmf_should_reconnect) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xdf209b2e, __VMLINUX_SYMBOL_STR(blk_mq_complete_request) },
	{ 0x89f61236, __VMLINUX_SYMBOL_STR(nvmf_reg_write32) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x6a708e2c, __VMLINUX_SYMBOL_STR(blk_mq_update_nr_hw_queues) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x91ac8b2f, __VMLINUX_SYMBOL_STR(blk_mq_init_queue) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x7248face, __VMLINUX_SYMBOL_STR(nvme_enable_ctrl) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x813cf212, __VMLINUX_SYMBOL_STR(nvme_io_timeout) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6a925259, __VMLINUX_SYMBOL_STR(nvmf_connect_admin_queue) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5977d514, __VMLINUX_SYMBOL_STR(blk_mq_free_tag_set) },
	{ 0xc554721a, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x495e47c2, __VMLINUX_SYMBOL_STR(nvme_init_identify) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0xc07c02fe, __VMLINUX_SYMBOL_STR(nvmf_reg_read64) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x2fd4b076, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x856eabb1, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0xcf91794a, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x43e3cbdf, __VMLINUX_SYMBOL_STR(nvme_init_ctrl) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xbddfff8f, __VMLINUX_SYMBOL_STR(nvme_change_ctrl_state) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x9392dcd3, __VMLINUX_SYMBOL_STR(nvmf_unregister_transport) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x59ce4509, __VMLINUX_SYMBOL_STR(nvmf_get_address) },
	{ 0xe0c3a1f3, __VMLINUX_SYMBOL_STR(blk_rq_map_sg) },
	{ 0xac338874, __VMLINUX_SYMBOL_STR(blk_mq_alloc_tag_set) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x2d3a2b9b, __VMLINUX_SYMBOL_STR(nvme_delete_ctrl) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3595aa94, __VMLINUX_SYMBOL_STR(nvmf_reg_read32) },
	{ 0x64b62862, __VMLINUX_SYMBOL_STR(nvme_wq) },
	{ 0x5e3f7a3, __VMLINUX_SYMBOL_STR(__nvmf_check_ready) },
	{ 0x9d6e9700, __VMLINUX_SYMBOL_STR(sg_free_table_chained) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb0db2c9, __VMLINUX_SYMBOL_STR(blk_mq_request_started) },
	{ 0x47d692e0, __VMLINUX_SYMBOL_STR(blk_mq_quiesce_queue) },
	{ 0xd6dc0d88, __VMLINUX_SYMBOL_STR(match_u64) },
	{ 0xd7ffd446, __VMLINUX_SYMBOL_STR(nvmf_connect_io_queue) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xe66cbd01, __VMLINUX_SYMBOL_STR(blk_mq_unquiesce_queue) },
	{ 0xf3a1c758, __VMLINUX_SYMBOL_STR(nvme_start_ctrl) },
	{ 0x9bcc3f3b, __VMLINUX_SYMBOL_STR(nvme_setup_cmd) },
	{ 0xb716c37e, __VMLINUX_SYMBOL_STR(nvme_stop_keep_alive) },
	{ 0xd45434ee, __VMLINUX_SYMBOL_STR(admin_timeout) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xe06d9afa, __VMLINUX_SYMBOL_STR(nvme_start_queues) },
	{ 0xfb37f925, __VMLINUX_SYMBOL_STR(nvmf_free_options) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd87a491, __VMLINUX_SYMBOL_STR(nvmf_fail_nonready_command) },
	{ 0x5e15d54c, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x499b83d8, __VMLINUX_SYMBOL_STR(nvme_complete_rq) },
	{ 0x82477240, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xb794641, __VMLINUX_SYMBOL_STR(nvme_uninit_ctrl) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nvme-core,nvme-fabrics";


MODULE_INFO(srcversion, "A193273E72B863244C6C24A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

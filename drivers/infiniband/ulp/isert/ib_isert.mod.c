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
	{ 0xe29c40, __VMLINUX_SYMBOL_STR(iscsit_unregister_transport) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xd826e37b, __VMLINUX_SYMBOL_STR(iscsit_register_transport) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x95d85784, __VMLINUX_SYMBOL_STR(rdma_reject_msg) },
	{ 0x97c8a4fe, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0xe0c06554, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x686e7389, __VMLINUX_SYMBOL_STR(__rdma_create_id) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x7033840a, __VMLINUX_SYMBOL_STR(__rdma_accept) },
	{ 0x25f72399, __VMLINUX_SYMBOL_STR(__ib_alloc_pd) },
	{ 0x89718768, __VMLINUX_SYMBOL_STR(__ib_alloc_cq) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2083fd7f, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0xe8353bc7, __VMLINUX_SYMBOL_STR(iscsit_build_reject) },
	{ 0x8a93c543, __VMLINUX_SYMBOL_STR(iscsit_build_task_mgt_rsp) },
	{ 0xa43e9e78, __VMLINUX_SYMBOL_STR(iscsit_build_logout_rsp) },
	{ 0xb41ad27f, __VMLINUX_SYMBOL_STR(iscsit_build_text_rsp) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x40027915, __VMLINUX_SYMBOL_STR(iscsit_build_nopin_rsp) },
	{ 0x8adda8db, __VMLINUX_SYMBOL_STR(iscsit_build_rsp_pdu) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x961bf613, __VMLINUX_SYMBOL_STR(transport_generic_request_failure) },
	{ 0x45790617, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x1e47a6e6, __VMLINUX_SYMBOL_STR(iscsit_logout_post_handler) },
	{ 0xad8c7acc, __VMLINUX_SYMBOL_STR(iscsit_tmr_post_handler) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x2465fc09, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x139bf3ad, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x57ee5692, __VMLINUX_SYMBOL_STR(iscsit_set_unsoliticed_dataout) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x615830fa, __VMLINUX_SYMBOL_STR(iscsit_process_nop_out) },
	{ 0xb2f8fd42, __VMLINUX_SYMBOL_STR(iscsit_setup_nop_out) },
	{ 0xc94ddc26, __VMLINUX_SYMBOL_STR(iscsit_sequence_cmd) },
	{ 0xebed388, __VMLINUX_SYMBOL_STR(iscsit_process_scsi_cmd) },
	{ 0xa7f49067, __VMLINUX_SYMBOL_STR(iscsit_setup_scsi_cmd) },
	{ 0xdbe361db, __VMLINUX_SYMBOL_STR(iscsit_handle_task_mgt_cmd) },
	{ 0x9488131e, __VMLINUX_SYMBOL_STR(iscsit_process_text_cmd) },
	{ 0x4b9e31d2, __VMLINUX_SYMBOL_STR(iscsit_setup_text_cmd) },
	{ 0xbb395497, __VMLINUX_SYMBOL_STR(iscsit_find_cmd_from_itt) },
	{ 0x20f523f2, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_payload) },
	{ 0xd08f6239, __VMLINUX_SYMBOL_STR(sg_copy_from_buffer) },
	{ 0xf39990b8, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_hdr) },
	{ 0x416c7c2f, __VMLINUX_SYMBOL_STR(iscsit_handle_logout_cmd) },
	{ 0xb6438cd0, __VMLINUX_SYMBOL_STR(iscsit_cause_connection_reinstatement) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x7b73295f, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0xaec84cd9, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0xfb617664, __VMLINUX_SYMBOL_STR(ib_drain_qp) },
	{ 0xca154dc5, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0xd969fced, __VMLINUX_SYMBOL_STR(iscsit_release_cmd) },
	{ 0xc3a4bd8c, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x82f5b0c3, __VMLINUX_SYMBOL_STR(iscsit_stop_dataout_timer) },
	{ 0xc7e334df, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_destroy_signature) },
	{ 0xbcfd1a82, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_destroy) },
	{ 0x8f343ae, __VMLINUX_SYMBOL_STR(iscsit_allocate_cmd) },
	{ 0xc0ba760a, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0x79f67408, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0xf6ed3334, __VMLINUX_SYMBOL_STR(ib_event_msg) },
	{ 0xdb73b831, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xbbff752e, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x54a94085, __VMLINUX_SYMBOL_STR(ib_free_cq) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x9f6b4c62, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5632bca1, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_signature_init) },
	{ 0xd4f3aa70, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_post) },
	{ 0xd643606d, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_init) },
	{ 0x83889e8a, __VMLINUX_SYMBOL_STR(ib_check_mr_status) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iscsi_target_mod,rdma_cm,ib_core,target_core_mod";


MODULE_INFO(srcversion, "6B8DB58A370A6105EC700F5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

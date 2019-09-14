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
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xa25aba33, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x6ee19233, __VMLINUX_SYMBOL_STR(ib_fmr_pool_map_phys) },
	{ 0xbbff752e, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x9e185390, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0x8d39c65, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x6ef8a88, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x686e7389, __VMLINUX_SYMBOL_STR(__rdma_create_id) },
	{ 0xd91b533f, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xe495a8e4, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xa1e21efe, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x2465fc09, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x54a94085, __VMLINUX_SYMBOL_STR(ib_free_cq) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x451dcbe5, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0xc32b59ff, __VMLINUX_SYMBOL_STR(ib_destroy_fmr_pool) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xecb9a973, __VMLINUX_SYMBOL_STR(blk_queue_virt_boundary) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x80c7e05c, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0xdecfd1a1, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3156ae28, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x61121b14, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x93438457, __VMLINUX_SYMBOL_STR(ib_alloc_mr) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf5fc28ff, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6baccc9b, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x83889e8a, __VMLINUX_SYMBOL_STR(ib_check_mr_status) },
	{ 0xf355658a, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0x3bd3996b, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x23255972, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xf8085462, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x41fa375, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0xe7490e55, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0x161f2a7e, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x89718768, __VMLINUX_SYMBOL_STR(__ib_alloc_cq) },
	{ 0x7458c4c0, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x3ce46354, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xf1c87338, __VMLINUX_SYMBOL_STR(ib_map_mr_sg) },
	{ 0xdb73b831, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x1e1fb219, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x7497361, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0xf2ad6b9e, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x756c2aa5, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xa3d2392c, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0xde444133, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x263122f8, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x13322c7a, __VMLINUX_SYMBOL_STR(ib_drain_sq) },
	{ 0xdfb2bdc0, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc0ba760a, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2d03520c, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd7d9c13e, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x12d9319, __VMLINUX_SYMBOL_STR(ib_query_qp) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd3504dc5, __VMLINUX_SYMBOL_STR(ib_dereg_mr) },
	{ 0xf6ed3334, __VMLINUX_SYMBOL_STR(ib_event_msg) },
	{ 0x2a796c17, __VMLINUX_SYMBOL_STR(iscsi_suspend_queue) },
	{ 0x5ed720ef, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0xe0631f97, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5faf27fd, __VMLINUX_SYMBOL_STR(ib_sg_to_pages) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7c06f80, __VMLINUX_SYMBOL_STR(ib_create_fmr_pool) },
	{ 0x9afc80f8, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0xbd0351dd, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xd762a901, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x25f72399, __VMLINUX_SYMBOL_STR(__ib_alloc_pd) },
	{ 0xda14a643, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xfedb8a6b, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x9979b859, __VMLINUX_SYMBOL_STR(ib_fmr_pool_unmap) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0x95d85784, __VMLINUX_SYMBOL_STR(rdma_reject_msg) },
	{ 0x1b71edbe, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xef78c1a6, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,ib_core,rdma_cm,scsi_transport_iscsi";


MODULE_INFO(srcversion, "628517F3A202A0010675B23");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

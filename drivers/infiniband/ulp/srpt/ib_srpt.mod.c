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
	{ 0x9cc0cc0c, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x300a443f, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x400919de, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0xd4b25e34, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0xf1a3749b, __VMLINUX_SYMBOL_STR(ib_send_cm_rej) },
	{ 0x2c45b349, __VMLINUX_SYMBOL_STR(ib_send_cm_rep) },
	{ 0x2083fd7f, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x7033840a, __VMLINUX_SYMBOL_STR(__rdma_accept) },
	{ 0xd3be98a, __VMLINUX_SYMBOL_STR(target_setup_session) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8537993f, __VMLINUX_SYMBOL_STR(ib_find_cached_pkey) },
	{ 0x3a109be0, __VMLINUX_SYMBOL_STR(ib_create_qp) },
	{ 0x89718768, __VMLINUX_SYMBOL_STR(__ib_alloc_cq) },
	{ 0xdb73b831, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x5d62031f, __VMLINUX_SYMBOL_STR(ib_unregister_mad_agent) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xf7612736, __VMLINUX_SYMBOL_STR(ib_send_cm_drep) },
	{ 0x285afd68, __VMLINUX_SYMBOL_STR(ib_send_cm_dreq) },
	{ 0xc0ba760a, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x75f723c0, __VMLINUX_SYMBOL_STR(ib_free_recv_mad) },
	{ 0x828247fe, __VMLINUX_SYMBOL_STR(ib_post_send_mad) },
	{ 0x84d6b38c, __VMLINUX_SYMBOL_STR(ib_create_send_mad) },
	{ 0x18b869ae, __VMLINUX_SYMBOL_STR(ib_create_ah_from_wc) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x85244028, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0x3b619881, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x1b9e0ff1, __VMLINUX_SYMBOL_STR(scsilun_to_int) },
	{ 0xbbff752e, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x7497361, __VMLINUX_SYMBOL_STR(ib_unregister_event_handler) },
	{ 0x17401634, __VMLINUX_SYMBOL_STR(ib_create_cm_id) },
	{ 0x3e1fe0f4, __VMLINUX_SYMBOL_STR(ib_set_client_data) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x756c2aa5, __VMLINUX_SYMBOL_STR(ib_register_event_handler) },
	{ 0xd4704c4, __VMLINUX_SYMBOL_STR(ib_cm_listen) },
	{ 0xd751d97b, __VMLINUX_SYMBOL_STR(rdma_port_get_link_layer) },
	{ 0x25f72399, __VMLINUX_SYMBOL_STR(__ib_alloc_pd) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8e2934fc, __VMLINUX_SYMBOL_STR(ib_create_srq) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x54a94085, __VMLINUX_SYMBOL_STR(ib_free_cq) },
	{ 0x139bf3ad, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x7b89cc2e, __VMLINUX_SYMBOL_STR(ib_destroy_cm_id) },
	{ 0x3a3dd452, __VMLINUX_SYMBOL_STR(target_remove_session) },
	{ 0x7b73295f, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0xaec84cd9, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0x913d2702, __VMLINUX_SYMBOL_STR(ib_destroy_srq) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d55881, __VMLINUX_SYMBOL_STR(target_free_sgl) },
	{ 0xbcfd1a82, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_destroy) },
	{ 0xd643606d, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_init) },
	{ 0xae042b07, __VMLINUX_SYMBOL_STR(target_alloc_sgl) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x961bf613, __VMLINUX_SYMBOL_STR(transport_generic_request_failure) },
	{ 0xc3a4bd8c, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x45790617, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0xba921863, __VMLINUX_SYMBOL_STR(inet_pton_with_scope) },
	{ 0x2f021678, __VMLINUX_SYMBOL_STR(hex2bin) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x96b29254, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe0caf319, __VMLINUX_SYMBOL_STR(ib_cm_init_qp_attr) },
	{ 0x8a25fc35, __VMLINUX_SYMBOL_STR(ib_cm_notify) },
	{ 0x79f67408, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0xb107c467, __VMLINUX_SYMBOL_STR(ib_modify_qp) },
	{ 0xca154dc5, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0xff6cf668, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_wrs) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x3afc91a3, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0xd99cea58, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x2465fc09, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x97c8a4fe, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0xe0c06554, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0x686e7389, __VMLINUX_SYMBOL_STR(__rdma_create_id) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x16e10dd9, __VMLINUX_SYMBOL_STR(ib_free_send_mad) },
	{ 0xa818f751, __VMLINUX_SYMBOL_STR(rdma_destroy_ah) },
	{ 0x1aa495f6, __VMLINUX_SYMBOL_STR(ib_register_mad_agent) },
	{ 0x86c08cc2, __VMLINUX_SYMBOL_STR(rdma_query_gid) },
	{ 0x6d3d65f4, __VMLINUX_SYMBOL_STR(ib_query_port) },
	{ 0x29ce20d8, __VMLINUX_SYMBOL_STR(ib_modify_port) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3e799b13, __VMLINUX_SYMBOL_STR(ib_get_client_data) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,target_core_mod,ib_cm,rdma_cm";


MODULE_INFO(srcversion, "2B5F0C516B3D4F3393A0863");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

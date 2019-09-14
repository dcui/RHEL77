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
	{ 0xd643606d, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_init) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xbbff752e, __VMLINUX_SYMBOL_STR(ib_dealloc_pd) },
	{ 0x5b6babf5, __VMLINUX_SYMBOL_STR(nvmet_req_uninit) },
	{ 0x7b60c9bb, __VMLINUX_SYMBOL_STR(nvmet_ctrl_fatal_error) },
	{ 0xfb617664, __VMLINUX_SYMBOL_STR(ib_drain_qp) },
	{ 0x1b6314fd, __VMLINUX_SYMBOL_STR(in_aton) },
	{ 0x139bf3ad, __VMLINUX_SYMBOL_STR(ib_destroy_qp) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0x686e7389, __VMLINUX_SYMBOL_STR(__rdma_create_id) },
	{ 0x78191a7, __VMLINUX_SYMBOL_STR(nvmet_sq_init) },
	{ 0x2465fc09, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x54a94085, __VMLINUX_SYMBOL_STR(ib_free_cq) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xe5840ec6, __VMLINUX_SYMBOL_STR(ib_wc_status_msg) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x8e2934fc, __VMLINUX_SYMBOL_STR(ib_create_srq) },
	{ 0x7f7b5c18, __VMLINUX_SYMBOL_STR(nvmet_req_execute) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x7033840a, __VMLINUX_SYMBOL_STR(__rdma_accept) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf355658a, __VMLINUX_SYMBOL_STR(rdma_destroy_qp) },
	{ 0x97c8a4fe, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x913d2702, __VMLINUX_SYMBOL_STR(ib_destroy_srq) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x79f67408, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0x89718768, __VMLINUX_SYMBOL_STR(__ib_alloc_cq) },
	{ 0x39626a1a, __VMLINUX_SYMBOL_STR(nvmet_register_transport) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xff6cf668, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_wrs) },
	{ 0xdb73b831, __VMLINUX_SYMBOL_STR(rdma_create_qp) },
	{ 0x181fdba5, __VMLINUX_SYMBOL_STR(nvmet_req_init) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x400919de, __VMLINUX_SYMBOL_STR(ib_register_client) },
	{ 0xe0c06554, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xc6e24173, __VMLINUX_SYMBOL_STR(nvmet_unregister_transport) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0xb59434cf, __VMLINUX_SYMBOL_STR(nvmet_sq_destroy) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc0ba760a, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2083fd7f, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0xf6ed3334, __VMLINUX_SYMBOL_STR(ib_event_msg) },
	{ 0xd4f3aa70, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_post) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xb765dbd4, __VMLINUX_SYMBOL_STR(nvmet_req_complete) },
	{ 0x25f72399, __VMLINUX_SYMBOL_STR(__ib_alloc_pd) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x907df803, __VMLINUX_SYMBOL_STR(rdma_event_msg) },
	{ 0xbcfd1a82, __VMLINUX_SYMBOL_STR(rdma_rw_ctx_destroy) },
	{ 0x82477240, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0x9cc0cc0c, __VMLINUX_SYMBOL_STR(ib_unregister_client) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ib_core,nvmet,rdma_cm";


MODULE_INFO(srcversion, "6627D44E4F08B26BBB56274");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

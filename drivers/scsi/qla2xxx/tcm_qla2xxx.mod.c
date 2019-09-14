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
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x300a443f, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd4b25e34, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0x194fd0c2, __VMLINUX_SYMBOL_STR(mark_tech_preview) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x8369f2b5, __VMLINUX_SYMBOL_STR(qlt_lport_register) },
	{ 0x847af629, __VMLINUX_SYMBOL_STR(qlt_rdy_to_xfer) },
	{ 0x3afc91a3, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x3a3dd452, __VMLINUX_SYMBOL_STR(target_remove_session) },
	{ 0x7b73295f, __VMLINUX_SYMBOL_STR(target_wait_for_sess_cmds) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x985ebf1d, __VMLINUX_SYMBOL_STR(transport_free_session) },
	{ 0x6e440f8c, __VMLINUX_SYMBOL_STR(__transport_register_session) },
	{ 0x6137f0be, __VMLINUX_SYMBOL_STR(core_tpg_check_initiator_node_acl) },
	{ 0x345dbbdd, __VMLINUX_SYMBOL_STR(transport_init_session_tags) },
	{ 0x8948a224, __VMLINUX_SYMBOL_STR(qlt_free_mcmd) },
	{ 0xaec84cd9, __VMLINUX_SYMBOL_STR(target_sess_cmd_list_set_waiting) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x606b4c61, __VMLINUX_SYMBOL_STR(btree_init) },
	{ 0x718d9136, __VMLINUX_SYMBOL_STR(qlt_xmit_response) },
	{ 0xca154dc5, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0xafe28f1, __VMLINUX_SYMBOL_STR(target_submit_cmd) },
	{ 0x45790617, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x961bf613, __VMLINUX_SYMBOL_STR(transport_generic_request_failure) },
	{ 0x85244028, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0x47fbf6da, __VMLINUX_SYMBOL_STR(qlt_free_cmd) },
	{ 0xc3a4bd8c, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0x323b7684, __VMLINUX_SYMBOL_STR(btree_insert) },
	{ 0x2bd72b76, __VMLINUX_SYMBOL_STR(btree_update) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xbe8cb31, __VMLINUX_SYMBOL_STR(btree_lookup) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb99ac21e, __VMLINUX_SYMBOL_STR(qlt_stop_phase2) },
	{ 0x806e502f, __VMLINUX_SYMBOL_STR(btree_destroy) },
	{ 0x3eca9a1, __VMLINUX_SYMBOL_STR(btree_get_prev) },
	{ 0xdd6618ba, __VMLINUX_SYMBOL_STR(btree_remove) },
	{ 0xbbb38239, __VMLINUX_SYMBOL_STR(btree_last) },
	{ 0xf331236f, __VMLINUX_SYMBOL_STR(btree_geo32) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x5b040e4b, __VMLINUX_SYMBOL_STR(qlt_lport_deregister) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x57ea8f99, __VMLINUX_SYMBOL_STR(target_depend_item) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x3b50fd9d, __VMLINUX_SYMBOL_STR(target_undepend_item) },
	{ 0x989a7093, __VMLINUX_SYMBOL_STR(qlt_unreg_sess) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x8d9ceb1b, __VMLINUX_SYMBOL_STR(qlt_xmit_tm_rsp) },
	{ 0xcc9dc1f1, __VMLINUX_SYMBOL_STR(qlt_abort_cmd) },
	{ 0x11f7ed4c, __VMLINUX_SYMBOL_STR(hex_to_bin) },
	{ 0xb5359d10, __VMLINUX_SYMBOL_STR(scsi_host_get) },
	{ 0x33999f77, __VMLINUX_SYMBOL_STR(fc_vport_create) },
	{ 0x8e0f40d2, __VMLINUX_SYMBOL_STR(fc_vport_terminate) },
	{ 0x6f8d91ba, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd99cea58, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2d400327, __VMLINUX_SYMBOL_STR(qlt_enable_vha) },
	{ 0x3be1d45f, __VMLINUX_SYMBOL_STR(qlt_stop_phase1) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod,qla2xxx,scsi_transport_fc";


MODULE_INFO(srcversion, "211157DF9E5E72F56A9D395");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

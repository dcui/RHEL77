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
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x893429ed, __VMLINUX_SYMBOL_STR(cxgbi_ppm_ppods_reserve) },
	{ 0xc9cf48f7, __VMLINUX_SYMBOL_STR(iscsit_immediate_queue) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xebed388, __VMLINUX_SYMBOL_STR(iscsit_process_scsi_cmd) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3962b325, __VMLINUX_SYMBOL_STR(cxgb4_clip_release) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xa91296bd, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0x7116448d, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x707a6fcb, __VMLINUX_SYMBOL_STR(cxgb4_l2t_release) },
	{ 0xe29c40, __VMLINUX_SYMBOL_STR(iscsit_unregister_transport) },
	{ 0x4888c5d9, __VMLINUX_SYMBOL_STR(iscsit_aborted_task) },
	{ 0x3fb6a89a, __VMLINUX_SYMBOL_STR(iscsi_target_check_login_request) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xca154dc5, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x7c516bb6, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0x6d738a46, __VMLINUX_SYMBOL_STR(cxgb4_create_server6) },
	{ 0xe618d1, __VMLINUX_SYMBOL_STR(iscsi_change_param_sprintf) },
	{ 0x1678cf3c, __VMLINUX_SYMBOL_STR(cxgbi_ppm_ppod_release) },
	{ 0x651df1bb, __VMLINUX_SYMBOL_STR(__iscsit_check_dataout_hdr) },
	{ 0xcd40071, __VMLINUX_SYMBOL_STR(iscsit_reject_cmd) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x416c7c2f, __VMLINUX_SYMBOL_STR(iscsit_handle_logout_cmd) },
	{ 0xacd22afe, __VMLINUX_SYMBOL_STR(iscsit_handle_snack) },
	{ 0x57ee5692, __VMLINUX_SYMBOL_STR(iscsit_set_unsoliticed_dataout) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xc7b1a9df, __VMLINUX_SYMBOL_STR(cxgb4_free_stid) },
	{ 0x7645af6f, __VMLINUX_SYMBOL_STR(sg_pcopy_from_buffer) },
	{ 0xf39990b8, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_hdr) },
	{ 0x676a11a9, __VMLINUX_SYMBOL_STR(cxgb4_unregister_uld) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x88e3b639, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x7a1ac9a7, __VMLINUX_SYMBOL_STR(cxgb4_port_chan) },
	{ 0x4b9e31d2, __VMLINUX_SYMBOL_STR(iscsit_setup_text_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa7f49067, __VMLINUX_SYMBOL_STR(iscsit_setup_scsi_cmd) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x618bef18, __VMLINUX_SYMBOL_STR(__neigh_event_send) },
	{ 0x65eb6cef, __VMLINUX_SYMBOL_STR(iscsi_find_param_from_key) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x61604fe2, __VMLINUX_SYMBOL_STR(cxgb4_remove_tid) },
	{ 0x1cb160d1, __VMLINUX_SYMBOL_STR(cxgb4_ofld_send) },
	{ 0x8f343ae, __VMLINUX_SYMBOL_STR(iscsit_allocate_cmd) },
	{ 0x7419e8e9, __VMLINUX_SYMBOL_STR(iscsit_response_queue) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xc499fe79, __VMLINUX_SYMBOL_STR(skb_abort_seq_read) },
	{ 0x5a5a94a6, __VMLINUX_SYMBOL_STR(kstrtou8) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x3c3c71a5, __VMLINUX_SYMBOL_STR(cxgbi_ppm_init) },
	{ 0x9488131e, __VMLINUX_SYMBOL_STR(iscsit_process_text_cmd) },
	{ 0xb2f8fd42, __VMLINUX_SYMBOL_STR(iscsit_setup_nop_out) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc94ddc26, __VMLINUX_SYMBOL_STR(iscsit_sequence_cmd) },
	{ 0x2e7a78f6, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0x7cd5b0c8, __VMLINUX_SYMBOL_STR(cxgb4_alloc_stid) },
	{ 0xd358d4ad, __VMLINUX_SYMBOL_STR(cxgb_get_4tuple) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0x5abc1cc9, __VMLINUX_SYMBOL_STR(iscsit_queue_rsp) },
	{ 0x55b0111e, __VMLINUX_SYMBOL_STR(cxgb4_l2t_send) },
	{ 0x807d5628, __VMLINUX_SYMBOL_STR(set_cpus_allowed_ptr) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x15b0c47a, __VMLINUX_SYMBOL_STR(skb_store_bits) },
	{ 0x6343a556, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0xca40893d, __VMLINUX_SYMBOL_STR(cxgb_find_route6) },
	{ 0xc05aecfe, __VMLINUX_SYMBOL_STR(iscsit_free_cmd) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x86971169, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0x5e10836, __VMLINUX_SYMBOL_STR(cxgb_find_route) },
	{ 0xe183e5e8, __VMLINUX_SYMBOL_STR(cxgb4_clip_get) },
	{ 0x20f523f2, __VMLINUX_SYMBOL_STR(iscsit_check_dataout_payload) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xbb395497, __VMLINUX_SYMBOL_STR(iscsit_find_cmd_from_itt) },
	{ 0xecd69a5c, __VMLINUX_SYMBOL_STR(iscsit_increment_maxcmdsn) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x214ff040, __VMLINUX_SYMBOL_STR(cxgb4_remove_server) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x623c5915, __VMLINUX_SYMBOL_STR(cxgbi_ppm_release) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7eae484f, __VMLINUX_SYMBOL_STR(cxgb4_register_uld) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x615830fa, __VMLINUX_SYMBOL_STR(iscsit_process_nop_out) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x50ee5c07, __VMLINUX_SYMBOL_STR(cxgb4_best_aligned_mtu) },
	{ 0xd826e37b, __VMLINUX_SYMBOL_STR(iscsit_register_transport) },
	{ 0xe9e708cc, __VMLINUX_SYMBOL_STR(iscsit_build_datain_pdu) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0xb6b56fbe, __VMLINUX_SYMBOL_STR(iscsit_find_cmd_from_itt_or_dump) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x535fc2f7, __VMLINUX_SYMBOL_STR(__ip_dev_find) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x55160d94, __VMLINUX_SYMBOL_STR(cxgb4_port_idx) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9bbdb59d, __VMLINUX_SYMBOL_STR(iscsit_build_r2ts_for_cmd) },
	{ 0xe41f00c4, __VMLINUX_SYMBOL_STR(iscsit_add_cmd_to_immediate_queue) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb9232608, __VMLINUX_SYMBOL_STR(cxgb4_pktgl_to_skb) },
	{ 0x26744ed7, __VMLINUX_SYMBOL_STR(__napi_alloc_skb) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xdbe361db, __VMLINUX_SYMBOL_STR(iscsit_handle_task_mgt_cmd) },
	{ 0x43fa7a55, __VMLINUX_SYMBOL_STR(iscsit_add_reject) },
	{ 0xbd6381f1, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xcc2af9e4, __VMLINUX_SYMBOL_STR(cxgb4_l2t_get) },
	{ 0x596c91e6, __VMLINUX_SYMBOL_STR(cxgb4_create_server) },
	{ 0xfbe0b64c, __VMLINUX_SYMBOL_STR(cxgbi_ppm_make_ppod_hdr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libcxgb,iscsi_target_mod,cxgb4,target_core_mod";


MODULE_INFO(srcversion, "71D43935A8A3BC799C008F2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

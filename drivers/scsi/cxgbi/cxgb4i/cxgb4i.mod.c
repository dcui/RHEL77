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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x487d9343, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x9e185390, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0xfedb8a6b, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xd91b533f, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xde444133, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xe0631f97, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x8d39c65, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xef346615, __VMLINUX_SYMBOL_STR(cxgbi_attr_is_visible) },
	{ 0xded0af45, __VMLINUX_SYMBOL_STR(cxgbi_ep_disconnect) },
	{ 0x8ebf69f3, __VMLINUX_SYMBOL_STR(cxgbi_ep_poll) },
	{ 0x19ca4047, __VMLINUX_SYMBOL_STR(cxgbi_ep_connect) },
	{ 0x1b71edbe, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x30d0583a, __VMLINUX_SYMBOL_STR(cxgbi_parse_pdu_itt) },
	{ 0x165eebe1, __VMLINUX_SYMBOL_STR(cxgbi_conn_init_pdu) },
	{ 0x70755608, __VMLINUX_SYMBOL_STR(cxgbi_conn_xmit_pdu) },
	{ 0x78f818a6, __VMLINUX_SYMBOL_STR(cxgbi_conn_alloc_pdu) },
	{ 0x9f8210dd, __VMLINUX_SYMBOL_STR(cxgbi_cleanup_task) },
	{ 0x3875ed79, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x4b85c06b, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x8244bf48, __VMLINUX_SYMBOL_STR(cxgbi_get_conn_stats) },
	{ 0x3bd3996b, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x1066295a, __VMLINUX_SYMBOL_STR(cxgbi_set_host_param) },
	{ 0xd989d756, __VMLINUX_SYMBOL_STR(cxgbi_get_host_param) },
	{ 0x23255972, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x7458c4c0, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xd681c5f, __VMLINUX_SYMBOL_STR(cxgbi_get_ep_param) },
	{ 0x98a631af, __VMLINUX_SYMBOL_STR(cxgbi_set_conn_param) },
	{ 0x89cd4795, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x6ef8a88, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x6baccc9b, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x52e19889, __VMLINUX_SYMBOL_STR(cxgbi_bind_conn) },
	{ 0xf0b60f60, __VMLINUX_SYMBOL_STR(cxgbi_create_conn) },
	{ 0x3417be9a, __VMLINUX_SYMBOL_STR(cxgbi_destroy_session) },
	{ 0x2c02d412, __VMLINUX_SYMBOL_STR(cxgbi_create_session) },
	{ 0x2d799dfb, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_cleanup) },
	{ 0x7fdb6004, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister_all) },
	{ 0x676a11a9, __VMLINUX_SYMBOL_STR(cxgb4_unregister_uld) },
	{ 0x7eae484f, __VMLINUX_SYMBOL_STR(cxgb4_register_uld) },
	{ 0x99e34ba0, __VMLINUX_SYMBOL_STR(cxgbi_iscsi_init) },
	{ 0x9b6f67c8, __VMLINUX_SYMBOL_STR(cxgbi_conn_tx_open) },
	{ 0x83b092b2, __VMLINUX_SYMBOL_STR(cxgbi_sock_established) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x688cb776, __VMLINUX_SYMBOL_STR(cxgbi_conn_pdu_ready) },
	{ 0x4b2041d, __VMLINUX_SYMBOL_STR(___pskb_trim_adjust_truesize) },
	{ 0xb9232608, __VMLINUX_SYMBOL_STR(cxgb4_pktgl_to_skb) },
	{ 0xe183e5e8, __VMLINUX_SYMBOL_STR(cxgb4_clip_get) },
	{ 0x618bef18, __VMLINUX_SYMBOL_STR(__neigh_event_send) },
	{ 0x88e3b639, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x55160d94, __VMLINUX_SYMBOL_STR(cxgb4_port_idx) },
	{ 0x7a1ac9a7, __VMLINUX_SYMBOL_STR(cxgb4_port_chan) },
	{ 0xd69a0294, __VMLINUX_SYMBOL_STR(cxgb4_best_mtu) },
	{ 0x2e642606, __VMLINUX_SYMBOL_STR(cxgbi_sock_act_open_req_arp_failure) },
	{ 0xcc2af9e4, __VMLINUX_SYMBOL_STR(cxgb4_l2t_get) },
	{ 0xaf50d3de, __VMLINUX_SYMBOL_STR(cxgb4_alloc_atid) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xab3a0fb2, __VMLINUX_SYMBOL_STR(cxgbi_sock_skb_entail) },
	{ 0xb8da8b6b, __VMLINUX_SYMBOL_STR(cxgbi_ddp_set_one_ppod) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x53bbefea, __VMLINUX_SYMBOL_STR(cxgb4_free_atid) },
	{ 0x3962b325, __VMLINUX_SYMBOL_STR(cxgb4_clip_release) },
	{ 0x707a6fcb, __VMLINUX_SYMBOL_STR(cxgb4_l2t_release) },
	{ 0xe0b4b35f, __VMLINUX_SYMBOL_STR(cxgbi_sock_purge_wr_queue) },
	{ 0x23210e98, __VMLINUX_SYMBOL_STR(cxgbi_sock_closed) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x61604fe2, __VMLINUX_SYMBOL_STR(cxgb4_remove_tid) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc64f81ba, __VMLINUX_SYMBOL_STR(cxgbi_sock_fail_act_open) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x49a0b1ab, __VMLINUX_SYMBOL_STR(cxgbi_sock_free_cpl_skbs) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x11be4550, __VMLINUX_SYMBOL_STR(cxgbi_hbas_add) },
	{ 0x8df830e5, __VMLINUX_SYMBOL_STR(cxgbi_device_unregister) },
	{ 0x24310d64, __VMLINUX_SYMBOL_STR(cxgbi_device_portmap_create) },
	{ 0x95b50d8, __VMLINUX_SYMBOL_STR(cxgbi_ddp_ppm_setup) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x95a3938b, __VMLINUX_SYMBOL_STR(cxgbi_device_register) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x55b0111e, __VMLINUX_SYMBOL_STR(cxgb4_l2t_send) },
	{ 0x2cd17138, __VMLINUX_SYMBOL_STR(cxgb4_select_ntuple) },
	{ 0x9b5bd027, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_peer_close) },
	{ 0x8dd4ac83, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_abort_rpl) },
	{ 0xae6b9ee9, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_close_conn_rpl) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xe787240b, __VMLINUX_SYMBOL_STR(cxgbi_sock_rcv_wr_ack) },
	{ 0xa91296bd, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1cb160d1, __VMLINUX_SYMBOL_STR(cxgb4_ofld_send) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libcxgbi,libiscsi_tcp,cxgb4";


MODULE_INFO(srcversion, "8F2E5727F478814DAF6A490");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

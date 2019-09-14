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
	{ 0xf3017e21, __VMLINUX_SYMBOL_STR(dccp_statistics) },
	{ 0x49045426, __VMLINUX_SYMBOL_STR(icmp_err_convert) },
	{ 0xabac8095, __VMLINUX_SYMBOL_STR(dccp_init_sock) },
	{ 0xb75ec168, __VMLINUX_SYMBOL_STR(__ip_route_output_key_hash) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x81acfa5f, __VMLINUX_SYMBOL_STR(dccp_set_state) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x6c07f9be, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x37abdd1e, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xd200cce8, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x7d5a91c1, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x243b5066, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0xccb337de, __VMLINUX_SYMBOL_STR(dccp_sendmsg) },
	{ 0x9952e8d2, __VMLINUX_SYMBOL_STR(ip_build_and_send_pkt) },
	{ 0x31f61560, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x59aa36d3, __VMLINUX_SYMBOL_STR(dccp_ctl_make_reset) },
	{ 0x35c54e19, __VMLINUX_SYMBOL_STR(dccp_destroy_sock) },
	{ 0xa24d5253, __VMLINUX_SYMBOL_STR(dccp_make_response) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x4c506e21, __VMLINUX_SYMBOL_STR(dccp_send_sync) },
	{ 0xbbcc54a5, __VMLINUX_SYMBOL_STR(dccp_rcv_established) },
	{ 0xd78e6f89, __VMLINUX_SYMBOL_STR(security_skb_classify_flow) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xd676d38a, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xea0155bd, __VMLINUX_SYMBOL_STR(dccp_create_openreq_child) },
	{ 0xf64d999f, __VMLINUX_SYMBOL_STR(dccp_check_req) },
	{ 0xfd94c430, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xe54bbe3e, __VMLINUX_SYMBOL_STR(dccp_recvmsg) },
	{ 0xedf204db, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xb1ddf4a8, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf04e7ba1, __VMLINUX_SYMBOL_STR(dccp_ioctl) },
	{ 0x3f52db10, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0x742759d5, __VMLINUX_SYMBOL_STR(dccp_setsockopt) },
	{ 0x1855a8b6, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x4bba392, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xf107b6b6, __VMLINUX_SYMBOL_STR(dccp_child_process) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4f98b64e, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf8133038, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x1a0bbcc5, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0x8ad7a152, __VMLINUX_SYMBOL_STR(compat_ip_getsockopt) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xa1bf9e1a, __VMLINUX_SYMBOL_STR(dccp_parse_options) },
	{ 0x233e63f9, __VMLINUX_SYMBOL_STR(compat_dccp_setsockopt) },
	{ 0xc303451a, __VMLINUX_SYMBOL_STR(dccp_getsockopt) },
	{ 0x4f5dd57b, __VMLINUX_SYMBOL_STR(inet_csk_update_pmtu) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6cacf648, __VMLINUX_SYMBOL_STR(inet_csk_route_req) },
	{ 0xcb2374f1, __VMLINUX_SYMBOL_STR(inet_csk_search_req) },
	{ 0x75ecd141, __VMLINUX_SYMBOL_STR(inet_csk_delete_keepalive_timer) },
	{ 0xd75fbb60, __VMLINUX_SYMBOL_STR(inet_csk_route_child_sock) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x768a1e6d, __VMLINUX_SYMBOL_STR(inet_hash_connect) },
	{ 0x13a1a61a, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xf6d9a71d, __VMLINUX_SYMBOL_STR(dccp_reqsk_init) },
	{ 0x76d3ab1a, __VMLINUX_SYMBOL_STR(dccp_close) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x5e3930ed, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x17110cd2, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0xe3691b9d, __VMLINUX_SYMBOL_STR(dccp_orphan_count) },
	{ 0xdd18cc69, __VMLINUX_SYMBOL_STR(dccp_sync_mss) },
	{ 0xa20ce1b8, __VMLINUX_SYMBOL_STR(net_msg_warn) },
	{ 0xdadd8e, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0x5118c382, __VMLINUX_SYMBOL_STR(secure_dccp_sequence_number) },
	{ 0x174a42, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x4ba8d2a0, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0x9c2bda90, __VMLINUX_SYMBOL_STR(dccp_death_row) },
	{ 0x6c698806, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0xac32a854, __VMLINUX_SYMBOL_STR(dccp_poll) },
	{ 0xf41f64b, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xc8a07495, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb2fe428, __VMLINUX_SYMBOL_STR(dccp_disconnect) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xcc1e33d2, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0xdbb7db39, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0x1903c5be, __VMLINUX_SYMBOL_STR(dccp_done) },
	{ 0x23a81d09, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc7204b40, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xdf288732, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0x48b7f5cd, __VMLINUX_SYMBOL_STR(inet_getname) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x73b33628, __VMLINUX_SYMBOL_STR(inet_csk_bind_conflict) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa5c7f7a8, __VMLINUX_SYMBOL_STR(__inet_hash_nolisten) },
	{ 0x4cdd391d, __VMLINUX_SYMBOL_STR(dccp_feat_list_purge) },
	{ 0x7a077722, __VMLINUX_SYMBOL_STR(compat_ip_setsockopt) },
	{ 0x64e676bf, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x1903da5c, __VMLINUX_SYMBOL_STR(inet_csk_reqsk_queue_hash_add) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xce375ff4, __VMLINUX_SYMBOL_STR(compat_dccp_getsockopt) },
	{ 0xb32ff9a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x4ad0de07, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x7cc77177, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xcb32ea23, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe1761617, __VMLINUX_SYMBOL_STR(security_inet_conn_request) },
	{ 0xe47815ab, __VMLINUX_SYMBOL_STR(inet_dccp_listen) },
	{ 0xee62b44f, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0xeb369ff6, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x5e040787, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x86be7924, __VMLINUX_SYMBOL_STR(dccp_packet_name) },
	{ 0x73141445, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0xfc79496f, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0xd3303bd5, __VMLINUX_SYMBOL_STR(dccp_reqsk_send_ack) },
	{ 0x3461ea86, __VMLINUX_SYMBOL_STR(dccp_rcv_state_process) },
	{ 0x8c1d11ea, __VMLINUX_SYMBOL_STR(dccp_connect) },
	{ 0x273e3c92, __VMLINUX_SYMBOL_STR(dccp_shutdown) },
	{ 0xb2c04a93, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x6d075b00, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0x3a042457, __VMLINUX_SYMBOL_STR(inet_csk_addr2sockaddr) },
	{ 0x24f433ae, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dccp";


MODULE_INFO(srcversion, "A981600EFFD6B19F55CE831");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

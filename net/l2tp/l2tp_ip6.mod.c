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
	{ 0x37abdd1e, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0xf41f64b, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x91625ebc, __VMLINUX_SYMBOL_STR(compat_ipv6_getsockopt) },
	{ 0xface279c, __VMLINUX_SYMBOL_STR(compat_ipv6_setsockopt) },
	{ 0x7e46fe9f, __VMLINUX_SYMBOL_STR(ipv6_getsockopt) },
	{ 0xa7dacdd9, __VMLINUX_SYMBOL_STR(ipv6_setsockopt) },
	{ 0xf61f22f0, __VMLINUX_SYMBOL_STR(l2tp_ioctl) },
	{ 0x4bba392, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4f98b64e, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x1855a8b6, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xfd94c430, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xf8133038, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0x3f52db10, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0x5e040787, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x4ad0de07, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x5e3930ed, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xdba7035d, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x331b7bf, __VMLINUX_SYMBOL_STR(inet6_ioctl) },
	{ 0xe1b880c, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x9ad7dce8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xff47d41a, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x737d7c0d, __VMLINUX_SYMBOL_STR(inet6_bind) },
	{ 0xc6b3bcad, __VMLINUX_SYMBOL_STR(inet6_release) },
	{ 0xa63b5132, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0xc52d2545, __VMLINUX_SYMBOL_STR(inet6_unregister_protosw) },
	{ 0xc7204b40, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x1aab4450, __VMLINUX_SYMBOL_STR(inet6_register_protosw) },
	{ 0x9f8e0c16, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0xc8a07495, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x64e676bf, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x7cc77177, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x82a6dd2e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x4db4a404, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x2ef3043c, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xd4a2c0c2, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0xf4f32209, __VMLINUX_SYMBOL_STR(inet6_destroy_sock) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x1a3241a9, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xd9535282, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5149eebd, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7c516bb6, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x103dad8, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x2e632392, __VMLINUX_SYMBOL_STR(ip6_datagram_connect) },
	{ 0x7926aaf4, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xd4a2a50f, __VMLINUX_SYMBOL_STR(ip6_push_pending_frames) },
	{ 0x1578cea4, __VMLINUX_SYMBOL_STR(ip6_flush_pending_frames) },
	{ 0x79dd64ad, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xaab18fa6, __VMLINUX_SYMBOL_STR(ip6_append_data) },
	{ 0x44e24209, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x46ad1c0b, __VMLINUX_SYMBOL_STR(fl6_sock_lookup) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xce61f43c, __VMLINUX_SYMBOL_STR(ip6_dst_lookup_flow) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x73510609, __VMLINUX_SYMBOL_STR(fl6_update_dst) },
	{ 0x463d24ea, __VMLINUX_SYMBOL_STR(ipv6_fixup_options) },
	{ 0x2a3714bb, __VMLINUX_SYMBOL_STR(fl6_merge_options) },
	{ 0x222d63f8, __VMLINUX_SYMBOL_STR(ip6_datagram_send_ctl) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x286adaf7, __VMLINUX_SYMBOL_STR(ip6_datagram_recv_ctl) },
	{ 0x561cb5e2, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x547c704d, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x2ddbe97d, __VMLINUX_SYMBOL_STR(ipv6_recv_error) },
	{ 0x490bd0fa, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xc843b143, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x1667a1ee, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_ip,l2tp_core";


MODULE_INFO(srcversion, "2101760903A24D59F35D6E4");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

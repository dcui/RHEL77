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
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x4db4a404, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x82a6dd2e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x6c07f9be, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0xcd4a71da, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_sk) },
	{ 0x37abdd1e, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x243b5066, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x31f61560, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2ef3043c, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x5149eebd, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x1667a1ee, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xfd94c430, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xedf204db, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xd9535282, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x3f52db10, __VMLINUX_SYMBOL_STR(compat_sock_common_setsockopt) },
	{ 0xff47d41a, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x1855a8b6, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x4bba392, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4f98b64e, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xf8133038, __VMLINUX_SYMBOL_STR(compat_sock_common_getsockopt) },
	{ 0xf5b7d5a9, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8ad7a152, __VMLINUX_SYMBOL_STR(compat_ip_getsockopt) },
	{ 0x561cb5e2, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa4de5246, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xdba7035d, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9ad7dce8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x5e3930ed, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x17110cd2, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0x547c704d, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x174a42, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x167c5967, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xf41f64b, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xc8a07495, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xcc1e33d2, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0xdbb7db39, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe1b880c, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc7204b40, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc843b143, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x64e676bf, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x7a077722, __VMLINUX_SYMBOL_STR(compat_ip_setsockopt) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xb32ff9a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x4ad0de07, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x7cc77177, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x7926aaf4, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xcb32ea23, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x1a3241a9, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0xeb369ff6, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x5e040787, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xe00af6b1, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xd4a2c0c2, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xb2c04a93, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x6d075b00, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0x490bd0fa, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "AA79BE7AFFAD927F28E47B5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

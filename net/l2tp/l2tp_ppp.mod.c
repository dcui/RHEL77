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
	{ 0x4f98b64e, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x94922865, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xdba7035d, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xa9ffe7ff, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xe1b880c, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x9ad7dce8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x7a43373d, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xbea629f0, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x47ee9cfe, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x3604c615, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc7204b40, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x39115200, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0xffb80b9c, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xc8a07495, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xb6bb47d3, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xfbc25e3d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x27996414, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xe00af6b1, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x27f1f57d, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xf6fc35ee, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x74a09ae0, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0x8750178f, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbc1ed881, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x94712da0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xe068338f, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x5e3930ed, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xcc577c36, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xbd403e9, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x8c34c149, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x2b2c7d40, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xa16aae11, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x5710f18, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x4f21c234, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0x4db4a404, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd4a2c0c2, __VMLINUX_SYMBOL_STR(l2tp_session_get) },
	{ 0x82a6dd2e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1ee1c9a6, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc843b143, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x1667a1ee, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8c0dbbfe, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0x4e9da94f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xca726ed1, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e61dd77, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,l2tp_core,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "F223423D889292FB6B00B46");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

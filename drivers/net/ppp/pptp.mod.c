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
	{ 0x336fbc40, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0xd5ae184, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xd06287a5, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x17b6a18f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x94922865, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xdba7035d, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xa9ffe7ff, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0xf40f68dd, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x9ad7dce8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x37c0628a, __VMLINUX_SYMBOL_STR(gre_del_protocol) },
	{ 0xc7204b40, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xffb80b9c, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xc8a07495, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xd1109edc, __VMLINUX_SYMBOL_STR(gre_add_protocol) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xcc577c36, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x5149eebd, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x64e676bf, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x148d91a1, __VMLINUX_SYMBOL_STR(ip_local_out_sk) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0x119dcd1d, __VMLINUX_SYMBOL_STR(__ip_select_ident) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x66e1ab03, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x3bd7d704, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe62d72, __VMLINUX_SYMBOL_STR(ppp_register_channel) },
	{ 0x9d633750, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x31f61560, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xb32ff9a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x2deda4a1, __VMLINUX_SYMBOL_STR(security_sk_classify_flow) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xf6fc35ee, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0xbc1ed881, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x4e9da94f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xca726ed1, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pppox,gre,ppp_generic";


MODULE_INFO(srcversion, "515FDDD2C1A8BADB153096C");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

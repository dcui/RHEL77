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
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0xa904ebe6, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x9a46c61e, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x8b4e1a6, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x5149eebd, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x1667a1ee, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x4bba392, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4f98b64e, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xdba7035d, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x9ad7dce8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xb4d5d033, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x94922865, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xc07d3a0c, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0xfcffe772, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0xde73402, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xd7cbddda, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe1b880c, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x3eebcc14, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x26a2b9f0, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6ec80c2, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x54ae3fca, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x33c71562, __VMLINUX_SYMBOL_STR(sock_tx_timestamp) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x490bd0fa, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "ED37850BABD7B96C8F70584");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x4bba392, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4f98b64e, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd06287a5, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x17b6a18f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x94922865, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xdba7035d, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xdadf4a98, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xe1b880c, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x497f5678, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x9ad7dce8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x6ec80c2, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x7a43373d, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xbea629f0, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xb72d4d2e, __VMLINUX_SYMBOL_STR(xfrm_register_km) },
	{ 0x3cdcf231, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xc8a07495, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xc7204b40, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xb5a4f8ee, __VMLINUX_SYMBOL_STR(xfrm_unregister_km) },
	{ 0x86694a7d, __VMLINUX_SYMBOL_STR(xfrm_state_add) },
	{ 0xd55c9e4a, __VMLINUX_SYMBOL_STR(xfrm_audit_state_add) },
	{ 0xacf75736, __VMLINUX_SYMBOL_STR(xfrm_state_update) },
	{ 0xbc8b0f41, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byid) },
	{ 0x92dbc6c1, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byid) },
	{ 0xed0965b4, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xce7a55c1, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byid) },
	{ 0x27866435, __VMLINUX_SYMBOL_STR(security_xfrm_state_alloc) },
	{ 0xce1bc9fc, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0x5b24ba23, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_add) },
	{ 0x3a8c3601, __VMLINUX_SYMBOL_STR(xfrm_policy_insert) },
	{ 0xa9c63b69, __VMLINUX_SYMBOL_STR(security_xfrm_policy_free) },
	{ 0xdad47208, __VMLINUX_SYMBOL_STR(xfrm_policy_bysel_ctx) },
	{ 0xeb440dbe, __VMLINUX_SYMBOL_STR(xfrm_alloc_spi) },
	{ 0xf10526ac, __VMLINUX_SYMBOL_STR(verify_spi_info) },
	{ 0x7d37cbd6, __VMLINUX_SYMBOL_STR(xfrm_find_acq) },
	{ 0x4e9da94f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xca726ed1, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xba18698e, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x46d8cfa2, __VMLINUX_SYMBOL_STR(xfrm_find_acq_byseq) },
	{ 0x8c34c149, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xa16aae11, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x1e9edfb7, __VMLINUX_SYMBOL_STR(seq_hlist_start_head_rcu) },
	{ 0x67b78eb3, __VMLINUX_SYMBOL_STR(seq_hlist_next_rcu) },
	{ 0x52fc6f72, __VMLINUX_SYMBOL_STR(xfrm_state_delete) },
	{ 0x5a3d7ad0, __VMLINUX_SYMBOL_STR(xfrm_audit_state_delete) },
	{ 0xc599a772, __VMLINUX_SYMBOL_STR(security_xfrm_state_delete) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x21d3ea7c, __VMLINUX_SYMBOL_STR(xfrm_audit_policy_delete) },
	{ 0x67763bc2, __VMLINUX_SYMBOL_STR(xfrm_policy_byid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xf6fc35ee, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x778770, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byname) },
	{ 0x7c30b8c7, __VMLINUX_SYMBOL_STR(xfrm_calg_get_byname) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdd339aa0, __VMLINUX_SYMBOL_STR(security_xfrm_policy_alloc) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xdc20bd1b, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x5cb359e9, __VMLINUX_SYMBOL_STR(xfrm_policy_alloc) },
	{ 0x7a8ca627, __VMLINUX_SYMBOL_STR(xfrm_count_pfkey_enc_supported) },
	{ 0xa575945, __VMLINUX_SYMBOL_STR(xfrm_count_pfkey_auth_supported) },
	{ 0x28e23139, __VMLINUX_SYMBOL_STR(xfrm_probe_algs) },
	{ 0x28dc96b, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x56bb269, __VMLINUX_SYMBOL_STR(xfrm_ealg_get_byidx) },
	{ 0x74e1a843, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byidx) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf74453d0, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x53d3ffab, __VMLINUX_SYMBOL_STR(km_state_notify) },
	{ 0xb93c90e5, __VMLINUX_SYMBOL_STR(xfrm_state_flush) },
	{ 0xfaa2d63e, __VMLINUX_SYMBOL_STR(km_policy_notify) },
	{ 0xbbcc0f2b, __VMLINUX_SYMBOL_STR(xfrm_garbage_collect) },
	{ 0xba7d91d3, __VMLINUX_SYMBOL_STR(xfrm_policy_flush) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x51dce73b, __VMLINUX_SYMBOL_STR(xfrm_state_walk_init) },
	{ 0xde73402, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x490bd0fa, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0xc843b143, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x1667a1ee, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xd34915f9, __VMLINUX_SYMBOL_STR(xfrm_migrate) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8e0d2ce2, __VMLINUX_SYMBOL_STR(from_kuid_munged) },
	{ 0xab26674, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0x3ff20dae, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x2b2c7d40, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x7b244558, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xaea2920a, __VMLINUX_SYMBOL_STR(xfrm_state_walk) },
	{ 0xd520591f, __VMLINUX_SYMBOL_STR(xfrm_state_walk_done) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x6bd6350f, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_done) },
	{ 0xe5ed5467, __VMLINUX_SYMBOL_STR(xfrm_policy_walk_init) },
	{ 0x78a45968, __VMLINUX_SYMBOL_STR(xfrm_policy_walk) },
	{ 0x8b4e1a6, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x5149226a, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x2e041e80, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7F5C2A6B5622A5123005058");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

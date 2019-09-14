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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4b630dac, __VMLINUX_SYMBOL_STR(vmci_get_context_id) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x722d488a, __VMLINUX_SYMBOL_STR(vmci_event_unsubscribe) },
	{ 0xd1c7b353, __VMLINUX_SYMBOL_STR(__vsock_create) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x53c20507, __VMLINUX_SYMBOL_STR(vmci_qpair_enquev) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x313b213b, __VMLINUX_SYMBOL_STR(vsock_add_pending) },
	{ 0xcff91c6e, __VMLINUX_SYMBOL_STR(vmci_qpair_dequev) },
	{ 0x1667a1ee, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x612df9ae, __VMLINUX_SYMBOL_STR(vmci_qpair_detach) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xd212a40, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0xb3e39df0, __VMLINUX_SYMBOL_STR(vsock_stream_has_space) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0xb1a5bf92, __VMLINUX_SYMBOL_STR(vsock_find_connected_socket) },
	{ 0x3ef56cd5, __VMLINUX_SYMBOL_STR(vmci_qpair_alloc) },
	{ 0x453c7c74, __VMLINUX_SYMBOL_STR(vsock_stream_has_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x13aa5a5d, __VMLINUX_SYMBOL_STR(vmci_datagram_create_handle) },
	{ 0x677c36d0, __VMLINUX_SYMBOL_STR(vmci_is_context_owner) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x31f6ad8f, __VMLINUX_SYMBOL_STR(vmci_qpair_peekv) },
	{ 0x7d540b50, __VMLINUX_SYMBOL_STR(vmci_qpair_consume_free_space) },
	{ 0x2663cb64, __VMLINUX_SYMBOL_STR(vsock_addr_equals_addr) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xdac94780, __VMLINUX_SYMBOL_STR(vmci_qpair_get_consume_indexes) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbd0f699d, __VMLINUX_SYMBOL_STR(vsock_addr_bound) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x9fd50019, __VMLINUX_SYMBOL_STR(vsock_remove_pending) },
	{ 0x15c0c57c, __VMLINUX_SYMBOL_STR(vsock_addr_init) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x970b77bc, __VMLINUX_SYMBOL_STR(vsock_pending_work) },
	{ 0x1872c7af, __VMLINUX_SYMBOL_STR(vmci_qpair_produce_free_space) },
	{ 0xd66f3d37, __VMLINUX_SYMBOL_STR(vsock_find_bound_socket) },
	{ 0xcb934a7c, __VMLINUX_SYMBOL_STR(vsock_remove_connected) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x9624c58c, __VMLINUX_SYMBOL_STR(vmci_datagram_send) },
	{ 0xc843b143, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iovec) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x64e676bf, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0xcf5ed7ef, __VMLINUX_SYMBOL_STR(vmci_event_subscribe) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf6680ea, __VMLINUX_SYMBOL_STR(vmci_qpair_produce_buf_ready) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x6874e561, __VMLINUX_SYMBOL_STR(vsock_remove_sock) },
	{ 0x69ef87ff, __VMLINUX_SYMBOL_STR(vmci_datagram_destroy_handle) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe59fdb14, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9973b9b2, __VMLINUX_SYMBOL_STR(vmci_qpair_consume_buf_ready) },
	{ 0x1152e318, __VMLINUX_SYMBOL_STR(vmci_qpair_get_produce_indexes) },
	{ 0x91c31fd8, __VMLINUX_SYMBOL_STR(vsock_insert_connected) },
	{ 0x1a195863, __VMLINUX_SYMBOL_STR(vmci_context_get_priv_flags) },
	{ 0x6cc1a5f7, __VMLINUX_SYMBOL_STR(vmci_datagram_create_handle_priv) },
	{ 0x490bd0fa, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x2b3b4899, __VMLINUX_SYMBOL_STR(vsock_enqueue_accept) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vmci,vsock";


MODULE_INFO(srcversion, "1980D68D0C8EE9DE324CF75");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

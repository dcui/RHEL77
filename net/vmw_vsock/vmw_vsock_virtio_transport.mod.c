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
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x7dd73a1e, __VMLINUX_SYMBOL_STR(virtio_transport_recv_pkt) },
	{ 0xda471a6e, __VMLINUX_SYMBOL_STR(virtio_transport_set_buffer_size) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x6d77e02a, __VMLINUX_SYMBOL_STR(virtio_transport_destruct) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xf8f6f27a, __VMLINUX_SYMBOL_STR(virtio_transport_get_max_buffer_size) },
	{ 0x1d6dadba, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_block) },
	{ 0x53898e15, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_space) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x46f583d3, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_in) },
	{ 0x1539b2, __VMLINUX_SYMBOL_STR(virtio_transport_do_socket_init) },
	{ 0xccae3629, __VMLINUX_SYMBOL_STR(virtqueue_add_inbuf) },
	{ 0x28e7397a, __VMLINUX_SYMBOL_STR(virtio_transport_stream_is_active) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa92c1d8b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0xd212a40, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0x4abbfc7a, __VMLINUX_SYMBOL_STR(virtio_transport_deliver_tap_pkt) },
	{ 0x83bd50d2, __VMLINUX_SYMBOL_STR(virtio_transport_set_min_buffer_size) },
	{ 0x61d8bc72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x98d42558, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_allow) },
	{ 0x513f0e5f, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_post_dequeue) },
	{ 0x3f2e6bde, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_out) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0x6a591269, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5b463d06, __VMLINUX_SYMBOL_STR(virtio_transport_stream_dequeue) },
	{ 0x300209eb, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x4c776330, __VMLINUX_SYMBOL_STR(virtio_transport_stream_enqueue) },
	{ 0xb2d0e7b4, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_dequeue) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xb73c4179, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_enqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x27c84bdc, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_init) },
	{ 0xfbcac0ad, __VMLINUX_SYMBOL_STR(virtqueue_get_vring_size) },
	{ 0xe16ca3f8, __VMLINUX_SYMBOL_STR(virtio_transport_stream_allow) },
	{ 0x472376e1, __VMLINUX_SYMBOL_STR(virtio_transport_get_buffer_size) },
	{ 0xe22ac1ea, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x67f6fa67, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_dequeue) },
	{ 0x1517e502, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_post_enqueue) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1d7b918c, __VMLINUX_SYMBOL_STR(virtio_transport_shutdown) },
	{ 0x4869dc2b, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_enqueue) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x6ca99cf4, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_block) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa9e289e1, __VMLINUX_SYMBOL_STR(virtio_transport_free_pkt) },
	{ 0x50000844, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_bind) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xec7e2375, __VMLINUX_SYMBOL_STR(virtio_transport_stream_rcvhiwat) },
	{ 0x5b6ecd3c, __VMLINUX_SYMBOL_STR(virtio_transport_set_max_buffer_size) },
	{ 0xb3885013, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_data) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x8c507448, __VMLINUX_SYMBOL_STR(virtio_transport_connect) },
	{ 0x67564c32, __VMLINUX_SYMBOL_STR(virtqueue_detach_unused_buf) },
	{ 0xe59fdb14, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0xa611e6c9, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0xd8dce2c0, __VMLINUX_SYMBOL_STR(virtio_transport_release) },
	{ 0x447bf1cf, __VMLINUX_SYMBOL_STR(virtio_transport_get_min_buffer_size) },
	{ 0xcbedbb47, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_init) },
	{ 0x42734772, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,virtio_ring,vsock,virtio";

MODULE_ALIAS("virtio:d00000013v*");

MODULE_INFO(srcversion, "C318680511DACA4F2BE1545");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x7dd73a1e, __VMLINUX_SYMBOL_STR(virtio_transport_recv_pkt) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xda471a6e, __VMLINUX_SYMBOL_STR(virtio_transport_set_buffer_size) },
	{ 0x6d77e02a, __VMLINUX_SYMBOL_STR(virtio_transport_destruct) },
	{ 0xdeca35a7, __VMLINUX_SYMBOL_STR(vhost_work_flush) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0xe8915f31, __VMLINUX_SYMBOL_STR(vhost_dev_check_owner) },
	{ 0xf8f6f27a, __VMLINUX_SYMBOL_STR(virtio_transport_get_max_buffer_size) },
	{ 0x1d6dadba, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_block) },
	{ 0x53898e15, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_space) },
	{ 0xe28cbc5d, __VMLINUX_SYMBOL_STR(vhost_init_used) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x46f583d3, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_in) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x1539b2, __VMLINUX_SYMBOL_STR(virtio_transport_do_socket_init) },
	{ 0x28e7397a, __VMLINUX_SYMBOL_STR(virtio_transport_stream_is_active) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd212a40, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0xea80f0, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x19444627, __VMLINUX_SYMBOL_STR(memcpy_fromiovecend) },
	{ 0x9c1cecfe, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0x4abbfc7a, __VMLINUX_SYMBOL_STR(virtio_transport_deliver_tap_pkt) },
	{ 0x83bd50d2, __VMLINUX_SYMBOL_STR(virtio_transport_set_min_buffer_size) },
	{ 0x78cd833b, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x98d42558, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_allow) },
	{ 0x513f0e5f, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_post_dequeue) },
	{ 0x3f2e6bde, __VMLINUX_SYMBOL_STR(virtio_transport_notify_poll_out) },
	{ 0x55056d6e, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x44bb2459, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0xf23b2e74, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x1092d50, __VMLINUX_SYMBOL_STR(vhost_signal) },
	{ 0x3688188, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0xd36257ba, __VMLINUX_SYMBOL_STR(memcpy_toiovecend) },
	{ 0x5b463d06, __VMLINUX_SYMBOL_STR(virtio_transport_stream_dequeue) },
	{ 0x4c776330, __VMLINUX_SYMBOL_STR(virtio_transport_stream_enqueue) },
	{ 0xb2d0e7b4, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_dequeue) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb71695ea, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0xb73c4179, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_pre_enqueue) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x54063eef, __VMLINUX_SYMBOL_STR(vhost_work_queue) },
	{ 0x27c84bdc, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_init) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0xe16ca3f8, __VMLINUX_SYMBOL_STR(virtio_transport_stream_allow) },
	{ 0x472376e1, __VMLINUX_SYMBOL_STR(virtio_transport_get_buffer_size) },
	{ 0xeb72adac, __VMLINUX_SYMBOL_STR(vhost_poll_queue) },
	{ 0x67f6fa67, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_dequeue) },
	{ 0x1517e502, __VMLINUX_SYMBOL_STR(virtio_transport_notify_send_post_enqueue) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd19e578c, __VMLINUX_SYMBOL_STR(vhost_exceeds_weight) },
	{ 0x1d7b918c, __VMLINUX_SYMBOL_STR(virtio_transport_shutdown) },
	{ 0x4869dc2b, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_enqueue) },
	{ 0x13b60ea7, __VMLINUX_SYMBOL_STR(vhost_work_init) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x6ca99cf4, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_pre_block) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa9e289e1, __VMLINUX_SYMBOL_STR(virtio_transport_free_pkt) },
	{ 0x50000844, __VMLINUX_SYMBOL_STR(virtio_transport_dgram_bind) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xec7e2375, __VMLINUX_SYMBOL_STR(virtio_transport_stream_rcvhiwat) },
	{ 0x5b6ecd3c, __VMLINUX_SYMBOL_STR(virtio_transport_set_max_buffer_size) },
	{ 0x1d2b7e8f, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0x791b3e8d, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0x247ab99e, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0xb3885013, __VMLINUX_SYMBOL_STR(virtio_transport_stream_has_data) },
	{ 0x8c507448, __VMLINUX_SYMBOL_STR(virtio_transport_connect) },
	{ 0xe59fdb14, __VMLINUX_SYMBOL_STR(vsock_for_each_connected_socket) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6e290a29, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0xa1012e43, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0xd8dce2c0, __VMLINUX_SYMBOL_STR(virtio_transport_release) },
	{ 0x447bf1cf, __VMLINUX_SYMBOL_STR(virtio_transport_get_min_buffer_size) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xcbedbb47, __VMLINUX_SYMBOL_STR(virtio_transport_notify_recv_init) },
	{ 0xc29fb67d, __VMLINUX_SYMBOL_STR(vhost_add_used) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vmw_vsock_virtio_transport_common,vhost,vsock";


MODULE_INFO(srcversion, "E73EE951A557A23DA559BA6");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

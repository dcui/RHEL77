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
	{ 0x9e185390, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0xfedb8a6b, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xd91b533f, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xde444133, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xe0631f97, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x8d39c65, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x1b71edbe, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0x321dc15f, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x3875ed79, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0x4b85c06b, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x3bd3996b, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0xf8085462, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x23255972, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x6baccc9b, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xe495a8e4, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xa3d2392c, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0xd2fb6061, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x6ef8a88, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0x1fecbc34, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xf130a5e, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0x7c56c563, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4de5b65e, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0xbd0351dd, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0x451dcbe5, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x80c7e05c, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x161f2a7e, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0xa25aba33, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xa1e21efe, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x7830e638, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0xf5fc28ff, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x89cd4795, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x8f944a92, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xe388bca, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0xa9607bf3, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0xf3d26f34, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0x898dd5d8, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x486f8ada, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x53bdb552, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xda14a643, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x476e0f2f, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x4bba392, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x15d4461e, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x1e1fb219, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x3bef6b73, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0x7458c4c0, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0xd762a901, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x5855cee0, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xa7262e5c, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd7d9c13e, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xa7a18c8c, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xd56aa579, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0xc2f35170, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xa64e4873, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x6a1756c0, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x4643c947, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp,scsi_transport_iscsi";


MODULE_INFO(srcversion, "6B72567765AD2429C1E94A3");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

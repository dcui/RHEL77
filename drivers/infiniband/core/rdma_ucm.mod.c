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
	{ 0x26020eba, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x8a5ce1f6, __VMLINUX_SYMBOL_STR(rdma_get_service_id) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x2b58b0be, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x2837d90c, __VMLINUX_SYMBOL_STR(pid_vnr) },
	{ 0xd067fc5c, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xdfa37e7f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x9f458958, __VMLINUX_SYMBOL_STR(rdma_join_multicast) },
	{ 0xc5a0d37a, __VMLINUX_SYMBOL_STR(ib_copy_path_rec_to_user) },
	{ 0xec02a26d, __VMLINUX_SYMBOL_STR(rdma_read_gids) },
	{ 0x686e7389, __VMLINUX_SYMBOL_STR(__rdma_create_id) },
	{ 0x2465fc09, __VMLINUX_SYMBOL_STR(rdma_destroy_id) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8132b8fa, __VMLINUX_SYMBOL_STR(ib_copy_ah_attr_to_user) },
	{ 0xbfa41a64, __VMLINUX_SYMBOL_STR(rdma_init_qp_attr) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd288ca07, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x3156ae28, __VMLINUX_SYMBOL_STR(rdma_connect) },
	{ 0x164b38e3, __VMLINUX_SYMBOL_STR(rdma_set_reuseaddr) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x4a8fa68d, __VMLINUX_SYMBOL_STR(rdma_set_ib_path) },
	{ 0x72f989d9, __VMLINUX_SYMBOL_STR(ib_sa_pack_path) },
	{ 0xf23b2e74, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x7033840a, __VMLINUX_SYMBOL_STR(__rdma_accept) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x97c8a4fe, __VMLINUX_SYMBOL_STR(rdma_listen) },
	{ 0x79bc4567, __VMLINUX_SYMBOL_STR(ib_copy_qp_attr_to_user) },
	{ 0x97124687, __VMLINUX_SYMBOL_STR(rdma_set_afonly) },
	{ 0x79f67408, __VMLINUX_SYMBOL_STR(rdma_notify) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xaf2fa3a0, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xe0c06554, __VMLINUX_SYMBOL_STR(rdma_bind_addr) },
	{ 0xf2ad6b9e, __VMLINUX_SYMBOL_STR(rdma_resolve_route) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd6636ca6, __VMLINUX_SYMBOL_STR(rdma_addr_size_in6) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xc0ba760a, __VMLINUX_SYMBOL_STR(rdma_disconnect) },
	{ 0x73ad2ed8, __VMLINUX_SYMBOL_STR(fget_light) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2083fd7f, __VMLINUX_SYMBOL_STR(rdma_reject) },
	{ 0x86cef180, __VMLINUX_SYMBOL_STR(rdma_addr_size) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x10456461, __VMLINUX_SYMBOL_STR(rdma_set_service_type) },
	{ 0xad0e67c, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x9afc80f8, __VMLINUX_SYMBOL_STR(rdma_resolve_addr) },
	{ 0x4a6cce24, __VMLINUX_SYMBOL_STR(rdma_addr_size_kss) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x262bd202, __VMLINUX_SYMBOL_STR(ib_sa_unpack_path) },
	{ 0x63ac14a0, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xa1012e43, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xf0df6ba0, __VMLINUX_SYMBOL_STR(rdma_leave_multicast) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rdma_cm,ib_uverbs,ib_core";


MODULE_INFO(srcversion, "34D64D1FC8535290EC79038");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

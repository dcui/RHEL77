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
	{ 0xd891eaa1, __VMLINUX_SYMBOL_STR(vhost_vq_avail_empty) },
	{ 0x262f20a8, __VMLINUX_SYMBOL_STR(local_clock) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x476e0f2f, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xe8915f31, __VMLINUX_SYMBOL_STR(vhost_dev_check_owner) },
	{ 0xe28cbc5d, __VMLINUX_SYMBOL_STR(vhost_init_used) },
	{ 0xc06fe52d, __VMLINUX_SYMBOL_STR(vhost_poll_start) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xaa91c79e, __VMLINUX_SYMBOL_STR(vhost_chr_poll) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xea80f0, __VMLINUX_SYMBOL_STR(vhost_dev_cleanup) },
	{ 0x9c1cecfe, __VMLINUX_SYMBOL_STR(vhost_log_access_ok) },
	{ 0x72521e2c, __VMLINUX_SYMBOL_STR(tun_get_skb_array) },
	{ 0x939a4386, __VMLINUX_SYMBOL_STR(macvtap_get_skb_array) },
	{ 0x78cd833b, __VMLINUX_SYMBOL_STR(vhost_enable_notify) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x38145e9c, __VMLINUX_SYMBOL_STR(vhost_dev_has_owner) },
	{ 0x55056d6e, __VMLINUX_SYMBOL_STR(vhost_poll_flush) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xb6ba6337, __VMLINUX_SYMBOL_STR(vq_iotlb_prefetch) },
	{ 0x44bb2459, __VMLINUX_SYMBOL_STR(vhost_disable_notify) },
	{ 0xf23b2e74, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x3688188, __VMLINUX_SYMBOL_STR(vhost_dev_ioctl) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd36257ba, __VMLINUX_SYMBOL_STR(memcpy_toiovecend) },
	{ 0x8c375c, __VMLINUX_SYMBOL_STR(vhost_log_write) },
	{ 0x94292a43, __VMLINUX_SYMBOL_STR(vhost_chr_read_iter) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb71695ea, __VMLINUX_SYMBOL_STR(vhost_get_vq_desc) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x9fae32a5, __VMLINUX_SYMBOL_STR(vhost_chr_write_iter) },
	{ 0xa2b5ab22, __VMLINUX_SYMBOL_STR(vhost_dev_set_owner) },
	{ 0xaa28f03f, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal_n) },
	{ 0xbe40d9aa, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner_prepare) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xa17bf1a2, __VMLINUX_SYMBOL_STR(vhost_add_used_and_signal) },
	{ 0xec9baea0, __VMLINUX_SYMBOL_STR(vhost_discard_vq_desc) },
	{ 0x3656c8d6, __VMLINUX_SYMBOL_STR(tun_get_socket) },
	{ 0xeb72adac, __VMLINUX_SYMBOL_STR(vhost_poll_queue) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x9cb986f2, __VMLINUX_SYMBOL_STR(vmalloc_base) },
	{ 0xd19e578c, __VMLINUX_SYMBOL_STR(vhost_exceeds_weight) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd38d74cb, __VMLINUX_SYMBOL_STR(vhost_poll_stop) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9d8b2396, __VMLINUX_SYMBOL_STR(vhost_poll_init) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xb6b8f49, __VMLINUX_SYMBOL_STR(vhost_dev_reset_owner) },
	{ 0x22ed40e, __VMLINUX_SYMBOL_STR(vhost_has_work) },
	{ 0x1d2b7e8f, __VMLINUX_SYMBOL_STR(vhost_dev_init) },
	{ 0x9185525, __VMLINUX_SYMBOL_STR(fget) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x791b3e8d, __VMLINUX_SYMBOL_STR(vhost_dev_stop) },
	{ 0x247ab99e, __VMLINUX_SYMBOL_STR(vhost_vq_access_ok) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x6e290a29, __VMLINUX_SYMBOL_STR(vhost_vring_ioctl) },
	{ 0xa1012e43, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x541ffcae, __VMLINUX_SYMBOL_STR(vhost_init_device_iotlb) },
	{ 0x84a574ea, __VMLINUX_SYMBOL_STR(macvtap_get_socket) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vhost,tun,macvtap";


MODULE_INFO(srcversion, "AFA886437748A7A97786CBF");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

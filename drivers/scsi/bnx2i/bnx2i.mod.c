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
	{ 0xb190d2a6, __VMLINUX_SYMBOL_STR(iscsi_offload_mesg) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa25aba33, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3db0a12d, __VMLINUX_SYMBOL_STR(__iscsi_put_task) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x9e185390, __VMLINUX_SYMBOL_STR(iscsi_change_queue_depth) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0x8d39c65, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x6ef8a88, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xad09d5d, __VMLINUX_SYMBOL_STR(pci_dev_get) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd91b533f, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xe495a8e4, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xa1e21efe, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x451dcbe5, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x80c7e05c, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0xc35e4b4e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xdecfd1a1, __VMLINUX_SYMBOL_STR(iscsi_lookup_endpoint) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xd2258c, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf5fc28ff, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x127b8725, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6baccc9b, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x42f90a31, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x3bd3996b, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x23255972, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0x41fa375, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0x161f2a7e, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x7458c4c0, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x636af174, __VMLINUX_SYMBOL_STR(cnic_unregister_driver) },
	{ 0x3ce46354, __VMLINUX_SYMBOL_STR(iscsi_destroy_endpoint) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0x6f8d91ba, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x81533963, __VMLINUX_SYMBOL_STR(sysfs_format_mac) },
	{ 0xc5ed6853, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x1e1fb219, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x35aaa70a, __VMLINUX_SYMBOL_STR(iscsi_session_failure) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf7f1d5b4, __VMLINUX_SYMBOL_STR(cnic_register_driver) },
	{ 0xa3d2392c, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0xde444133, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd7d9c13e, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x2a796c17, __VMLINUX_SYMBOL_STR(iscsi_suspend_queue) },
	{ 0x5bd6c1ee, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0xea10212a, __VMLINUX_SYMBOL_STR(int_to_scsilun) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x5ed720ef, __VMLINUX_SYMBOL_STR(iscsi_create_endpoint) },
	{ 0xe0631f97, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd74affc0, __VMLINUX_SYMBOL_STR(scsi_dma_unmap) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x889c0220, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0xd5dac574, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xbd0351dd, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd762a901, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xda14a643, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0x1c1b5273, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0xfedb8a6b, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x8055d058, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x1b71edbe, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xef78c1a6, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xdeff8960, __VMLINUX_SYMBOL_STR(iscsi_itt_to_task) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x8323ddfa, __VMLINUX_SYMBOL_STR(iscsi_host_for_each_session) },
	{ 0x108bb7fd, __VMLINUX_SYMBOL_STR(scsi_dma_map) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=scsi_transport_iscsi,libiscsi,cnic";


MODULE_INFO(srcversion, "529E7CB5943EE77FA879427");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

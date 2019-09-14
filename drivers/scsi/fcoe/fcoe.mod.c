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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf378faba, __VMLINUX_SYMBOL_STR(fcoe_fcf_get_selected) },
	{ 0x594d6910, __VMLINUX_SYMBOL_STR(fcoe_ctlr_set_fip_mode) },
	{ 0x4b74f49a, __VMLINUX_SYMBOL_STR(fcoe_ctlr_get_lesb) },
	{ 0x68093d84, __VMLINUX_SYMBOL_STR(fcoe_get_lesb) },
	{ 0x7aa6bce7, __VMLINUX_SYMBOL_STR(fc_lport_bsg_request) },
	{ 0x62780895, __VMLINUX_SYMBOL_STR(fc_rport_terminate_io) },
	{ 0xd3aaf80e, __VMLINUX_SYMBOL_STR(fc_get_host_stats) },
	{ 0xa2759db, __VMLINUX_SYMBOL_STR(fc_get_host_speed) },
	{ 0x346408f4, __VMLINUX_SYMBOL_STR(fc_get_host_port_state) },
	{ 0x6999c391, __VMLINUX_SYMBOL_STR(fc_set_rport_loss_tmo) },
	{ 0xc50f09d0, __VMLINUX_SYMBOL_STR(fc_change_queue_type) },
	{ 0x44001b78, __VMLINUX_SYMBOL_STR(fc_change_queue_depth) },
	{ 0x9655891b, __VMLINUX_SYMBOL_STR(fc_slave_alloc) },
	{ 0xa43fe3d9, __VMLINUX_SYMBOL_STR(fc_eh_host_reset) },
	{ 0x36ec224, __VMLINUX_SYMBOL_STR(fc_eh_device_reset) },
	{ 0xd9cef6b0, __VMLINUX_SYMBOL_STR(fc_eh_abort) },
	{ 0xddecbd64, __VMLINUX_SYMBOL_STR(fc_queuecommand) },
	{ 0xa58ff60d, __VMLINUX_SYMBOL_STR(fcoe_transport_detach) },
	{ 0x4fd8d8e6, __VMLINUX_SYMBOL_STR(fc_release_transport) },
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x9b33e0d7, __VMLINUX_SYMBOL_STR(unregister_dcbevent_notifier) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x6b5715cd, __VMLINUX_SYMBOL_STR(fc_attach_transport) },
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0x93b3fc74, __VMLINUX_SYMBOL_STR(register_dcbevent_notifier) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0xaf0b747c, __VMLINUX_SYMBOL_STR(fcoe_transport_attach) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x4b2041d, __VMLINUX_SYMBOL_STR(___pskb_trim_adjust_truesize) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8e3860a8, __VMLINUX_SYMBOL_STR(fc_exch_recv) },
	{ 0xbd6381f1, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x889c0220, __VMLINUX_SYMBOL_STR(set_user_nice) },
	{ 0x1135efbb, __VMLINUX_SYMBOL_STR(fcoe_ctlr_els_send) },
	{ 0x9faf9290, __VMLINUX_SYMBOL_STR(fcoe_fc_crc) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x5eddfbd5, __VMLINUX_SYMBOL_STR(fcoe_get_paged_crc_eof) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x36a2389e, __VMLINUX_SYMBOL_STR(fcoe_check_wait_queue) },
	{ 0x3d01639f, __VMLINUX_SYMBOL_STR(fcoe_start_io) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x36e5fbaf, __VMLINUX_SYMBOL_STR(fc_cpu_mask) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8b4e1a6, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x84b3d915, __VMLINUX_SYMBOL_STR(fcoe_wwn_to_str) },
	{ 0xd47dd1b2, __VMLINUX_SYMBOL_STR(fcoe_validate_vport_create) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4a9282b6, __VMLINUX_SYMBOL_STR(dcb_getapp) },
	{ 0x2aa0a47, __VMLINUX_SYMBOL_STR(dcb_ieee_getapp_mask) },
	{ 0x43ebbda9, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xac73596e, __VMLINUX_SYMBOL_STR(dev_mc_add) },
	{ 0xaf7d7b60, __VMLINUX_SYMBOL_STR(fcoe_ctlr_init) },
	{ 0xc389cce8, __VMLINUX_SYMBOL_STR(fcoe_ctlr_device_add) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x95b5fe5c, __VMLINUX_SYMBOL_STR(fc_exch_mgr_add) },
	{ 0xdd08c24c, __VMLINUX_SYMBOL_STR(fc_exch_mgr_list_clone) },
	{ 0x23244e2e, __VMLINUX_SYMBOL_STR(fc_exch_mgr_alloc) },
	{ 0x374c1e1c, __VMLINUX_SYMBOL_STR(fcoe_wwn_from_mac) },
	{ 0xc97d5828, __VMLINUX_SYMBOL_STR(fcoe_get_wwn) },
	{ 0x284c17c7, __VMLINUX_SYMBOL_STR(fcoe_libfc_config) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x40020cf9, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xfb51275, __VMLINUX_SYMBOL_STR(fcoe_queue_timer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x53f22502, __VMLINUX_SYMBOL_STR(fc_lport_config) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x1cf3c2dd, __VMLINUX_SYMBOL_STR(libfc_vport_create) },
	{ 0xca606326, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0xc1f0281e, __VMLINUX_SYMBOL_STR(fcoe_ctlr_device_delete) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xd67b3750, __VMLINUX_SYMBOL_STR(fc_exch_mgr_free) },
	{ 0x573da5ac, __VMLINUX_SYMBOL_STR(fc_fcp_destroy) },
	{ 0x7f99a70c, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0x4a719e3a, __VMLINUX_SYMBOL_STR(fc_remove_host) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xbeae3c85, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x6f6355fe, __VMLINUX_SYMBOL_STR(fc_lport_destroy) },
	{ 0x86971169, __VMLINUX_SYMBOL_STR(vlan_dev_real_dev) },
	{ 0xb4d5d033, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x42f90a31, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xe632db9a, __VMLINUX_SYMBOL_STR(fc_frame_alloc_fill) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x12d8ca1, __VMLINUX_SYMBOL_STR(_fc_frame_alloc) },
	{ 0xa916b694, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc1e61e54, __VMLINUX_SYMBOL_STR(fc_fabric_logoff) },
	{ 0xa3d82675, __VMLINUX_SYMBOL_STR(fc_vport_setlink) },
	{ 0xb6cbd911, __VMLINUX_SYMBOL_STR(fc_fabric_login) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xd2258c, __VMLINUX_SYMBOL_STR(kthread_bind) },
	{ 0xc35e4b4e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x7dea95f1, __VMLINUX_SYMBOL_STR(fc_set_mfs) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xf0bc161, __VMLINUX_SYMBOL_STR(fcoe_link_speed_update) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x6f8d91ba, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x86715bc7, __VMLINUX_SYMBOL_STR(fcoe_ctlr_destroy) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xad27a3e7, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0xfa6dd980, __VMLINUX_SYMBOL_STR(__dev_remove_pack) },
	{ 0x22063412, __VMLINUX_SYMBOL_STR(fcoe_ctlr_recv_flogi) },
	{ 0xd84b7a74, __VMLINUX_SYMBOL_STR(fc_lport_flogi_resp) },
	{ 0xd60e2e65, __VMLINUX_SYMBOL_STR(fc_lport_logo_resp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xe5139204, __VMLINUX_SYMBOL_STR(fc_elsct_send) },
	{ 0x34ea4166, __VMLINUX_SYMBOL_STR(fcoe_ctlr_recv) },
	{ 0x26e19796, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0xec60539a, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0xed34a913, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x80dc2968, __VMLINUX_SYMBOL_STR(fcoe_ctlr_link_up) },
	{ 0x1f7761a7, __VMLINUX_SYMBOL_STR(fcoe_clean_pending_queue) },
	{ 0xba83a1ac, __VMLINUX_SYMBOL_STR(fcoe_ctlr_link_down) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libfcoe,libfc,scsi_transport_fc";


MODULE_INFO(srcversion, "75277F6D792D8022BB5F3B5");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
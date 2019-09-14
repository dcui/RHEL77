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
	{ 0x300a443f, __VMLINUX_SYMBOL_STR(target_unregister_template) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xd4b25e34, __VMLINUX_SYMBOL_STR(target_register_template) },
	{ 0xaea8b4b4, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xc3d55f5c, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x5d0db86f, __VMLINUX_SYMBOL_STR(__root_device_register) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd3be98a, __VMLINUX_SYMBOL_STR(target_setup_session) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x62440d5, __VMLINUX_SYMBOL_STR(device_register) },
	{ 0xf7490fa, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x42a3b883, __VMLINUX_SYMBOL_STR(root_device_unregister) },
	{ 0x5b2835a8, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xca154dc5, __VMLINUX_SYMBOL_STR(target_put_sess_cmd) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x85244028, __VMLINUX_SYMBOL_STR(target_submit_tmr) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x294f285c, __VMLINUX_SYMBOL_STR(blk_queue_init_tags) },
	{ 0x804d7d23, __VMLINUX_SYMBOL_STR(scsi_add_device) },
	{ 0x68d95008, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x4346c54a, __VMLINUX_SYMBOL_STR(scsi_remove_device) },
	{ 0x1447ec08, __VMLINUX_SYMBOL_STR(scsi_device_lookup) },
	{ 0xd99cea58, __VMLINUX_SYMBOL_STR(core_tpg_deregister) },
	{ 0x3a3dd452, __VMLINUX_SYMBOL_STR(target_remove_session) },
	{ 0x45790617, __VMLINUX_SYMBOL_STR(target_execute_cmd) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x40020cf9, __VMLINUX_SYMBOL_STR(scsi_add_host_with_dma) },
	{ 0xca606326, __VMLINUX_SYMBOL_STR(scsi_host_alloc) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xaa786c01, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x3b619881, __VMLINUX_SYMBOL_STR(target_submit_cmd_map_sgls) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xc3a4bd8c, __VMLINUX_SYMBOL_STR(transport_generic_free_cmd) },
	{ 0xdf01c89e, __VMLINUX_SYMBOL_STR(scsi_track_queue_full) },
	{ 0x5de1b3d3, __VMLINUX_SYMBOL_STR(scsi_adjust_queue_depth) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6f8d91ba, __VMLINUX_SYMBOL_STR(scsi_host_put) },
	{ 0x7f99a70c, __VMLINUX_SYMBOL_STR(scsi_remove_host) },
	{ 0xd374dfba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x3afc91a3, __VMLINUX_SYMBOL_STR(core_tpg_register) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x171bb726, __VMLINUX_SYMBOL_STR(core_allocate_nexus_loss_ua) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=target_core_mod";


MODULE_INFO(srcversion, "8682E9D5D976BECD911FE3D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

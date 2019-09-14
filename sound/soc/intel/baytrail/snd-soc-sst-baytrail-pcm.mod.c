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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xd777bd2d, __VMLINUX_SYMBOL_STR(sst_module_new) },
	{ 0xd16b0c74, __VMLINUX_SYMBOL_STR(sst_dsp_reset) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x2a7d71f2, __VMLINUX_SYMBOL_STR(snd_pcm_lib_default_mmap) },
	{ 0x602ec3d7, __VMLINUX_SYMBOL_STR(sst_mem_block_register) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x4a045773, __VMLINUX_SYMBOL_STR(sst_shim32_write) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3a78144a, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x7ca3dddf, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits64_unlocked) },
	{ 0xcf074e2, __VMLINUX_SYMBOL_STR(snd_soc_set_runtime_hwparams) },
	{ 0x696f3eab, __VMLINUX_SYMBOL_STR(sst_fw_new) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x76d756b9, __VMLINUX_SYMBOL_STR(sst_memcpy_toio_32) },
	{ 0x47d4fd87, __VMLINUX_SYMBOL_STR(sst_dsp_inbox_read) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x33c056fc, __VMLINUX_SYMBOL_STR(sst_dsp_outbox_write) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xcaf51fe4, __VMLINUX_SYMBOL_STR(sst_ipc_tx_msg_reply_complete) },
	{ 0xbc2c4be8, __VMLINUX_SYMBOL_STR(sst_ipc_reply_find_msg) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x36e194d7, __VMLINUX_SYMBOL_STR(sst_dsp_mailbox_init) },
	{ 0x1b5e8b82, __VMLINUX_SYMBOL_STR(sst_shim32_read) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3c4ff116, __VMLINUX_SYMBOL_STR(sst_ipc_init) },
	{ 0xc1108af1, __VMLINUX_SYMBOL_STR(sst_dsp_shim_write64_unlocked) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x993d336e, __VMLINUX_SYMBOL_STR(sst_fw_free) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x4e6daf04, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0x8845b1f5, __VMLINUX_SYMBOL_STR(sst_ipc_fini) },
	{ 0x507622fb, __VMLINUX_SYMBOL_STR(sst_mem_block_unregister_all) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xbcec5387, __VMLINUX_SYMBOL_STR(sst_shim32_read64) },
	{ 0x2cb58043, __VMLINUX_SYMBOL_STR(sst_dsp_shim_read_unlocked) },
	{ 0x6728e776, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xd9a2c94c, __VMLINUX_SYMBOL_STR(sst_shim32_write64) },
	{ 0xc79585e3, __VMLINUX_SYMBOL_STR(snd_soc_rtdcom_lookup) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xfb66c639, __VMLINUX_SYMBOL_STR(sst_dsp_shim_read64_unlocked) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xf90040c4, __VMLINUX_SYMBOL_STR(sst_fw_reload) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x39b3935a, __VMLINUX_SYMBOL_STR(sst_fw_unload) },
	{ 0x56bafc43, __VMLINUX_SYMBOL_STR(sst_module_alloc_blocks) },
	{ 0xa6a5a3f1, __VMLINUX_SYMBOL_STR(sst_dsp_shim_read64) },
	{ 0x7ed89fbf, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_component) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xaf85d459, __VMLINUX_SYMBOL_STR(sst_ipc_tx_message_nowait) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd72618b1, __VMLINUX_SYMBOL_STR(sst_dsp_shim_update_bits64) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x603dae35, __VMLINUX_SYMBOL_STR(sst_ipc_drop_all) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xa8cd933b, __VMLINUX_SYMBOL_STR(sst_dsp_free) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xf72f6314, __VMLINUX_SYMBOL_STR(sst_memcpy_fromio_32) },
	{ 0x850af17d, __VMLINUX_SYMBOL_STR(sst_fw_free_all) },
	{ 0xab831d49, __VMLINUX_SYMBOL_STR(sst_dsp_boot) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x8a84a7b5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xa3897b7f, __VMLINUX_SYMBOL_STR(sst_ipc_tx_message_wait) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x3350e10b, __VMLINUX_SYMBOL_STR(sst_dsp_new) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-sst-firmware,snd-soc-sst-dsp,snd-soc-core,snd-soc-sst-ipc";


MODULE_INFO(srcversion, "336B6CDE73FA1A8417907A0");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

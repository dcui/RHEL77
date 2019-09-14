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
	{ 0x42595e58, __VMLINUX_SYMBOL_STR(vgacon_text_force) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x73ebfb41, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x6219fe41, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0xd1776bcf, __VMLINUX_SYMBOL_STR(sync_file_create) },
	{ 0x146fd7bf, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x347cd7dc, __VMLINUX_SYMBOL_STR(drm_fb_helper_ioctl) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x865143d6, __VMLINUX_SYMBOL_STR(ttm_bo_eviction_valuable) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7fe9314a, __VMLINUX_SYMBOL_STR(ttm_dma_tt_init) },
	{ 0x4f1cb8bc, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0xfa4b59e1, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xdd44f696, __VMLINUX_SYMBOL_STR(sync_file_get_fence) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xa9ee36b2, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_plane) },
	{ 0xf02ca449, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_duplicate_state) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x2458f21b, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x18a84409, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8feafa7d, __VMLINUX_SYMBOL_STR(ttm_bo_put) },
	{ 0x91feedc2, __VMLINUX_SYMBOL_STR(dma_fence_release) },
	{ 0xb80a6031, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x686508ee, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xdab2abd8, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_reset) },
	{ 0x7484eab2, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_hw_done) },
	{ 0x36ee802d, __VMLINUX_SYMBOL_STR(drm_gem_fb_create_handle) },
	{ 0xcf9da84f, __VMLINUX_SYMBOL_STR(drm_set_preferred_mode) },
	{ 0xda846989, __VMLINUX_SYMBOL_STR(drm_atomic_helper_page_flip) },
	{ 0x74e4cae0, __VMLINUX_SYMBOL_STR(ttm_bo_validate) },
	{ 0x83e4b12f, __VMLINUX_SYMBOL_STR(ttm_bo_init) },
	{ 0x439afe73, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0x482f7f0, __VMLINUX_SYMBOL_STR(drm_cvt_mode) },
	{ 0x6ab8a57f, __VMLINUX_SYMBOL_STR(virtio_check_driver_offered_feature) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x16f70e1e, __VMLINUX_SYMBOL_STR(get_task_comm) },
	{ 0x183e2a7b, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xa4664a52, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0xa92c1d8b, __VMLINUX_SYMBOL_STR(virtqueue_kick) },
	{ 0x93d1ced5, __VMLINUX_SYMBOL_STR(remove_conflicting_pci_framebuffers) },
	{ 0x26ed84b, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x1a85e7e5, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_reset) },
	{ 0x8e82ea92, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0x61d8bc72, __VMLINUX_SYMBOL_STR(virtqueue_get_buf) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x93f60b88, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xe196a9f7, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x1c22b3dc, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x7a67705d, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0x4d48c0d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x40f5436b, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x57e9272b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_set_config) },
	{ 0x7eb18b50, __VMLINUX_SYMBOL_STR(drm_connector_attach_edid_property) },
	{ 0x15c361a2, __VMLINUX_SYMBOL_STR(drm_connector_update_edid_property) },
	{ 0xda9ac285, __VMLINUX_SYMBOL_STR(drm_dev_put) },
	{ 0x6a591269, __VMLINUX_SYMBOL_STR(virtqueue_add_sgs) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xbc35b310, __VMLINUX_SYMBOL_STR(ttm_bo_add_to_lru) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xeb36fe0, __VMLINUX_SYMBOL_STR(dma_fence_init) },
	{ 0xe63d271c, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x30a4cc09, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x83f0d409, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0xb2d2ba3b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_reset) },
	{ 0x39c33912, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x1ae7df04, __VMLINUX_SYMBOL_STR(drm_gem_object_put_unlocked) },
	{ 0x259756a6, __VMLINUX_SYMBOL_STR(ttm_bo_kmap) },
	{ 0xcdc254db, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x300209eb, __VMLINUX_SYMBOL_STR(virtqueue_disable_cb) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x42972c93, __VMLINUX_SYMBOL_STR(ttm_eu_fence_buffer_objects) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x255c8d90, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x7f32856a, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x8b258c31, __VMLINUX_SYMBOL_STR(ttm_bo_dma_acc_size) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xb7894c75, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xdf0f1dde, __VMLINUX_SYMBOL_STR(ttm_bo_init_mm) },
	{ 0x7442ecd9, __VMLINUX_SYMBOL_STR(ttm_bo_wait) },
	{ 0xc189c3bc, __VMLINUX_SYMBOL_STR(ttm_bo_device_init) },
	{ 0x3c9684fe, __VMLINUX_SYMBOL_STR(dma_fence_context_alloc) },
	{ 0x5d4a26fc, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x4fa653b2, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xfee75298, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0x8c416dbc, __VMLINUX_SYMBOL_STR(ttm_eu_backoff_reservation) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x26e5fe48, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0x533a37c2, __VMLINUX_SYMBOL_STR(drm_plane_cleanup) },
	{ 0xa3f6862f, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x1fb73be6, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_imageblit) },
	{ 0x911dd9e7, __VMLINUX_SYMBOL_STR(drm_gem_prime_import) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xeb7ce1b3, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_duplicate_state) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xcdccbd0c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_wait_for_vblanks) },
	{ 0xba58ce27, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0xe22ac1ea, __VMLINUX_SYMBOL_STR(unregister_virtio_driver) },
	{ 0x5b116915, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check) },
	{ 0x693284ee, __VMLINUX_SYMBOL_STR(ttm_bo_del_sub_from_lru) },
	{ 0x3cfae739, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43556119, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0xa7d9e4a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xaa619b60, __VMLINUX_SYMBOL_STR(ttm_bo_kunmap) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x41171a26, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_modeset_disables) },
	{ 0xd5050155, __VMLINUX_SYMBOL_STR(drm_connector_attach_encoder) },
	{ 0x4a758854, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0x9d3093b6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x3f4547a7, __VMLINUX_SYMBOL_STR(put_unused_fd) },
	{ 0xf6243f18, __VMLINUX_SYMBOL_STR(drm_add_modes_noedid) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x85e0cdca, __VMLINUX_SYMBOL_STR(dma_fence_wait_timeout) },
	{ 0x111d19fb, __VMLINUX_SYMBOL_STR(ttm_eu_reserve_buffers) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x48c53d55, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x79fd28dc, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8bd440a3, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xda4a5241, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x626b3e6, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x69a002eb, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x6c71ccfc, __VMLINUX_SYMBOL_STR(drm_dev_set_unique) },
	{ 0xa9de52c3, __VMLINUX_SYMBOL_STR(ttm_bo_device_release) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xacc58df4, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xff60280c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_planes) },
	{ 0xb6244511, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x26f5d155, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_destroy_state) },
	{ 0xaa842170, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1870cfa5, __VMLINUX_SYMBOL_STR(ttm_dma_tt_fini) },
	{ 0x152d4c3b, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa90886d5, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd2928d25, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0xd91b234, __VMLINUX_SYMBOL_STR(drm_atomic_helper_cleanup_planes) },
	{ 0xf25d238b, __VMLINUX_SYMBOL_STR(sg_alloc_table_from_pages) },
	{ 0x17b881f6, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x2109a78c, __VMLINUX_SYMBOL_STR(drm_dbg) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0x5afd365d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_plane) },
	{ 0x6bb977bb, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_fillrect) },
	{ 0x1dd83e63, __VMLINUX_SYMBOL_STR(dma_fence_match_context) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x911df1c, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x971f09a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0x60e2e8f3, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0x5e15d54c, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x906c410b, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_copyarea) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x5935a61a, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x8cd8d090, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x15120e1c, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_modeset_enables) },
	{ 0xa611e6c9, __VMLINUX_SYMBOL_STR(virtqueue_enable_cb) },
	{ 0xc430283a, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0xc190d2b7, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xfcf9fbe4, __VMLINUX_SYMBOL_STR(dma_fence_signal_locked) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x93fff143, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0x155dc37b, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x2ac0c331, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x10a4962f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_destroy_state) },
	{ 0x42734772, __VMLINUX_SYMBOL_STR(register_virtio_driver) },
	{ 0x7cc41a18, __VMLINUX_SYMBOL_STR(drm_gem_fb_destroy) },
	{ 0x18c32162, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
	{ 0xc12b0a17, __VMLINUX_SYMBOL_STR(ttm_bo_mmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,ttm,virtio,virtio_ring";

MODULE_ALIAS("virtio:d00000010v*");

MODULE_INFO(srcversion, "F9499D9AB150AB87C6CB1EE");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

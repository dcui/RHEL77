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
	{ 0x6219fe41, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x146fd7bf, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x347cd7dc, __VMLINUX_SYMBOL_STR(drm_fb_helper_ioctl) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x865143d6, __VMLINUX_SYMBOL_STR(ttm_bo_eviction_valuable) },
	{ 0xcc0dba04, __VMLINUX_SYMBOL_STR(drm_vma_offset_remove) },
	{ 0xd3bd696a, __VMLINUX_SYMBOL_STR(ttm_tt_fini) },
	{ 0x8548b292, __VMLINUX_SYMBOL_STR(ttm_fbdev_mmap) },
	{ 0x2101714a, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_config) },
	{ 0x4f1cb8bc, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0xfa4b59e1, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x9276b715, __VMLINUX_SYMBOL_STR(drm_helper_resume_force_mode) },
	{ 0x7af17f0c, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_fillrect) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x2458f21b, __VMLINUX_SYMBOL_STR(drm_dev_alloc) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8feafa7d, __VMLINUX_SYMBOL_STR(ttm_bo_put) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb80a6031, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0xcf9da84f, __VMLINUX_SYMBOL_STR(drm_set_preferred_mode) },
	{ 0x74e4cae0, __VMLINUX_SYMBOL_STR(ttm_bo_validate) },
	{ 0x83e4b12f, __VMLINUX_SYMBOL_STR(ttm_bo_init) },
	{ 0x439afe73, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0xdfa37e7f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x183e2a7b, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x93d1ced5, __VMLINUX_SYMBOL_STR(remove_conflicting_pci_framebuffers) },
	{ 0x26ed84b, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x8e82ea92, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0x93f60b88, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0x1c22b3dc, __VMLINUX_SYMBOL_STR(drm_do_get_edid) },
	{ 0x9ee97713, __VMLINUX_SYMBOL_STR(drm_gem_fbdev_fb_create) },
	{ 0x40f5436b, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x7eb18b50, __VMLINUX_SYMBOL_STR(drm_connector_attach_edid_property) },
	{ 0x15c361a2, __VMLINUX_SYMBOL_STR(drm_connector_update_edid_property) },
	{ 0x935daa19, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xda9ac285, __VMLINUX_SYMBOL_STR(drm_dev_put) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0x812449bc, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_copyarea) },
	{ 0xd98eec1f, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbc35b310, __VMLINUX_SYMBOL_STR(ttm_bo_add_to_lru) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x30a4cc09, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x1252f78c, __VMLINUX_SYMBOL_STR(drm_gem_fb_create) },
	{ 0x39c33912, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x1ae7df04, __VMLINUX_SYMBOL_STR(drm_gem_object_put_unlocked) },
	{ 0x259756a6, __VMLINUX_SYMBOL_STR(ttm_bo_kmap) },
	{ 0xcdc254db, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x18ad87fe, __VMLINUX_SYMBOL_STR(ttm_tt_init) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x255c8d90, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x7f32856a, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x8b258c31, __VMLINUX_SYMBOL_STR(ttm_bo_dma_acc_size) },
	{ 0xb7894c75, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0xdf0f1dde, __VMLINUX_SYMBOL_STR(ttm_bo_init_mm) },
	{ 0xc189c3bc, __VMLINUX_SYMBOL_STR(ttm_bo_device_init) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x4fa653b2, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xae05dc84, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable) },
	{ 0x7985b0b5, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_suspend_unlocked) },
	{ 0xa3f6862f, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x693284ee, __VMLINUX_SYMBOL_STR(ttm_bo_del_sub_from_lru) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43556119, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0xa7d9e4a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0xd5050155, __VMLINUX_SYMBOL_STR(drm_connector_attach_encoder) },
	{ 0x4a758854, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0x9d3093b6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0xf6243f18, __VMLINUX_SYMBOL_STR(drm_add_modes_noedid) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x48c53d55, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0xc62d6dce, __VMLINUX_SYMBOL_STR(drm_primary_helper_funcs) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x626b3e6, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x69a002eb, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x2d984c54, __VMLINUX_SYMBOL_STR(drm_fb_helper_fbdev_setup) },
	{ 0xa9de52c3, __VMLINUX_SYMBOL_STR(ttm_bo_device_release) },
	{ 0xacc58df4, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xaa842170, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xd2928d25, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0x751bad00, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_imageblit) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2109a78c, __VMLINUX_SYMBOL_STR(drm_dbg) },
	{ 0x75a33622, __VMLINUX_SYMBOL_STR(ttm_bo_manager_func) },
	{ 0x971f09a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0xa56e7e8b, __VMLINUX_SYMBOL_STR(drm_vma_node_is_allowed) },
	{ 0x1adfdb3d, __VMLINUX_SYMBOL_STR(drm_fb_helper_fbdev_teardown) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x5935a61a, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x8cd8d090, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe25bf7aa, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_disable) },
	{ 0x84c3276a, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0xc430283a, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0xc190d2b7, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0xd058bf16, __VMLINUX_SYMBOL_STR(pci_request_region) },
	{ 0x2ac0c331, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0xc12b0a17, __VMLINUX_SYMBOL_STR(ttm_bo_mmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,ttm";

MODULE_ALIAS("pci:v00001234d00001111sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001234d00001111sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "66D3F7280AEA2B111FA5585");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

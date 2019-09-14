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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x865143d6, __VMLINUX_SYMBOL_STR(ttm_bo_eviction_valuable) },
	{ 0xd3bd696a, __VMLINUX_SYMBOL_STR(ttm_tt_fini) },
	{ 0x2101714a, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_config) },
	{ 0xfa4b59e1, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x9276b715, __VMLINUX_SYMBOL_STR(drm_helper_resume_force_mode) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x18a84409, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x8feafa7d, __VMLINUX_SYMBOL_STR(ttm_bo_put) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xc49d4fde, __VMLINUX_SYMBOL_STR(drm_crtc_force_disable_all) },
	{ 0xb80a6031, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x36ee802d, __VMLINUX_SYMBOL_STR(drm_gem_fb_create_handle) },
	{ 0xcf9da84f, __VMLINUX_SYMBOL_STR(drm_set_preferred_mode) },
	{ 0x74e4cae0, __VMLINUX_SYMBOL_STR(ttm_bo_validate) },
	{ 0x3c02e095, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0x83e4b12f, __VMLINUX_SYMBOL_STR(ttm_bo_init) },
	{ 0x183e2a7b, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x93d1ced5, __VMLINUX_SYMBOL_STR(remove_conflicting_pci_framebuffers) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x26ed84b, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x93f60b88, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xe196a9f7, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x7a67705d, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x40f5436b, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x88ab6fe3, __VMLINUX_SYMBOL_STR(kgdb_active) },
	{ 0x935daa19, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xc1447056, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_suspend) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xbc35b310, __VMLINUX_SYMBOL_STR(ttm_bo_add_to_lru) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xe63d271c, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x83f0d409, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x39c33912, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x1ae7df04, __VMLINUX_SYMBOL_STR(drm_gem_object_put_unlocked) },
	{ 0x259756a6, __VMLINUX_SYMBOL_STR(ttm_bo_kmap) },
	{ 0xcdc254db, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x18ad87fe, __VMLINUX_SYMBOL_STR(ttm_tt_init) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x255c8d90, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x8b258c31, __VMLINUX_SYMBOL_STR(ttm_bo_dma_acc_size) },
	{ 0xdf0f1dde, __VMLINUX_SYMBOL_STR(ttm_bo_init_mm) },
	{ 0xc189c3bc, __VMLINUX_SYMBOL_STR(ttm_bo_device_init) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x4fa653b2, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xae05dc84, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable) },
	{ 0xfee75298, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0xa3f6862f, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x1fb73be6, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_imageblit) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x693284ee, __VMLINUX_SYMBOL_STR(ttm_bo_del_sub_from_lru) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43556119, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0xa7d9e4a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xaa619b60, __VMLINUX_SYMBOL_STR(ttm_bo_kunmap) },
	{ 0x3fda5f7a, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0xd5050155, __VMLINUX_SYMBOL_STR(drm_connector_attach_encoder) },
	{ 0x9d3093b6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0x16f559d5, __VMLINUX_SYMBOL_STR(drm_mode_object_put) },
	{ 0xf6243f18, __VMLINUX_SYMBOL_STR(drm_add_modes_noedid) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x48c53d55, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x5b33b9ae, __VMLINUX_SYMBOL_STR(drm_crtc_init) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x626b3e6, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x69a002eb, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0xa9de52c3, __VMLINUX_SYMBOL_STR(ttm_bo_device_release) },
	{ 0xacc58df4, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xaa842170, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xd2928d25, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x17b881f6, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0x6bb977bb, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_fillrect) },
	{ 0x75a33622, __VMLINUX_SYMBOL_STR(ttm_bo_manager_func) },
	{ 0x42a9afa2, __VMLINUX_SYMBOL_STR(drm_helper_disable_unused_functions) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0x971f09a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0x60e2e8f3, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0xa56e7e8b, __VMLINUX_SYMBOL_STR(drm_vma_node_is_allowed) },
	{ 0x906c410b, __VMLINUX_SYMBOL_STR(drm_fb_helper_sys_copyarea) },
	{ 0x5935a61a, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x8cd8d090, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x36379677, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0xe25bf7aa, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_disable) },
	{ 0x84c3276a, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0xc190d2b7, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x93fff143, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0x155dc37b, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x2ac0c331, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x7cc41a18, __VMLINUX_SYMBOL_STR(drm_gem_fb_destroy) },
	{ 0xc12b0a17, __VMLINUX_SYMBOL_STR(ttm_bo_mmap) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,ttm";

MODULE_ALIAS("pci:v00001013d000000B8sv00001AF4sd00001100bc*sc*i*");
MODULE_ALIAS("pci:v00001013d000000B8sv00005853sd00000001bc*sc*i*");

MODULE_INFO(srcversion, "99CBB5A462BD7E16ACEF42A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

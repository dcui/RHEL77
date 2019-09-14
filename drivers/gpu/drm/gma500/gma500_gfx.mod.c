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
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x6219fe41, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x146fd7bf, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x347cd7dc, __VMLINUX_SYMBOL_STR(drm_fb_helper_ioctl) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xba954a0e, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x2101714a, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_config) },
	{ 0xfa4b59e1, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9276b715, __VMLINUX_SYMBOL_STR(drm_helper_resume_force_mode) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x3af74cf9, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0x9dbfbd69, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0x8bd590db, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0x7af17f0c, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_fillrect) },
	{ 0x49dc84dd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x18a84409, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0x95e4c2a1, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xb80a6031, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x8ab88e7f, __VMLINUX_SYMBOL_STR(drm_format_info) },
	{ 0x686508ee, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0x36ee802d, __VMLINUX_SYMBOL_STR(drm_gem_fb_create_handle) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20b789fe, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x45449b56, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xb38bfe2f, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x439afe73, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0xc5a534a5, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0x183e2a7b, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x34f83fed, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc3d47a6a, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7baababe, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6d8753e9, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0x4e3f09ab, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x68608718, __VMLINUX_SYMBOL_STR(set_pages_array_wc) },
	{ 0x26ed84b, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x88b38c6c, __VMLINUX_SYMBOL_STR(drm_object_property_set_value) },
	{ 0x236b500f, __VMLINUX_SYMBOL_STR(pm_runtime_forbid) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x2f064b55, __VMLINUX_SYMBOL_STR(allocate_resource) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0x8826c13b, __VMLINUX_SYMBOL_STR(acpi_video_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x93f60b88, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xa6f8da46, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x7a67705d, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x40f5436b, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0xf56fedab, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x88ab6fe3, __VMLINUX_SYMBOL_STR(kgdb_active) },
	{ 0x15c361a2, __VMLINUX_SYMBOL_STR(drm_connector_update_edid_property) },
	{ 0x935daa19, __VMLINUX_SYMBOL_STR(drm_helper_connector_dpms) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x14551a62, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0x812449bc, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_copyarea) },
	{ 0x5bbdc39c, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x33d120a0, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0xe63d271c, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1b12fcb9, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0xf61f8609, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x83f0d409, __VMLINUX_SYMBOL_STR(drm_put_dev) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0x39c33912, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0x63088b32, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x1ae7df04, __VMLINUX_SYMBOL_STR(drm_gem_object_put_unlocked) },
	{ 0xcdc254db, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6cbda93b, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x255c8d90, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x7f32856a, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xb7894c75, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x88e304a0, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x4fa653b2, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xfee75298, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0xceef775, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0xba6d2d3c, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x3993082b, __VMLINUX_SYMBOL_STR(drm_helper_crtc_in_use) },
	{ 0x28a636e9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x584e6c9c, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0xa3f6862f, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x96cf254c, __VMLINUX_SYMBOL_STR(drm_fb_helper_output_poll_changed) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x20fb2685, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xb9281f05, __VMLINUX_SYMBOL_STR(set_pages_array_wb) },
	{ 0x947d83a0, __VMLINUX_SYMBOL_STR(i2c_add_numbered_adapter) },
	{ 0x4942c59d, __VMLINUX_SYMBOL_STR(drm_mode_create_scaling_mode_property) },
	{ 0x5944d015, __VMLINUX_SYMBOL_STR(__cachemode2pte_tbl) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0x4487e41f, __VMLINUX_SYMBOL_STR(drm_framebuffer_unregister_private) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x43556119, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x7cd5a893, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xf8fb896f, __VMLINUX_SYMBOL_STR(drm_object_property_get_value) },
	{ 0xa7d9e4a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x3fda5f7a, __VMLINUX_SYMBOL_STR(drm_get_pci_dev) },
	{ 0x4a2ebb9e, __VMLINUX_SYMBOL_STR(drm_crtc_helper_set_mode) },
	{ 0x21f92f6a, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x69779953, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x263122f8, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0x9b65b021, __VMLINUX_SYMBOL_STR(set_pages_wb) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x910538ff, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xd5050155, __VMLINUX_SYMBOL_STR(drm_connector_attach_encoder) },
	{ 0x9d3093b6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xabda77d3, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x48c53d55, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0x5b33b9ae, __VMLINUX_SYMBOL_STR(drm_crtc_init) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xda4a5241, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x626b3e6, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0x69a002eb, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x5ede9448, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x150b438, __VMLINUX_SYMBOL_STR(vm_insert_mixed) },
	{ 0xacc58df4, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xaa842170, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x152d4c3b, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x68c7263, __VMLINUX_SYMBOL_STR(ioremap_cache) },
	{ 0x751bad00, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_imageblit) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe176833a, __VMLINUX_SYMBOL_STR(set_pages_uc) },
	{ 0x17b881f6, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0x4d578f4d, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0x58af4a0f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2109a78c, __VMLINUX_SYMBOL_STR(drm_dbg) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x4f2287af, __VMLINUX_SYMBOL_STR(i2c_bit_add_bus) },
	{ 0x911df1c, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xced69203, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x42a9afa2, __VMLINUX_SYMBOL_STR(drm_helper_disable_unused_functions) },
	{ 0x971f09a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0xaf1cd715, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0xb9b133a9, __VMLINUX_SYMBOL_STR(drm_fb_helper_lastclose) },
	{ 0x60e2e8f3, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0xe8abeb5d, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xd059677d, __VMLINUX_SYMBOL_STR(i2c_get_adapter) },
	{ 0x3ad3b9d7, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0xdd9449cb, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x5935a61a, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0x8cd8d090, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x36379677, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x2a6e6109, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xc430283a, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0xc190d2b7, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x93fff143, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x155dc37b, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0xdf289dfe, __VMLINUX_SYMBOL_STR(vm_insert_pfn) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x2ac0c331, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x3c7d8616, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0x53108e44, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x7cc41a18, __VMLINUX_SYMBOL_STR(drm_gem_fb_destroy) },
	{ 0x18c32162, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,video,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00008108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008109sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004102sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004104sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004105sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004106sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004107sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00004108sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BE9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000BEFsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BC69EFBDBAB423A6999B55E");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

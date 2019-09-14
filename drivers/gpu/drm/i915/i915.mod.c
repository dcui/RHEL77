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
	{ 0xd0298b8b, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0xe540ce14, __VMLINUX_SYMBOL_STR(drm_vblank_restore) },
	{ 0x42595e58, __VMLINUX_SYMBOL_STR(vgacon_text_force) },
	{ 0xfb111c36, __VMLINUX_SYMBOL_STR(drm_helper_move_panel_connectors_to_head) },
	{ 0xe4151c38, __VMLINUX_SYMBOL_STR(drm_mode_get_hv_timing) },
	{ 0x54554948, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x8487a2b6, __VMLINUX_SYMBOL_STR(flush_work) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x931f05d3, __VMLINUX_SYMBOL_STR(ktime_get_raw) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x823c19ea, __VMLINUX_SYMBOL_STR(iosf_mbi_unregister_pmic_bus_access_notifier_unlocked) },
	{ 0xacfa5975, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x6219fe41, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xcc31c1c6, __VMLINUX_SYMBOL_STR(drm_plane_create_color_properties) },
	{ 0xd1776bcf, __VMLINUX_SYMBOL_STR(sync_file_create) },
	{ 0x236d69bb, __VMLINUX_SYMBOL_STR(drm_prime_gem_destroy) },
	{ 0xd238e287, __VMLINUX_SYMBOL_STR(drm_atomic_get_connector_state) },
	{ 0x146fd7bf, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_par) },
	{ 0x9a39d3fe, __VMLINUX_SYMBOL_STR(device_remove_bin_file) },
	{ 0x262f20a8, __VMLINUX_SYMBOL_STR(local_clock) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x1f6ce67a, __VMLINUX_SYMBOL_STR(sg_pcopy_to_buffer) },
	{ 0x347cd7dc, __VMLINUX_SYMBOL_STR(drm_fb_helper_ioctl) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8e86d8, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xb52ee8be, __VMLINUX_SYMBOL_STR(intel_gtt_clear_range) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xba954a0e, __VMLINUX_SYMBOL_STR(__pm_runtime_idle) },
	{ 0x71f10d6e, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part1) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0x266b7638, __VMLINUX_SYMBOL_STR(interval_tree_remove) },
	{ 0x5d74dbcf, __VMLINUX_SYMBOL_STR(pnp_range_reserved) },
	{ 0x4f1cb8bc, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0x36fd4a13, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xfa4b59e1, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0xfd60df2, __VMLINUX_SYMBOL_STR(drm_get_connector_status_name) },
	{ 0x936de6a3, __VMLINUX_SYMBOL_STR(drm_atomic_helper_suspend) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xdd44f696, __VMLINUX_SYMBOL_STR(sync_file_get_fence) },
	{ 0xf5893abf, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xbecd4adb, __VMLINUX_SYMBOL_STR(__gpiod_get) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xa817af86, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_write) },
	{ 0xbd63800, __VMLINUX_SYMBOL_STR(mipi_dsi_set_maximum_return_packet_size) },
	{ 0x5407ae9e, __VMLINUX_SYMBOL_STR(drm_dp_get_dual_mode_type_name) },
	{ 0x38b92934, __VMLINUX_SYMBOL_STR(drm_calc_timestamping_constants) },
	{ 0x9dbfbd69, __VMLINUX_SYMBOL_STR(drm_get_edid) },
	{ 0xa9ee36b2, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_plane) },
	{ 0x86841738, __VMLINUX_SYMBOL_STR(sysfs_remove_bin_file) },
	{ 0x499f000b, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_max_tmds_clock) },
	{ 0xf3c55191, __VMLINUX_SYMBOL_STR(drm_crtc_arm_vblank_event) },
	{ 0xc821665c, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x91fec1cc, __VMLINUX_SYMBOL_STR(drm_rect_calc_vscale) },
	{ 0x49e96999, __VMLINUX_SYMBOL_STR(cond_synchronize_rcu) },
	{ 0xbe18153d, __VMLINUX_SYMBOL_STR(try_wait_for_completion) },
	{ 0x8bd590db, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0x9f13414d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7af17f0c, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_fillrect) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x1e0c2be4, __VMLINUX_SYMBOL_STR(ioremap_wc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x3021cd70, __VMLINUX_SYMBOL_STR(drm_calc_vbltimestamp_from_scanoutpos) },
	{ 0x628121e9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x18a84409, __VMLINUX_SYMBOL_STR(drm_fb_helper_initial_config) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x83b14979, __VMLINUX_SYMBOL_STR(pwm_disable) },
	{ 0x8ea69e7, __VMLINUX_SYMBOL_STR(mipi_dsi_packet_format_is_long) },
	{ 0x708d2acd, __VMLINUX_SYMBOL_STR(get_task_pid) },
	{ 0xafdc7ef4, __VMLINUX_SYMBOL_STR(drm_hdmi_vendor_infoframe_from_display_mode) },
	{ 0x7ded53d6, __VMLINUX_SYMBOL_STR(dummy_con) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0x3906ef29, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x3ad7fea4, __VMLINUX_SYMBOL_STR(drm_wait_one_vblank) },
	{ 0xbb24ba47, __VMLINUX_SYMBOL_STR(intel_gmch_probe) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0x4acd93d3, __VMLINUX_SYMBOL_STR(release_resource) },
	{ 0xb47189b5, __VMLINUX_SYMBOL_STR(reservation_ww_class) },
	{ 0x91feedc2, __VMLINUX_SYMBOL_STR(dma_fence_release) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x7a59ed2c, __VMLINUX_SYMBOL_STR(drm_dp_dsc_sink_line_buf_depth) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x95e4c2a1, __VMLINUX_SYMBOL_STR(pci_unmap_rom) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xaf65264f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_wait_for_dependencies) },
	{ 0xe5764f1b, __VMLINUX_SYMBOL_STR(hrtimer_active) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x970cd85e, __VMLINUX_SYMBOL_STR(drm_gem_dmabuf_release) },
	{ 0xb80a6031, __VMLINUX_SYMBOL_STR(drm_mode_config_cleanup) },
	{ 0x6ba770c8, __VMLINUX_SYMBOL_STR(component_add) },
	{ 0x81188c30, __VMLINUX_SYMBOL_STR(match_string) },
	{ 0x3a41ebdb, __VMLINUX_SYMBOL_STR(drm_modeset_drop_locks) },
	{ 0xd313bb21, __VMLINUX_SYMBOL_STR(vga_get) },
	{ 0xa0d3db3b, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x870e174, __VMLINUX_SYMBOL_STR(drm_plane_create_blend_mode_property) },
	{ 0x4be9d4a3, __VMLINUX_SYMBOL_STR(relay_file_operations) },
	{ 0xe7f3608a, __VMLINUX_SYMBOL_STR(hrtimer_forward) },
	{ 0x8ab88e7f, __VMLINUX_SYMBOL_STR(drm_format_info) },
	{ 0xbcf8808b, __VMLINUX_SYMBOL_STR(drm_connector_set_link_status_property) },
	{ 0x977515c7, __VMLINUX_SYMBOL_STR(pwm_enable) },
	{ 0x9e9eb34c, __VMLINUX_SYMBOL_STR(acpi_check_dsm) },
	{ 0x686508ee, __VMLINUX_SYMBOL_STR(drm_mode_config_reset) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x263ed23b, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r12) },
	{ 0xcfa0c721, __VMLINUX_SYMBOL_STR(irq_to_desc) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7484eab2, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_hw_done) },
	{ 0x9e445746, __VMLINUX_SYMBOL_STR(drm_atomic_state_clear) },
	{ 0x756bd5c6, __VMLINUX_SYMBOL_STR(cpufreq_cpu_get) },
	{ 0x1db7706b, __VMLINUX_SYMBOL_STR(__copy_user_nocache) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x48f2e594, __VMLINUX_SYMBOL_STR(do_unregister_con_driver) },
	{ 0xf08799b2, __VMLINUX_SYMBOL_STR(check_move_unevictable_pages) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xda846989, __VMLINUX_SYMBOL_STR(drm_atomic_helper_page_flip) },
	{ 0xbc42731d, __VMLINUX_SYMBOL_STR(kern_unmount) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x20a789ac, __VMLINUX_SYMBOL_STR(irq_set_chip_data) },
	{ 0xa2bafa40, __VMLINUX_SYMBOL_STR(interval_tree_insert) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x20b789fe, __VMLINUX_SYMBOL_STR(drm_mode_destroy) },
	{ 0x4e68e9be, __VMLINUX_SYMBOL_STR(rb_next_postorder) },
	{ 0xd4c14632, __VMLINUX_SYMBOL_STR(system_unbound_wq) },
	{ 0xc745c36c, __VMLINUX_SYMBOL_STR(drm_match_cea_mode) },
	{ 0x50612798, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x762b70f6, __VMLINUX_SYMBOL_STR(intel_graphics_stolen_res) },
	{ 0x1829d188, __VMLINUX_SYMBOL_STR(wait_woken) },
	{ 0x45449b56, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x80a5b071, __VMLINUX_SYMBOL_STR(drm_dp_dsc_sink_supported_input_bpcs) },
	{ 0x1574392a, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_write_buffer) },
	{ 0xab13ad18, __VMLINUX_SYMBOL_STR(__sg_alloc_table_from_pages) },
	{ 0xe7ab5999, __VMLINUX_SYMBOL_STR(dma_buf_detach) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x94313d7, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x3c02e095, __VMLINUX_SYMBOL_STR(arch_phys_wc_add) },
	{ 0xb38bfe2f, __VMLINUX_SYMBOL_STR(drm_property_create_range) },
	{ 0x5cc509a4, __VMLINUX_SYMBOL_STR(nsecs_to_jiffies) },
	{ 0x2978c7de, __VMLINUX_SYMBOL_STR(drm_atomic_helper_swap_state) },
	{ 0x2a3773a, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_resume) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x47939e0d, __VMLINUX_SYMBOL_STR(__tasklet_hi_schedule) },
	{ 0x99dab631, __VMLINUX_SYMBOL_STR(drm_atomic_get_plane_state) },
	{ 0x439afe73, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_leave) },
	{ 0xf5c2f023, __VMLINUX_SYMBOL_STR(drm_mm_scan_add_block) },
	{ 0xdfa37e7f, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x47c4f7fc, __VMLINUX_SYMBOL_STR(nr_swap_pages) },
	{ 0x72339975, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_all) },
	{ 0x780fdfd1, __VMLINUX_SYMBOL_STR(intel_enable_gtt) },
	{ 0x1a63af34, __VMLINUX_SYMBOL_STR(vga_switcheroo_process_delayed_switch) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0x76ecba05, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_waitqueue) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6df8f4cd, __VMLINUX_SYMBOL_STR(pm_qos_add_request) },
	{ 0x4593ac3b, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_quant_range) },
	{ 0xc5a534a5, __VMLINUX_SYMBOL_STR(backlight_device_register) },
	{ 0x6d2785b5, __VMLINUX_SYMBOL_STR(pm_qos_remove_request) },
	{ 0x2d7e6127, __VMLINUX_SYMBOL_STR(drm_modeset_backoff) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x48a69566, __VMLINUX_SYMBOL_STR(drm_default_rgb_quant_range) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xe5b684bb, __VMLINUX_SYMBOL_STR(__drm_mm_interval_first) },
	{ 0xc8530360, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_set_mst) },
	{ 0x78e979f4, __VMLINUX_SYMBOL_STR(drm_connector_init_panel_orientation_property) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xbf7fd2f5, __VMLINUX_SYMBOL_STR(schedule_timeout_killable) },
	{ 0x4ef692ec, __VMLINUX_SYMBOL_STR(drm_plane_create_rotation_property) },
	{ 0x183e2a7b, __VMLINUX_SYMBOL_STR(drm_helper_probe_single_connector_modes) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb141ac4a, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_duplicated_state) },
	{ 0x34f83fed, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xfff2a8d9, __VMLINUX_SYMBOL_STR(sysfs_create_files) },
	{ 0x7c4806d4, __VMLINUX_SYMBOL_STR(__mmu_notifier_register) },
	{ 0x810d7d35, __VMLINUX_SYMBOL_STR(drm_dp_psr_setup_time) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xb03fbf1, __VMLINUX_SYMBOL_STR(drm_atomic_helper_wait_for_flip_done) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xee91879b, __VMLINUX_SYMBOL_STR(rb_first_postorder) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x4c904ba5, __VMLINUX_SYMBOL_STR(pci_get_class) },
	{ 0x97544bdc, __VMLINUX_SYMBOL_STR(seq_write) },
	{ 0xb26e6b53, __VMLINUX_SYMBOL_STR(intel_gtt_insert_page) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xa47826e4, __VMLINUX_SYMBOL_STR(drm_dp_calc_pbn_mode) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0xc3d47a6a, __VMLINUX_SYMBOL_STR(drm_gem_free_mmap_offset) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0x76a977fe, __VMLINUX_SYMBOL_STR(__get_user_pages_fast) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1d07e365, __VMLINUX_SYMBOL_STR(memdup_user_nul) },
	{ 0x73b1ec5c, __VMLINUX_SYMBOL_STR(hdmi_infoframe_pack) },
	{ 0xb120cea4, __VMLINUX_SYMBOL_STR(get_fs_type) },
	{ 0xf5466760, __VMLINUX_SYMBOL_STR(uuid_is_valid) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0xa91b5561, __VMLINUX_SYMBOL_STR(acpi_video_backlight_support) },
	{ 0xa4664a52, __VMLINUX_SYMBOL_STR(drm_kms_helper_hotplug_event) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf803fe39, __VMLINUX_SYMBOL_STR(bitmap_set) },
	{ 0xc512626a, __VMLINUX_SYMBOL_STR(__supported_pte_mask) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x689db26d, __VMLINUX_SYMBOL_STR(relay_flush) },
	{ 0x7baababe, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x45599a23, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x35f5538d, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_destroy) },
	{ 0x44bae227, __VMLINUX_SYMBOL_STR(bit_wait_timeout) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x758a3812, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0x73ee0082, __VMLINUX_SYMBOL_STR(drm_printf) },
	{ 0x4e3f09ab, __VMLINUX_SYMBOL_STR(drm_vblank_init) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x68608718, __VMLINUX_SYMBOL_STR(set_pages_array_wc) },
	{ 0x779bedf3, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0x26ed84b, __VMLINUX_SYMBOL_STR(drm_encoder_init) },
	{ 0x52e39d59, __VMLINUX_SYMBOL_STR(drm_dp_mst_hpd_irq) },
	{ 0xa2c74782, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_fini) },
	{ 0x78da6d16, __VMLINUX_SYMBOL_STR(drm_pci_free) },
	{ 0xae9bb4d4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xf53a5122, __VMLINUX_SYMBOL_STR(pci_bus_alloc_resource) },
	{ 0x2e56e6b6, __VMLINUX_SYMBOL_STR(drm_connector_list_iter_next) },
	{ 0x44aaf30f, __VMLINUX_SYMBOL_STR(tsc_khz) },
	{ 0x912b5f0b, __VMLINUX_SYMBOL_STR(filter_current_check_discard) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x842eb2ea, __VMLINUX_SYMBOL_STR(shmem_truncate_range) },
	{ 0xbde23fd5, __VMLINUX_SYMBOL_STR(drm_dev_fini) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xda935992, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_connector_duplicate_state) },
	{ 0xf5ce272b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0xab930317, __VMLINUX_SYMBOL_STR(__irq_alloc_descs) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x636c619f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xaf8fc39d, __VMLINUX_SYMBOL_STR(drm_crtc_enable_color_mgmt) },
	{ 0xf4c91ed, __VMLINUX_SYMBOL_STR(ns_to_timespec) },
	{ 0x69aa4023, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_destroy_state) },
	{ 0x60b40fd8, __VMLINUX_SYMBOL_STR(copy_user_enhanced_fast_string) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x86efb7da, __VMLINUX_SYMBOL_STR(drm_scdc_set_high_tmds_clock_ratio) },
	{ 0x787306e7, __VMLINUX_SYMBOL_STR(drm_any_plane_has_format) },
	{ 0xf69fef42, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x4db60b8e, __VMLINUX_SYMBOL_STR(drm_av_sync_delay) },
	{ 0xffc6c87a, __VMLINUX_SYMBOL_STR(drm_detect_monitor_audio) },
	{ 0x8826c13b, __VMLINUX_SYMBOL_STR(acpi_video_register) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x8e82ea92, __VMLINUX_SYMBOL_STR(drm_universal_plane_init) },
	{ 0x9eb590b5, __VMLINUX_SYMBOL_STR(drm_dp_mst_allocate_vcpi) },
	{ 0xf7ef9a79, __VMLINUX_SYMBOL_STR(iosf_mbi_punit_release) },
	{ 0xd900894a, __VMLINUX_SYMBOL_STR(relay_switch_subbuf) },
	{ 0x11fd402c, __VMLINUX_SYMBOL_STR(swiotlb_max_size) },
	{ 0x120eee66, __VMLINUX_SYMBOL_STR(set_page_dirty) },
	{ 0xc35e4b4e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x622063ed, __VMLINUX_SYMBOL_STR(vga_put) },
	{ 0x34871adf, __VMLINUX_SYMBOL_STR(drm_dp_channel_eq_ok) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x93f60b88, __VMLINUX_SYMBOL_STR(drm_connector_cleanup) },
	{ 0xa6f8da46, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x3da171f9, __VMLINUX_SYMBOL_STR(pci_mem_start) },
	{ 0xe196a9f7, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xa3b50673, __VMLINUX_SYMBOL_STR(__mmdrop) },
	{ 0x57a6ccd0, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc10ca2e1, __VMLINUX_SYMBOL_STR(kobject_create_and_add) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x39854c, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_plane_duplicate_state) },
	{  0x3d853, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0x204c0d27, __VMLINUX_SYMBOL_STR(pm_runtime_no_callbacks) },
	{ 0x7a67705d, __VMLINUX_SYMBOL_STR(drm_fb_helper_unregister_fbi) },
	{ 0x1f5dc309, __VMLINUX_SYMBOL_STR(drm_atomic_set_mode_for_crtc) },
	{ 0x93f02018, __VMLINUX_SYMBOL_STR(reservation_object_add_shared_fence) },
	{ 0x4d48c0d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_duplicate_state) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xd9a50cab, __VMLINUX_SYMBOL_STR(__drm_puts_seq_file) },
	{ 0xe42afaa0, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_crtc_duplicate_state) },
	{ 0xc631580a, __VMLINUX_SYMBOL_STR(console_unlock) },
	{ 0x372eb506, __VMLINUX_SYMBOL_STR(drm_connector_attach_content_protection_property) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x40f5436b, __VMLINUX_SYMBOL_STR(drm_fb_helper_pan_display) },
	{ 0x5aa39404, __VMLINUX_SYMBOL_STR(drm_atomic_helper_update_legacy_modeset_state) },
	{ 0xefa54a9d, __VMLINUX_SYMBOL_STR(atomic_notifier_call_chain) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x57e9272b, __VMLINUX_SYMBOL_STR(drm_atomic_helper_set_config) },
	{ 0xf56fedab, __VMLINUX_SYMBOL_STR(drm_handle_vblank) },
	{ 0xb376fb96, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_set_tmds_output) },
	{ 0x3ffe3ea8, __VMLINUX_SYMBOL_STR(vga_switcheroo_unregister_client) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x7bc28a55, __VMLINUX_SYMBOL_STR(drm_mm_scan_init_with_range) },
	{ 0x66a1f375, __VMLINUX_SYMBOL_STR(drm_plane_create_alpha_property) },
	{ 0x654504f5, __VMLINUX_SYMBOL_STR(drm_dp_mst_deallocate_vcpi) },
	{ 0xc62f7aa9, __VMLINUX_SYMBOL_STR(drm_dp_check_act_status) },
	{ 0xef6c3f70, __VMLINUX_SYMBOL_STR(round_jiffies_up_relative) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0x15c361a2, __VMLINUX_SYMBOL_STR(drm_connector_update_edid_property) },
	{ 0xc1447056, __VMLINUX_SYMBOL_STR(drm_fb_helper_set_suspend) },
	{ 0xb8e7ce2c, __VMLINUX_SYMBOL_STR(__put_user_8) },
	{ 0x73d6ff38, __VMLINUX_SYMBOL_STR(drm_syncobj_free) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf30965ac, __VMLINUX_SYMBOL_STR(iosf_mbi_register_pmic_bus_access_notifier) },
	{ 0xda9ac285, __VMLINUX_SYMBOL_STR(drm_dev_put) },
	{ 0xa0b5b192, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0xe2253bd7, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xe102903b, __VMLINUX_SYMBOL_STR(drm_mm_init) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xd4d7370c, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x1df12f06, __VMLINUX_SYMBOL_STR(relay_close) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x14551a62, __VMLINUX_SYMBOL_STR(drm_irq_install) },
	{ 0x3b1e6c42, __VMLINUX_SYMBOL_STR(drm_dp_downstream_debug) },
	{ 0x6e6614b8, __VMLINUX_SYMBOL_STR(drm_atomic_state_alloc) },
	{ 0x29eba37f, __VMLINUX_SYMBOL_STR(current_is_async) },
	{ 0xe81ef1dd, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0x812449bc, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_copyarea) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x711a004a, __VMLINUX_SYMBOL_STR(drm_dp_link_rate_to_bw_code) },
	{ 0xfa4aa72f, __VMLINUX_SYMBOL_STR(drm_mode_copy) },
	{ 0x188d74cd, __VMLINUX_SYMBOL_STR(drm_noop) },
	{ 0x76212ad1, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0xd35c8b23, __VMLINUX_SYMBOL_STR(drm_atomic_commit) },
	{ 0x752d5f5b, __VMLINUX_SYMBOL_STR(kstrtobool) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xd98eec1f, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0x127b8725, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x6bd4a5a8, __VMLINUX_SYMBOL_STR(drm_atomic_helper_commit_cleanup_done) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x629c05e1, __VMLINUX_SYMBOL_STR(drm_clflush_sg) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd24028cd, __VMLINUX_SYMBOL_STR(debugfs_create_ulong) },
	{ 0x33d120a0, __VMLINUX_SYMBOL_STR(drm_mode_set_name) },
	{ 0x2f033954, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_plane_reset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xeb36fe0, __VMLINUX_SYMBOL_STR(dma_fence_init) },
	{ 0xf209143e, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_put) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xe63d271c, __VMLINUX_SYMBOL_STR(drm_helper_mode_fill_fb_struct) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1b12fcb9, __VMLINUX_SYMBOL_STR(drm_object_attach_property) },
	{ 0x78a4e4ad, __VMLINUX_SYMBOL_STR(drm_atomic_state_default_release) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xe15f42bb, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x42f90a31, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x48d7ef55, __VMLINUX_SYMBOL_STR(drm_dsc_pps_infoframe_pack) },
	{ 0xa93939bb, __VMLINUX_SYMBOL_STR(drm_atomic_helper_prepare_planes) },
	{ 0xf61f8609, __VMLINUX_SYMBOL_STR(drm_mode_duplicate) },
	{ 0x54677dd5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x722adbfd, __VMLINUX_SYMBOL_STR(drm_mode_create_tv_properties) },
	{ 0x157f6ce4, __VMLINUX_SYMBOL_STR(drm_helper_probe_detect) },
	{ 0x433f5f87, __VMLINUX_SYMBOL_STR(drm_has_preferred_mode) },
	{ 0x1ebf6c2a, __VMLINUX_SYMBOL_STR(pci_power_names) },
	{ 0x30a4cc09, __VMLINUX_SYMBOL_STR(drm_crtc_init_with_planes) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7023bea8, __VMLINUX_SYMBOL_STR(unregister_acpi_notifier) },
	{ 0x9c7ef2bd, __VMLINUX_SYMBOL_STR(__devm_gpiod_get_index) },
	{ 0x3c5c2383, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_plane_state) },
	{ 0xe5772d4a, __VMLINUX_SYMBOL_STR(copy_user_generic_string) },
	{ 0x416ac10e, __VMLINUX_SYMBOL_STR(pm_runtime_get_if_in_use) },
	{ 0xa8621c5e, __VMLINUX_SYMBOL_STR(drm_atomic_set_crtc_for_connector) },
	{ 0x34809f28, __VMLINUX_SYMBOL_STR(mmu_notifier_unregister) },
	{ 0x39c33912, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0xa5f14f4, __VMLINUX_SYMBOL_STR(drm_dp_mst_reset_vcpi_slots) },
	{ 0xdf0060c7, __VMLINUX_SYMBOL_STR(drm_mm_reserve_node) },
	{ 0xac41c6d8, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xad039c54, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x3a32839e, __VMLINUX_SYMBOL_STR(intel_gtt_chipset_flush) },
	{ 0x63088b32, __VMLINUX_SYMBOL_STR(pci_map_rom) },
	{ 0x98e47d2, __VMLINUX_SYMBOL_STR(drm_dp_link_train_clock_recovery_delay) },
	{ 0x7618aaff, __VMLINUX_SYMBOL_STR(dma_buf_fd) },
	{ 0x6283e9a7, __VMLINUX_SYMBOL_STR(apply_to_page_range) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xa77858bb, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_voltage) },
	{ 0x479c3c86, __VMLINUX_SYMBOL_STR(find_next_zero_bit) },
	{ 0x60a32f0e, __VMLINUX_SYMBOL_STR(drm_connector_attach_scaling_mode_property) },
	{ 0xbec4ad65, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_on) },
	{ 0xb3172c2b, __VMLINUX_SYMBOL_STR(dma_buf_put) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xcdc254db, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_var) },
	{ 0x94cbf6d4, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0x62527867, __VMLINUX_SYMBOL_STR(drm_plane_from_index) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xba588112, __VMLINUX_SYMBOL_STR(drm_atomic_state_init) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf3808cb1, __VMLINUX_SYMBOL_STR(get_state_synchronize_rcu) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x4492645d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xd7a7035d, __VMLINUX_SYMBOL_STR(drm_dp_dsc_sink_max_slice_count) },
	{ 0x5a921311, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xfbaaf01e, __VMLINUX_SYMBOL_STR(console_lock) },
	{ 0x6e6b439f, __VMLINUX_SYMBOL_STR(sched_setscheduler_nocheck) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x4c48a854, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x79e69460, __VMLINUX_SYMBOL_STR(intel_iommu_gfx_mapped) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x593c1bac, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rbx) },
	{ 0x9e9fdd9d, __VMLINUX_SYMBOL_STR(memunmap) },
	{ 0x19ee3d71, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x5e51cd74, __VMLINUX_SYMBOL_STR(swiotlb_nr_tbl) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9c96daa1, __VMLINUX_SYMBOL_STR(drm_mm_scan_color_evict) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x52ba6916, __VMLINUX_SYMBOL_STR(vga_client_register) },
	{ 0xae94e321, __VMLINUX_SYMBOL_STR(drm_probe_ddc) },
	{ 0x6cbda93b, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0x802d0e93, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfb6eedf9, __VMLINUX_SYMBOL_STR(power_group_name) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xe10263ba, __VMLINUX_SYMBOL_STR(drm_modeset_lock_single_interruptible) },
	{ 0xe420387, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_suspend) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x255c8d90, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x91a6fb64, __VMLINUX_SYMBOL_STR(dma_fence_free) },
	{ 0xdec2e8c6, __VMLINUX_SYMBOL_STR(sysfs_merge_group) },
	{ 0x7f32856a, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0xd96babb4, __VMLINUX_SYMBOL_STR(interval_tree_iter_next) },
	{ 0x84fd2dc6, __VMLINUX_SYMBOL_STR(dma_fence_signal) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe7822b34, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_timeout) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x4615ce44, __VMLINUX_SYMBOL_STR(drm_dp_downstream_max_bpc) },
	{ 0xb7894c75, __VMLINUX_SYMBOL_STR(drm_add_edid_modes) },
	{ 0x802ad561, __VMLINUX_SYMBOL_STR(__drm_atomic_helper_connector_reset) },
	{ 0x2e44eeb5, __VMLINUX_SYMBOL_STR(drm_dp_atomic_release_vcpi_slots) },
	{ 0x9b36baa6, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x88e304a0, __VMLINUX_SYMBOL_STR(drm_property_add_enum) },
	{ 0xa724257f, __VMLINUX_SYMBOL_STR(init_uts_ns) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xb8aab8f9, __VMLINUX_SYMBOL_STR(drm_dp_atomic_find_vcpi_slots) },
	{ 0xa25e8997, __VMLINUX_SYMBOL_STR(pid_task) },
	{ 0xcb312692, __VMLINUX_SYMBOL_STR(drm_dp_aux_unregister) },
	{ 0x3cd32b71, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xf2afc8b6, __VMLINUX_SYMBOL_STR(radix_tree_next_chunk) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x970a7f46, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x5a0b73d0, __VMLINUX_SYMBOL_STR(zlib_deflateInit2) },
	{ 0x3c9684fe, __VMLINUX_SYMBOL_STR(dma_fence_context_alloc) },
	{ 0xedf3cc6f, __VMLINUX_SYMBOL_STR(get_random_long) },
	{ 0x476f53e0, __VMLINUX_SYMBOL_STR(dma_buf_unmap_attachment) },
	{ 0x9c6cf0bb, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0xabbd8851, __VMLINUX_SYMBOL_STR(drm_atomic_set_fb_for_plane) },
	{ 0xad73cd4b, __VMLINUX_SYMBOL_STR(debugfs_create_bool) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xf1f8603, __VMLINUX_SYMBOL_STR(mipi_dsi_generic_write) },
	{ 0x3b4ceb4a, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x923de05d, __VMLINUX_SYMBOL_STR(drm_fb_helper_add_one_connector) },
	{ 0x637ec6ba, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all_ctx) },
	{ 0x89c14c58, __VMLINUX_SYMBOL_STR(relay_buf_full) },
	{ 0xe6e3b875, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x70eeb0b5, __VMLINUX_SYMBOL_STR(sysfs_unmerge_group) },
	{ 0xf09de776, __VMLINUX_SYMBOL_STR(get_random_int) },
	{ 0x5d4a26fc, __VMLINUX_SYMBOL_STR(drm_debugfs_create_files) },
	{ 0x3145216f, __VMLINUX_SYMBOL_STR(pci_dev_present) },
	{ 0x3de2640, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x98d6aff4, __VMLINUX_SYMBOL_STR(memset64) },
	{ 0xf7cd21f2, __VMLINUX_SYMBOL_STR(con_is_bound) },
	{ 0x2ac415c0, __VMLINUX_SYMBOL_STR(release_pages) },
	{ 0xa5e75e9a, __VMLINUX_SYMBOL_STR(acpi_evaluate_dsm) },
	{ 0x1dd71f7a, __VMLINUX_SYMBOL_STR(drm_err) },
	{ 0x4fa653b2, __VMLINUX_SYMBOL_STR(drm_connector_init) },
	{ 0xae05dc84, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_enable) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x200df995, __VMLINUX_SYMBOL_STR(shmem_file_setup) },
	{ 0xc617f82c, __VMLINUX_SYMBOL_STR(unregister_oom_notifier) },
	{ 0x3ce31c81, __VMLINUX_SYMBOL_STR(vga_con) },
	{ 0x3c483012, __VMLINUX_SYMBOL_STR(radix_tree_delete) },
	{ 0xcc85fcb6, __VMLINUX_SYMBOL_STR(async_schedule) },
	{ 0xfee75298, __VMLINUX_SYMBOL_STR(drm_fb_helper_prepare) },
	{ 0xceef775, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0xcf91794a, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xb0720dde, __VMLINUX_SYMBOL_STR(pwm_config) },
	{ 0x5e73c9de, __VMLINUX_SYMBOL_STR(drm_modeset_unlock) },
	{ 0xae43c050, __VMLINUX_SYMBOL_STR(drm_dp_mst_dump_topology) },
	{ 0xba6d2d3c, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0x1061dd77, __VMLINUX_SYMBOL_STR(drm_modeset_lock) },
	{ 0xc1092877, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0xf11543ff, __VMLINUX_SYMBOL_STR(find_first_zero_bit) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x7a45377b, __VMLINUX_SYMBOL_STR(acpi_video_unregister) },
	{ 0xcaef1b77, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x20645642, __VMLINUX_SYMBOL_STR(drm_debug) },
	{ 0xac1a55be, __VMLINUX_SYMBOL_STR(unregister_reboot_notifier) },
	{ 0xc5ab1e79, __VMLINUX_SYMBOL_STR(drm_crtc_wait_one_vblank) },
	{ 0x8b90c524, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0xbfd45930, __VMLINUX_SYMBOL_STR(stop_machine) },
	{ 0x4ea1f5a2, __VMLINUX_SYMBOL_STR(drm_gem_object_free) },
	{ 0x9c491f60, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0xb21afa4, __VMLINUX_SYMBOL_STR(kthread_unpark) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x5f31288f, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xdcc3a419, __VMLINUX_SYMBOL_STR(copy_user_generic_unrolled) },
	{ 0x6a6b7581, __VMLINUX_SYMBOL_STR(drm_atomic_get_crtc_state) },
	{ 0xef5079eb, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x26e5fe48, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0x651a4139, __VMLINUX_SYMBOL_STR(test_taint) },
	{ 0xf7b05897, __VMLINUX_SYMBOL_STR(idr_is_empty) },
	{ 0xfeb44a7, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xa6ffec60, __VMLINUX_SYMBOL_STR(woken_wake_function) },
	{ 0xddb37d2a, __VMLINUX_SYMBOL_STR(drm_dev_printk) },
	{ 0x28a636e9, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xe681d186, __VMLINUX_SYMBOL_STR(drm_framebuffer_remove) },
	{ 0x584e6c9c, __VMLINUX_SYMBOL_STR(drm_mode_set_crtcinfo) },
	{ 0x533a37c2, __VMLINUX_SYMBOL_STR(drm_plane_cleanup) },
	{ 0xf51ae235, __VMLINUX_SYMBOL_STR(touch_nmi_watchdog) },
	{ 0xa3f6862f, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x16e297c3, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0x1790ecf0, __VMLINUX_SYMBOL_STR(drm_atomic_helper_legacy_gamma_set) },
	{ 0x2da2e56c, __VMLINUX_SYMBOL_STR(drm_property_create_enum) },
	{ 0xb9d025c9, __VMLINUX_SYMBOL_STR(llist_del_first) },
	{ 0x76d451c4, __VMLINUX_SYMBOL_STR(add_taint) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd11b7a3e, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xcc41a21d, __VMLINUX_SYMBOL_STR(memset32) },
	{ 0x1bffc563, __VMLINUX_SYMBOL_STR(drm_mode_create) },
	{ 0x2f471678, __VMLINUX_SYMBOL_STR(handle_simple_irq) },
	{ 0x20fb2685, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x5bd171bc, __VMLINUX_SYMBOL_STR(drm_lspcon_get_mode) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x1c5b1f28, __VMLINUX_SYMBOL_STR(irq_free_descs) },
	{ 0x6f36c782, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xdb32f04f, __VMLINUX_SYMBOL_STR(drm_mode_hsync) },
	{ 0x4f94f1ba, __VMLINUX_SYMBOL_STR(idr_get_next) },
	{ 0xb2fd5ceb, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x943d1b02, __VMLINUX_SYMBOL_STR(intel_gtt_get) },
	{ 0xfd0160aa, __VMLINUX_SYMBOL_STR(drm_atomic_set_crtc_for_plane) },
	{ 0x41d9a685, __VMLINUX_SYMBOL_STR(drm_syncobj_replace_fence) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0xb9281f05, __VMLINUX_SYMBOL_STR(set_pages_array_wb) },
	{ 0x215a3b15, __VMLINUX_SYMBOL_STR(dma_buf_map_attachment) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x7ba5423a, __VMLINUX_SYMBOL_STR(drm_connector_list_iter_end) },
	{ 0x7473ff3, __VMLINUX_SYMBOL_STR(pagecache_write_end) },
	{ 0x1aa4c8bf, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0x32b31a8c, __VMLINUX_SYMBOL_STR(ktime_get_boottime) },
	{ 0xfe916dc6, __VMLINUX_SYMBOL_STR(hex_dump_to_buffer) },
	{ 0xba58ce27, __VMLINUX_SYMBOL_STR(drm_atomic_helper_connector_destroy_state) },
	{ 0x9b06170b, __VMLINUX_SYMBOL_STR(kmem_cache_shrink) },
	{ 0x3517383e, __VMLINUX_SYMBOL_STR(register_reboot_notifier) },
	{ 0x7711d48a, __VMLINUX_SYMBOL_STR(drm_gem_dmabuf_export) },
	{ 0x973fa82e, __VMLINUX_SYMBOL_STR(register_acpi_notifier) },
	{ 0xf82ec573, __VMLINUX_SYMBOL_STR(rb_prev) },
	{ 0x40d04664, __VMLINUX_SYMBOL_STR(console_trylock) },
	{ 0x2d421045, __VMLINUX_SYMBOL_STR(dma_fence_default_wait) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xac3d20e2, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0x7bb16232, __VMLINUX_SYMBOL_STR(irq_set_chip_and_handler_name) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x84f89b75, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_reset) },
	{ 0xe9f7149c, __VMLINUX_SYMBOL_STR(zlib_deflate_workspacesize) },
	{ 0x500b6dd7, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0xd52bd764, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x32f730e3, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0x9cb986f2, __VMLINUX_SYMBOL_STR(vmalloc_base) },
	{ 0xe2432c71, __VMLINUX_SYMBOL_STR(drm_dp_dual_mode_detect) },
	{ 0x43556119, __VMLINUX_SYMBOL_STR(drm_fb_helper_check_var) },
	{ 0x7cd5a893, __VMLINUX_SYMBOL_STR(drm_gem_private_object_init) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x76ec2d5d, __VMLINUX_SYMBOL_STR(drm_mode_create_aspect_ratio_property) },
	{ 0x84e924ba, __VMLINUX_SYMBOL_STR(drm_dp_get_adjust_request_pre_emphasis) },
	{ 0xa7d9e4a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_blank) },
	{ 0xc4aec4f7, __VMLINUX_SYMBOL_STR(anon_inode_getfd) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xa72f765, __VMLINUX_SYMBOL_STR(drm_clflush_virt_range) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x6d334118, __VMLINUX_SYMBOL_STR(__get_user_8) },
	{ 0xc75bdfd9, __VMLINUX_SYMBOL_STR(drm_dp_mst_get_edid) },
	{ 0x8f1e8b5c, __VMLINUX_SYMBOL_STR(vga_switcheroo_client_fb_set) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0x2442642a, __VMLINUX_SYMBOL_STR(drm_irq_uninstall) },
	{ 0xb515d10, __VMLINUX_SYMBOL_STR(unregister_shrinker2) },
	{ 0xfb9d2763, __VMLINUX_SYMBOL_STR(drm_dev_init) },
	{ 0x8e332829, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x6e8bf789, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x622c7922, __VMLINUX_SYMBOL_STR(register_oom_notifier) },
	{ 0xae1bcb49, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xb01b1db8, __VMLINUX_SYMBOL_STR(intel_gtt_insert_sg_entries) },
	{ 0xb053adda, __VMLINUX_SYMBOL_STR(drm_rect_rotate) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x32e0c40a, __VMLINUX_SYMBOL_STR(do_take_over_console) },
	{ 0x2ff063b5, __VMLINUX_SYMBOL_STR(acpi_get_name) },
	{ 0x21f92f6a, __VMLINUX_SYMBOL_STR(drm_mode_debug_printmodeline) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x3f049e46, __VMLINUX_SYMBOL_STR(drm_dp_aux_init) },
	{ 0x668e1c51, __VMLINUX_SYMBOL_STR(drm_crtc_accurate_vblank_count) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0x9b720312, __VMLINUX_SYMBOL_STR(acpi_target_system_state) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x910538ff, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xd5050155, __VMLINUX_SYMBOL_STR(drm_connector_attach_encoder) },
	{ 0x163251c8, __VMLINUX_SYMBOL_STR(drm_dp_link_train_channel_eq_delay) },
	{ 0x4a758854, __VMLINUX_SYMBOL_STR(drm_crtc_send_vblank_event) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0xa17fb880, __VMLINUX_SYMBOL_STR(drm_crtc_vblank_get) },
	{ 0x1703678f, __VMLINUX_SYMBOL_STR(drm_pci_alloc) },
	{ 0xa75b2f28, __VMLINUX_SYMBOL_STR(drm_fb_helper_hotplug_event) },
	{ 0xbb8e169a, __VMLINUX_SYMBOL_STR(vga_switcheroo_handler_flags) },
	{ 0x26ade7cd, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0x16f559d5, __VMLINUX_SYMBOL_STR(drm_mode_object_put) },
	{ 0x155a3b87, __VMLINUX_SYMBOL_STR(drm_dp_mst_topology_mgr_init) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xb540e284, __VMLINUX_SYMBOL_STR(device_create_bin_file) },
	{ 0x3f4547a7, __VMLINUX_SYMBOL_STR(put_unused_fd) },
	{ 0x3b9d009a, __VMLINUX_SYMBOL_STR(drm_format_plane_cpp) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x85e0cdca, __VMLINUX_SYMBOL_STR(dma_fence_wait_timeout) },
	{ 0x79defbe1, __VMLINUX_SYMBOL_STR(kthread_should_park) },
	{ 0xabda77d3, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x7a718643, __VMLINUX_SYMBOL_STR(__radix_tree_insert) },
	{ 0x8aae13b, __VMLINUX_SYMBOL_STR(drm_scdc_read) },
	{ 0xd41fffab, __VMLINUX_SYMBOL_STR(interval_tree_iter_first) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x86dcbdab, __VMLINUX_SYMBOL_STR(drm_atomic_helper_duplicate_state) },
	{ 0x48c53d55, __VMLINUX_SYMBOL_STR(drm_fb_helper_alloc_fbi) },
	{ 0x1a770ac3, __VMLINUX_SYMBOL_STR(drm_detect_hdmi_monitor) },
	{ 0x23337279, __VMLINUX_SYMBOL_STR(drm_atomic_helper_setup_commit) },
	{ 0x2c1a4142, __VMLINUX_SYMBOL_STR(cpufreq_cpu_put) },
	{ 0x79fd28dc, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0xc6c09e43, __VMLINUX_SYMBOL_STR(kstrtobool_from_user) },
	{ 0x61c2a3ce, __VMLINUX_SYMBOL_STR(kthread_park) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x384e70ae, __VMLINUX_SYMBOL_STR(__smp_mb__before_atomic) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x310f02ec, __VMLINUX_SYMBOL_STR(memremap) },
	{ 0x33e9d7fa, __VMLINUX_SYMBOL_STR(dma_buf_attach) },
	{ 0x8bd440a3, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0xaf5517a9, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xf2c43f3f, __VMLINUX_SYMBOL_STR(zlib_deflate) },
	{ 0x99195078, __VMLINUX_SYMBOL_STR(vsnprintf) },
	{ 0xcd91b127, __VMLINUX_SYMBOL_STR(system_highpri_wq) },
	{ 0x55a31774, __VMLINUX_SYMBOL_STR(__drm_printfn_seq_file) },
	{ 0x8b9e7df7, __VMLINUX_SYMBOL_STR(drm_modeset_acquire_init) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xfeff1ea6, __VMLINUX_SYMBOL_STR(dma_fence_add_callback) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x94f4b815, __VMLINUX_SYMBOL_STR(drm_dp_read_desc) },
	{ 0xda4a5241, __VMLINUX_SYMBOL_STR(drm_connector_unregister) },
	{ 0x69a002eb, __VMLINUX_SYMBOL_STR(drm_encoder_cleanup) },
	{ 0x5ede9448, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xeaa18df6, __VMLINUX_SYMBOL_STR(sysfs_remove_files) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x3f614336, __VMLINUX_SYMBOL_STR(__pagevec_release) },
	{ 0xe8a73aaf, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit) },
	{ 0xb2f74fb6, __VMLINUX_SYMBOL_STR(intel_gmch_remove) },
	{ 0xd38a9b15, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_write) },
	{ 0x4c83a22c, __VMLINUX_SYMBOL_STR(zap_vma_ptes) },
	{ 0xd248a22e, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0xb576174c, __VMLINUX_SYMBOL_STR(pci_bus_write_config_byte) },
	{ 0x59637f3d, __VMLINUX_SYMBOL_STR(drm_dp_downstream_max_clock) },
	{ 0xa338aaf2, __VMLINUX_SYMBOL_STR(drm_connector_list_iter_begin) },
	{ 0xe4dc77b2, __VMLINUX_SYMBOL_STR(drm_get_format_name) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe5338ed3, __VMLINUX_SYMBOL_STR(mipi_dsi_attach) },
	{ 0x4a350370, __VMLINUX_SYMBOL_STR(vm_mmap) },
	{ 0xe9573c6a, __VMLINUX_SYMBOL_STR(pwm_put) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xf95322f4, __VMLINUX_SYMBOL_STR(kthread_parkme) },
	{ 0xacc58df4, __VMLINUX_SYMBOL_STR(drm_crtc_cleanup) },
	{ 0xa28078b2, __VMLINUX_SYMBOL_STR(drm_edid_duplicate) },
	{ 0x5e593f51, __VMLINUX_SYMBOL_STR(drm_get_edid_switcheroo) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xf169fcc7, __VMLINUX_SYMBOL_STR(__drm_atomic_state_free) },
	{ 0x26f5d155, __VMLINUX_SYMBOL_STR(drm_atomic_helper_crtc_destroy_state) },
	{ 0x6c94034a, __VMLINUX_SYMBOL_STR(i2c_bit_algo) },
	{ 0xaa842170, __VMLINUX_SYMBOL_STR(drm_mode_config_init) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7ceaf0d5, __VMLINUX_SYMBOL_STR(generic_handle_irq) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x152d4c3b, __VMLINUX_SYMBOL_STR(drm_helper_hpd_irq_event) },
	{ 0xbcacf028, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0xe3177d8d, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_from_display_mode) },
	{ 0x9ba431f4, __VMLINUX_SYMBOL_STR(drm_hdmi_avi_infoframe_content_type) },
	{ 0x9373508b, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0x9900e845, __VMLINUX_SYMBOL_STR(component_del) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb3adaf64, __VMLINUX_SYMBOL_STR(drm_mode_object_get) },
	{ 0x71995c4e, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x801678, __VMLINUX_SYMBOL_STR(flush_scheduled_work) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xa90886d5, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x72392fe6, __VMLINUX_SYMBOL_STR(pv_mmu_ops) },
	{ 0x79142775, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x731dba7a, __VMLINUX_SYMBOL_STR(xen_domain_type) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7ee6d93a, __VMLINUX_SYMBOL_STR(nsecs_to_jiffies64) },
	{ 0x107742a9, __VMLINUX_SYMBOL_STR(drm_get_subpixel_order_name) },
	{ 0xcfb5871c, __VMLINUX_SYMBOL_STR(irq_work_queue) },
	{ 0x69519925, __VMLINUX_SYMBOL_STR(drm_framebuffer_plane_height) },
	{ 0x25a97010, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xbf2316fe, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xb25fa1ee, __VMLINUX_SYMBOL_STR(vga_switcheroo_register_client) },
	{ 0xd2928d25, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0xbffde8ec, __VMLINUX_SYMBOL_STR(compat_alloc_user_space) },
	{ 0xf4fb32a0, __VMLINUX_SYMBOL_STR(drm_dsc_dp_pps_header_init) },
	{ 0x50331c78, __VMLINUX_SYMBOL_STR(invalidate_mapping_pages) },
	{ 0xdb9aea8f, __VMLINUX_SYMBOL_STR(drm_mode_is_420_only) },
	{ 0x9da05e10, __VMLINUX_SYMBOL_STR(mipi_dsi_create_packet) },
	{ 0x8c9e0b6e, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x844a426f, __VMLINUX_SYMBOL_STR(drm_connector_set_path_property) },
	{ 0x751bad00, __VMLINUX_SYMBOL_STR(drm_fb_helper_cfb_imageblit) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xf05c7b8, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r15) },
	{ 0x5d462441, __VMLINUX_SYMBOL_STR(drm_mm_insert_node_in_range) },
	{ 0xd91b234, __VMLINUX_SYMBOL_STR(drm_atomic_helper_cleanup_planes) },
	{ 0x3310bf11, __VMLINUX_SYMBOL_STR(pm_qos_update_request) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x4ca9669f, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x3e906b84, __VMLINUX_SYMBOL_STR(drm_atomic_state_default_clear) },
	{ 0xa8d6809d, __VMLINUX_SYMBOL_STR(drm_dp_bw_code_to_link_rate) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x91286982, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0x4d12338e, __VMLINUX_SYMBOL_STR(drm_fb_helper_remove_one_connector) },
	{ 0x941d807f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_shutdown) },
	{ 0x17b881f6, __VMLINUX_SYMBOL_STR(drm_fb_helper_fini) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4d578f4d, __VMLINUX_SYMBOL_STR(drm_modeset_lock_all) },
	{ 0xc890c008, __VMLINUX_SYMBOL_STR(zlib_deflateEnd) },
	{ 0xe3539f36, __VMLINUX_SYMBOL_STR(drm_mm_takedown) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xfc876d2b, __VMLINUX_SYMBOL_STR(get_pid_task) },
	{ 0xffdd290c, __VMLINUX_SYMBOL_STR(drm_dp_mst_port_has_audio) },
	{ 0x844e3767, __VMLINUX_SYMBOL_STR(radix_tree_lookup) },
	{ 0x33444749, __VMLINUX_SYMBOL_STR(ftrace_print_array_seq) },
	{ 0xcace5945, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xc70b181a, __VMLINUX_SYMBOL_STR(drm_dp_send_power_updown_phy) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2d50570f, __VMLINUX_SYMBOL_STR(drm_rect_calc_hscale) },
	{ 0x631186e4, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_nop) },
	{ 0x9e97e36d, __VMLINUX_SYMBOL_STR(device_rh_alloc) },
	{ 0x2109a78c, __VMLINUX_SYMBOL_STR(drm_dbg) },
	{ 0xb1645a2e, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xa314bd03, __VMLINUX_SYMBOL_STR(relay_open) },
	{ 0x5afd365d, __VMLINUX_SYMBOL_STR(drm_atomic_helper_disable_plane) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x494e3393, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x3c65037d, __VMLINUX_SYMBOL_STR(acpi_video_verify_backlight_support) },
	{ 0xf482d525, __VMLINUX_SYMBOL_STR(kern_mount_data) },
	{ 0xa9d702f0, __VMLINUX_SYMBOL_STR(mipi_dsi_dcs_read) },
	{ 0x5da6ac0c, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_connectors) },
	{ 0x9426d67f, __VMLINUX_SYMBOL_STR(drm_fb_helper_restore_fbdev_mode_unlocked) },
	{ 0x911df1c, __VMLINUX_SYMBOL_STR(drm_mode_probed_add) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x674f358b, __VMLINUX_SYMBOL_STR(drm_dp_update_payload_part2) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf147dcb2, __VMLINUX_SYMBOL_STR(hdmi_spd_infoframe_init) },
	{ 0xced69203, __VMLINUX_SYMBOL_STR(drm_modeset_unlock_all) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x50d68377, __VMLINUX_SYMBOL_STR(arch_phys_wc_del) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe43c4fad, __VMLINUX_SYMBOL_STR(reservation_object_get_fences_rcu) },
	{ 0x45500df7, __VMLINUX_SYMBOL_STR(drm_atomic_add_affected_planes) },
	{ 0x8055d058, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x971f09a0, __VMLINUX_SYMBOL_STR(drm_fb_helper_setcmap) },
	{ 0xc63d847d, __VMLINUX_SYMBOL_STR(ktime_get_mono_fast_ns) },
	{ 0xaf1cd715, __VMLINUX_SYMBOL_STR(drm_property_create) },
	{ 0x1c3638c0, __VMLINUX_SYMBOL_STR(reservation_object_reserve_shared) },
	{ 0x60e2e8f3, __VMLINUX_SYMBOL_STR(drm_framebuffer_init) },
	{ 0xffcd7f49, __VMLINUX_SYMBOL_STR(iosf_mbi_punit_acquire) },
	{ 0xa38602cd, __VMLINUX_SYMBOL_STR(drain_workqueue) },
	{ 0xa34cd357, __VMLINUX_SYMBOL_STR(__drm_printfn_debug) },
	{ 0x5127af2b, __VMLINUX_SYMBOL_STR(drm_mm_remove_node) },
	{ 0x5e15d54c, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0xe8abeb5d, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_init) },
	{ 0x3e882943, __VMLINUX_SYMBOL_STR(pcibios_align_resource) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0xfbc4f89e, __VMLINUX_SYMBOL_STR(io_schedule_timeout) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x9a4b8b0f, __VMLINUX_SYMBOL_STR(drm_dp_dpcd_read) },
	{ 0x8f902a2c, __VMLINUX_SYMBOL_STR(gpiod_set_value) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x6e21663c, __VMLINUX_SYMBOL_STR(drm_dp_mst_detect_port) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xdd9449cb, __VMLINUX_SYMBOL_STR(backlight_device_unregister) },
	{ 0x341ecb92, __VMLINUX_SYMBOL_STR(drm_dp_aux_register) },
	{ 0x5935a61a, __VMLINUX_SYMBOL_STR(drm_fb_helper_fill_fix) },
	{ 0xded7594f, __VMLINUX_SYMBOL_STR(drm_pick_cmdline_mode) },
	{ 0x9ad7a582, __VMLINUX_SYMBOL_STR(iosf_mbi_assert_punit_acquired) },
	{ 0x8cd8d090, __VMLINUX_SYMBOL_STR(drm_connector_register) },
	{ 0x82477240, __VMLINUX_SYMBOL_STR(ida_destroy) },
	{ 0xfcd24a31, __VMLINUX_SYMBOL_STR(drm_syncobj_find) },
	{ 0x3ac1fef9, __VMLINUX_SYMBOL_STR(drm_mode_legacy_fb_format) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x49d91c78, __VMLINUX_SYMBOL_STR(drm_connector_attach_max_bpc_property) },
	{ 0x8f763434, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x36379677, __VMLINUX_SYMBOL_STR(drm_mode_crtc_set_gamma_size) },
	{ 0x1eb1594f, __VMLINUX_SYMBOL_STR(gpiod_put) },
	{ 0xe25bf7aa, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_disable) },
	{ 0x2cc029d3, __VMLINUX_SYMBOL_STR(dma_fence_array_ops) },
	{ 0x84c3276a, __VMLINUX_SYMBOL_STR(drm_mode_object_find) },
	{ 0x4b55313f, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x33b38223, __VMLINUX_SYMBOL_STR(pagecache_write_begin) },
	{ 0xa7746e4a, __VMLINUX_SYMBOL_STR(drm_scdc_set_scrambling) },
	{ 0x160a9f4a, __VMLINUX_SYMBOL_STR(drm_framebuffer_plane_width) },
	{ 0xc430283a, __VMLINUX_SYMBOL_STR(drm_fb_helper_debug_enter) },
	{ 0xc190d2b7, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xfcf9fbe4, __VMLINUX_SYMBOL_STR(dma_fence_signal_locked) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x3cd1b39e, __VMLINUX_SYMBOL_STR(pwm_get) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0x93fff143, __VMLINUX_SYMBOL_STR(drm_fb_helper_init) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x57805a8e, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x155dc37b, __VMLINUX_SYMBOL_STR(drm_fb_helper_single_add_all_connectors) },
	{ 0x91ac822f, __VMLINUX_SYMBOL_STR(vscnprintf) },
	{ 0x15892417, __VMLINUX_SYMBOL_STR(async_synchronize_cookie) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x995b7009, __VMLINUX_SYMBOL_STR(drm_mode_vrefresh) },
	{ 0xabf53b73, __VMLINUX_SYMBOL_STR(drm_mm_scan_remove_block) },
	{ 0xc26e3029, __VMLINUX_SYMBOL_STR(drm_is_current_master) },
	{ 0x2e7a4300, __VMLINUX_SYMBOL_STR(drm_rgb_quant_range_selectable) },
	{ 0xd92afabe, __VMLINUX_SYMBOL_STR(bitmap_clear) },
	{ 0x2ac0c331, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x6c0f70b9, __VMLINUX_SYMBOL_STR(drm_lspcon_set_mode) },
	{ 0x3c7d8616, __VMLINUX_SYMBOL_STR(drm_kms_helper_poll_fini) },
	{ 0x53108e44, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xd05c5dea, __VMLINUX_SYMBOL_STR(drm_color_lut_extract) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xe6700ed, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_planes) },
	{ 0xf96ec70, __VMLINUX_SYMBOL_STR(drm_dp_clock_recovery_ok) },
	{ 0x8c22c09f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_check_modeset) },
	{ 0x10a4962f, __VMLINUX_SYMBOL_STR(drm_atomic_helper_plane_destroy_state) },
	{ 0x6caeae7f, __VMLINUX_SYMBOL_STR(drm_connector_attach_content_type_property) },
	{ 0x18c32162, __VMLINUX_SYMBOL_STR(drm_framebuffer_cleanup) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
	{ 0xbe4aab04, __VMLINUX_SYMBOL_STR(drm_crtc_add_crc_entry) },
	{ 0x829f1c8c, __VMLINUX_SYMBOL_STR(register_shrinker2) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm,drm_kms_helper,iosf_mbi,video,i2c-algo-bit";

MODULE_ALIAS("pci:v00008086d00003577sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002562sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000358Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002572sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002582sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000258Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002592sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002772sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000027AEsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002972sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002982sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002992sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029A2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029C2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000029D2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00002E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A001sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000A011sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000042sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000046sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000102sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000010Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000112sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000122sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000106sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000116sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000126sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv0000152Dsd00008990bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000156sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000166sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000152sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000015Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000162sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000016Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000402sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000040Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D02sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000406sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A0Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D06sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000412sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000041Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D12sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000416sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000426sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A1Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D16sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000422sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000042Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D22sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000C26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A2Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000D26sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F30sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F31sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F32sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000F33sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000157sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000155sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001602sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001606sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000160Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001612sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001616sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000161Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001622sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001626sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000162Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001632sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001636sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000163Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000022B3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000190Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000191Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001932sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000192Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000193Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00000A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00001A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A84sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A85sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003184sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003185sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005913sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005915sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005906sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005902sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005908sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000590Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005916sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005917sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005921sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Esv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005912sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005923sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005926sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005927sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000593Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d0000591Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000087C0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E90sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E93sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E99sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E91sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E92sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E96sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E98sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E9Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003E94sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA9sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA5sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA6sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA7sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA8sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA1sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA4sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA0sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA3sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d000087CAsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00003EA2sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A51sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A59sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A41sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A49sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A52sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A5Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A42sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A4Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A50sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A40sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A54sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A5Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A44sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00005A4Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A50sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A51sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Csv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Dsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A52sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Asv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A5Bsv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A71sv*sd*bc03sc*i*");
MODULE_ALIAS("pci:v00008086d00008A70sv*sd*bc03sc*i*");

MODULE_INFO(srcversion, "55C6B225FB8F16047342708");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x67385784, __VMLINUX_SYMBOL_STR(kvm_get_kvm) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xdf0f75c6, __VMLINUX_SYMBOL_STR(eventfd_signal) },
	{ 0x8df71c1b, __VMLINUX_SYMBOL_STR(mdev_set_drvdata) },
	{ 0x7c309fa6, __VMLINUX_SYMBOL_STR(__srcu_read_unlock) },
	{ 0xc60f57b2, __VMLINUX_SYMBOL_STR(kvm_read_guest) },
	{ 0xef05c78e, __VMLINUX_SYMBOL_STR(vfio_unregister_notifier) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x6729d3df, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x1b7b7d83, __VMLINUX_SYMBOL_STR(mdev_unregister_device) },
	{ 0x9eb64382, __VMLINUX_SYMBOL_STR(mdev_dev) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x45599a23, __VMLINUX_SYMBOL_STR(mmput) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x5e0cb4f8, __VMLINUX_SYMBOL_STR(mdev_register_device) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x3fe38540, __VMLINUX_SYMBOL_STR(mdev_get_drvdata) },
	{ 0x6c28be5a, __VMLINUX_SYMBOL_STR(vfio_info_add_capability) },
	{ 0x780b9186, __VMLINUX_SYMBOL_STR(vfio_register_notifier) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xd24028cd, __VMLINUX_SYMBOL_STR(debugfs_create_ulong) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xda473c51, __VMLINUX_SYMBOL_STR(kvm_slot_page_track_add_page) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x16861536, __VMLINUX_SYMBOL_STR(vfio_device_get_from_dev) },
	{ 0xd67364f7, __VMLINUX_SYMBOL_STR(eventfd_ctx_fdget) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xf7f68d70, __VMLINUX_SYMBOL_STR(kvm_page_track_unregister_notifier) },
	{ 0x2d5c5e50, __VMLINUX_SYMBOL_STR(kvm_is_visible_gfn) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x4c48a854, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x9e9fdd9d, __VMLINUX_SYMBOL_STR(memunmap) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9f6e19ab, __VMLINUX_SYMBOL_STR(mem_section) },
	{ 0xc8ca23b9, __VMLINUX_SYMBOL_STR(vfio_unpin_pages) },
	{ 0xd96a2de6, __VMLINUX_SYMBOL_STR(__srcu_read_lock) },
	{ 0x748f345b, __VMLINUX_SYMBOL_STR(mdev_parent_dev) },
	{ 0x22e9da91, __VMLINUX_SYMBOL_STR(use_mm) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x212941f, __VMLINUX_SYMBOL_STR(kvm_page_track_register_notifier) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x4f94f1ba, __VMLINUX_SYMBOL_STR(idr_get_next) },
	{ 0x53a348aa, __VMLINUX_SYMBOL_STR(kvm_slot_page_track_remove_page) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x40a45405, __VMLINUX_SYMBOL_STR(kvm_write_guest) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x75558302, __VMLINUX_SYMBOL_STR(kvm_put_kvm) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe84cb310, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7385a4bb, __VMLINUX_SYMBOL_STR(mdev_from_dev) },
	{ 0x4fedd62, __VMLINUX_SYMBOL_STR(gfn_to_pfn) },
	{ 0x969c73d9, __VMLINUX_SYMBOL_STR(vfio_device_put) },
	{ 0x9291cd3b, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xadc044b7, __VMLINUX_SYMBOL_STR(vfio_set_irqs_validate_and_prepare) },
	{ 0x941f2aaa, __VMLINUX_SYMBOL_STR(eventfd_ctx_put) },
	{ 0x19567d06, __VMLINUX_SYMBOL_STR(vfio_info_cap_shift) },
	{ 0x9031c2c9, __VMLINUX_SYMBOL_STR(unuse_mm) },
	{ 0xba83f4cf, __VMLINUX_SYMBOL_STR(vfio_pin_pages) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x7b9e88f9, __VMLINUX_SYMBOL_STR(gfn_to_memslot) },
	{ 0x85f5e2aa, __VMLINUX_SYMBOL_STR(krealloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kvm,mdev,vfio";


MODULE_INFO(srcversion, "C7A0AAC8A027506010971B8");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

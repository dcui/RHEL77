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
	{ 0x73ebfb41, __VMLINUX_SYMBOL_STR(drm_gem_prime_export) },
	{ 0x6219fe41, __VMLINUX_SYMBOL_STR(drm_release) },
	{ 0x236d69bb, __VMLINUX_SYMBOL_STR(drm_prime_gem_destroy) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4f1cb8bc, __VMLINUX_SYMBOL_STR(drm_dev_register) },
	{ 0xfa4b59e1, __VMLINUX_SYMBOL_STR(drm_compat_ioctl) },
	{ 0x3af74cf9, __VMLINUX_SYMBOL_STR(drm_gem_put_pages) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x91feedc2, __VMLINUX_SYMBOL_STR(dma_fence_release) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xff3bed90, __VMLINUX_SYMBOL_STR(drm_gem_prime_import_dev) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x779bedf3, __VMLINUX_SYMBOL_STR(platform_device_register_full) },
	{ 0xbde23fd5, __VMLINUX_SYMBOL_STR(drm_dev_fini) },
	{ 0xf5ce272b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x93f02018, __VMLINUX_SYMBOL_STR(reservation_object_add_shared_fence) },
	{ 0x50d1f870, __VMLINUX_SYMBOL_STR(pgprot_writecombine) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xda9ac285, __VMLINUX_SYMBOL_STR(drm_dev_put) },
	{ 0x45c92723, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xd98eec1f, __VMLINUX_SYMBOL_STR(drm_dev_unregister) },
	{ 0x616274a6, __VMLINUX_SYMBOL_STR(drm_prime_pages_to_sg) },
	{ 0xeb36fe0, __VMLINUX_SYMBOL_STR(dma_fence_init) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x39c33912, __VMLINUX_SYMBOL_STR(drm_gem_handle_create) },
	{ 0xac41c6d8, __VMLINUX_SYMBOL_STR(vmap) },
	{ 0x1ae7df04, __VMLINUX_SYMBOL_STR(drm_gem_object_put_unlocked) },
	{ 0x94cbf6d4, __VMLINUX_SYMBOL_STR(shmem_read_mapping_page_gfp) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x255c8d90, __VMLINUX_SYMBOL_STR(drm_gem_object_release) },
	{ 0x91a6fb64, __VMLINUX_SYMBOL_STR(dma_fence_free) },
	{ 0x6343a556, __VMLINUX_SYMBOL_STR(get_zone_device_page) },
	{ 0x7f32856a, __VMLINUX_SYMBOL_STR(drm_read) },
	{ 0x84fd2dc6, __VMLINUX_SYMBOL_STR(dma_fence_signal) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x9b36baa6, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x4fd5cfb9, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x3c9684fe, __VMLINUX_SYMBOL_STR(dma_fence_context_alloc) },
	{ 0xcd1850f2, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xadd2aceb, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xceef775, __VMLINUX_SYMBOL_STR(drm_gem_vm_open) },
	{ 0xba6d2d3c, __VMLINUX_SYMBOL_STR(drm_gem_vm_close) },
	{ 0xc5bc25de, __VMLINUX_SYMBOL_STR(kvmalloc_node) },
	{ 0x26e5fe48, __VMLINUX_SYMBOL_STR(drm_gem_prime_fd_to_handle) },
	{ 0xa3f6862f, __VMLINUX_SYMBOL_STR(drm_ioctl) },
	{ 0x20fb2685, __VMLINUX_SYMBOL_STR(drm_gem_mmap) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x834cfed9, __VMLINUX_SYMBOL_STR(drm_clflush_pages) },
	{ 0xd52bd764, __VMLINUX_SYMBOL_STR(reservation_object_test_signaled_rcu) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xfb9d2763, __VMLINUX_SYMBOL_STR(drm_dev_init) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9d3093b6, __VMLINUX_SYMBOL_STR(drm_gem_object_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x79fd28dc, __VMLINUX_SYMBOL_STR(reservation_object_add_excl_fence) },
	{ 0x8bd440a3, __VMLINUX_SYMBOL_STR(drm_gem_prime_handle_to_fd) },
	{ 0x626b3e6, __VMLINUX_SYMBOL_STR(drm_gem_object_init) },
	{ 0xd248a22e, __VMLINUX_SYMBOL_STR(drm_gem_create_mmap_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x94961283, __VMLINUX_SYMBOL_STR(vunmap) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xd2928d25, __VMLINUX_SYMBOL_STR(ww_mutex_unlock) },
	{ 0xad0e67c, __VMLINUX_SYMBOL_STR(idr_replace) },
	{ 0x2109a78c, __VMLINUX_SYMBOL_STR(drm_dbg) },
	{ 0x494e3393, __VMLINUX_SYMBOL_STR(vm_get_page_prot) },
	{ 0x1e4465e1, __VMLINUX_SYMBOL_STR(drm_prime_sg_to_page_addr_arrays) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1c3638c0, __VMLINUX_SYMBOL_STR(reservation_object_reserve_shared) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x3ad3b9d7, __VMLINUX_SYMBOL_STR(drm_gem_get_pages) },
	{ 0xc190d2b7, __VMLINUX_SYMBOL_STR(drm_poll) },
	{ 0x2ac0c331, __VMLINUX_SYMBOL_STR(drm_open) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=drm";


MODULE_INFO(srcversion, "BD04E88E4F809C501BEA20D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

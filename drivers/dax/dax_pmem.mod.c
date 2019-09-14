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
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xf458bd46, __VMLINUX_SYMBOL_STR(nvdimm_namespace_common_probe) },
	{ 0x60023b99, __VMLINUX_SYMBOL_STR(devm_create_dev_dax) },
	{ 0xfaffbf3a, __VMLINUX_SYMBOL_STR(devm_nsio_disable) },
	{ 0x454b26cd, __VMLINUX_SYMBOL_STR(devm_memremap_pages) },
	{ 0x3d89847b, __VMLINUX_SYMBOL_STR(alloc_dax_region) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xa8aefbcc, __VMLINUX_SYMBOL_STR(devm_nsio_enable) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x1340efc5, __VMLINUX_SYMBOL_STR(__nd_driver_register) },
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xeed48bd, __VMLINUX_SYMBOL_STR(dax_region_put) },
	{ 0xdd57e2b5, __VMLINUX_SYMBOL_STR(percpu_ref_exit) },
	{ 0x76a2d755, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2dab4f41, __VMLINUX_SYMBOL_STR(nvdimm_setup_pfn) },
	{ 0xae1bcb49, __VMLINUX_SYMBOL_STR(__devm_request_region) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3dfc436e, __VMLINUX_SYMBOL_STR(percpu_ref_kill_and_confirm) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb1bf8a0, __VMLINUX_SYMBOL_STR(to_nd_dax) },
	{ 0x733e26b9, __VMLINUX_SYMBOL_STR(devm_remove_action) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e2a42c9, __VMLINUX_SYMBOL_STR(percpu_ref_init) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libnvdimm,device_dax";


MODULE_INFO(srcversion, "0A5AE2DAB7B9B2374DD6A17");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

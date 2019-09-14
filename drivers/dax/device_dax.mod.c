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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc3983b2e, __VMLINUX_SYMBOL_STR(inode_dax) },
	{ 0xdacd8618, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0xa24be4f0, __VMLINUX_SYMBOL_STR(register_fo_extend) },
	{ 0x29d451bd, __VMLINUX_SYMBOL_STR(vmf_insert_pfn_pud) },
	{ 0xf24c04a9, __VMLINUX_SYMBOL_STR(vmf_insert_pfn_pmd) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3f84bcd7, __VMLINUX_SYMBOL_STR(dax_alive) },
	{ 0x7242d92, __VMLINUX_SYMBOL_STR(put_dax) },
	{ 0xd84d35bd, __VMLINUX_SYMBOL_STR(dax_read_lock) },
	{ 0x44e6ecc8, __VMLINUX_SYMBOL_STR(ida_simple_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xa9d8f55e, __VMLINUX_SYMBOL_STR(ida_simple_remove) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x5f6f1e9e, __VMLINUX_SYMBOL_STR(dax_get_private) },
	{ 0x8e07ec8e, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xf6bc6d, __VMLINUX_SYMBOL_STR(dax_inode) },
	{ 0x70687bec, __VMLINUX_SYMBOL_STR(linear_hugepage_index) },
	{ 0x8eee3399, __VMLINUX_SYMBOL_STR(dax_read_unlock) },
	{ 0x76a2d755, __VMLINUX_SYMBOL_STR(devm_add_action) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xfad9c827, __VMLINUX_SYMBOL_STR(kill_dax) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x21b9132, __VMLINUX_SYMBOL_STR(cdev_device_add) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x26ade7cd, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x381e1dfd, __VMLINUX_SYMBOL_STR(alloc_dax) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x150b438, __VMLINUX_SYMBOL_STR(vm_insert_mixed) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9373508b, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0xcd32f5a1, __VMLINUX_SYMBOL_STR(sysfs_create_groups) },
	{ 0x40677d0d, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xc57fc9c0, __VMLINUX_SYMBOL_STR(sysfs_remove_groups) },
	{ 0x450c190, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x7abd4059, __VMLINUX_SYMBOL_STR(cdev_device_del) },
	{ 0xf7490fa, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x5e15d54c, __VMLINUX_SYMBOL_STR(ida_init) },
	{ 0x7e5df8e3, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "04672F9F682248CD2E57014");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

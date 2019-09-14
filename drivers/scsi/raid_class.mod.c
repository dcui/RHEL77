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
	{ 0x9c2657c4, __VMLINUX_SYMBOL_STR(transport_class_register) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x653c1b94, __VMLINUX_SYMBOL_STR(attribute_container_classdev_to_container) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc80e208a, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xed236a69, __VMLINUX_SYMBOL_STR(attribute_container_unregister) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x84ad3f17, __VMLINUX_SYMBOL_STR(attribute_container_register) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc5be78f8, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0xbf9ab1d, __VMLINUX_SYMBOL_STR(transport_class_unregister) },
	{ 0x83eaffe4, __VMLINUX_SYMBOL_STR(attribute_container_find_class_device) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x40677d0d, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0xd374dfba, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf7490fa, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xf790d854, __VMLINUX_SYMBOL_STR(scsi_is_sdev_device) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D28B705A47A6F34EF0D6EE2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

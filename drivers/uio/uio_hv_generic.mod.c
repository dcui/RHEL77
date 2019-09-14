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
	{ 0xd1c7f6c7, __VMLINUX_SYMBOL_STR(vmbus_driver_unregister) },
	{ 0x42396e17, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0x194fd0c2, __VMLINUX_SYMBOL_STR(mark_tech_preview) },
	{ 0x8b90c524, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x9e00d7e6, __VMLINUX_SYMBOL_STR(__uio_register_device) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x350ebc79, __VMLINUX_SYMBOL_STR(vmbus_establish_gpadl) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x9ae0645f, __VMLINUX_SYMBOL_STR(vmbus_connection) },
	{ 0xac05de1c, __VMLINUX_SYMBOL_STR(vmbus_alloc_ring) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd04b279c, __VMLINUX_SYMBOL_STR(vmbus_free_ring) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xd8b10333, __VMLINUX_SYMBOL_STR(uio_unregister_device) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x45a6de9b, __VMLINUX_SYMBOL_STR(vmbus_teardown_gpadl) },
	{ 0x9e754aa6, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbf2316fe, __VMLINUX_SYMBOL_STR(sysfs_create_bin_file) },
	{ 0x9330d234, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0x6c4efe63, __VMLINUX_SYMBOL_STR(uio_event_notify) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x17f60a2, __VMLINUX_SYMBOL_STR(vmbus_connect_ring) },
	{ 0xbddd4ed, __VMLINUX_SYMBOL_STR(vmbus_set_sc_create_callback) },
	{ 0xf3a322be, __VMLINUX_SYMBOL_STR(vmbus_set_chn_rescind_callback) },
	{ 0xe499d563, __VMLINUX_SYMBOL_STR(vmbus_disconnect_ring) },
	{ 0x9b3828a4, __VMLINUX_SYMBOL_STR(vm_iomap_memory) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus,uio";


MODULE_INFO(srcversion, "42575840EAC725133ECD0BF");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

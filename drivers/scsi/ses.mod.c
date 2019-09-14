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
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x1ce2e602, __VMLINUX_SYMBOL_STR(class_interface_unregister) },
	{ 0x593cc3b9, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xc67e00a, __VMLINUX_SYMBOL_STR(scsi_register_interface) },
	{ 0x8ec1f732, __VMLINUX_SYMBOL_STR(__scsi_iterate_devices) },
	{ 0x5a46c012, __VMLINUX_SYMBOL_STR(enclosure_register) },
	{ 0xd64a07b7, __VMLINUX_SYMBOL_STR(sas_get_address) },
	{ 0x33896699, __VMLINUX_SYMBOL_STR(enclosure_for_each_device) },
	{ 0x898e5152, __VMLINUX_SYMBOL_STR(scsi_is_sas_rphy) },
	{ 0x8aa17eb7, __VMLINUX_SYMBOL_STR(enclosure_component_alloc) },
	{ 0xc81dcb9a, __VMLINUX_SYMBOL_STR(enclosure_component_register) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe66404c1, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x65246390, __VMLINUX_SYMBOL_STR(enclosure_add_device) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x7c1c337b, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0x13222a98, __VMLINUX_SYMBOL_STR(enclosure_remove_device) },
	{ 0xe860f91a, __VMLINUX_SYMBOL_STR(enclosure_unregister) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x49e05a86, __VMLINUX_SYMBOL_STR(enclosure_find) },
	{ 0x7e142e03, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=enclosure,scsi_transport_sas";


MODULE_INFO(srcversion, "620F7EFE52880779B8C8944");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

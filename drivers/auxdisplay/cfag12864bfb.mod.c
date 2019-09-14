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
	{ 0xae6fcc76, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x3f469cb0, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0xcb1746e4, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x61aaf493, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0x5f92f539, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0xecb2e5d, __VMLINUX_SYMBOL_STR(cfag12864b_disable) },
	{ 0x9b36baa6, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xee23857b, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0x50d5b739, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x7db9025b, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x3389f926, __VMLINUX_SYMBOL_STR(cfag12864b_enable) },
	{ 0x2ff9464, __VMLINUX_SYMBOL_STR(cfag12864b_isinited) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xbf0bd23, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x6e7ac51d, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x286aed4d, __VMLINUX_SYMBOL_STR(vm_insert_page) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xc48e9d95, __VMLINUX_SYMBOL_STR(cfag12864b_buffer) },
	{ 0x1f81a0d8, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0x6253d0ea, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sysimgblt,syscopyarea,sysfillrect,fb_sys_fops,cfag12864b";


MODULE_INFO(srcversion, "362E36D361B219ABDE667B3");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

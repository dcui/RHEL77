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
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xd1c7f6c7, __VMLINUX_SYMBOL_STR(vmbus_driver_unregister) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x42396e17, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xe81ef1dd, __VMLINUX_SYMBOL_STR(remove_conflicting_framebuffers) },
	{ 0x37b8b39e, __VMLINUX_SYMBOL_STR(screen_info) },
	{ 0x58af4a0f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x500b6dd7, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_register) },
	{ 0xbf0bd23, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0xab781570, __VMLINUX_SYMBOL_STR(fb_get_options) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x9eeda0e1, __VMLINUX_SYMBOL_STR(vmbus_allocate_mmio) },
	{ 0x9f9e20c4, __VMLINUX_SYMBOL_STR(efi) },
	{ 0x46a417ca, __VMLINUX_SYMBOL_STR(vmbus_proto_version) },
	{ 0x9330d234, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x6e7ac51d, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xac6a9220, __VMLINUX_SYMBOL_STR(vmbus_recvpacket) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xc6194f80, __VMLINUX_SYMBOL_STR(cfb_fillrect) },
	{ 0x324895d4, __VMLINUX_SYMBOL_STR(cfb_copyarea) },
	{ 0xcb599f6b, __VMLINUX_SYMBOL_STR(cfb_imageblit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x52630cd5, __VMLINUX_SYMBOL_STR(vmbus_sendpacket) },
	{ 0x1f81a0d8, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xdb2f6047, __VMLINUX_SYMBOL_STR(vmbus_free_mmio) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9e754aa6, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x6253d0ea, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x758a3812, __VMLINUX_SYMBOL_STR(atomic_notifier_chain_unregister) },
	{ 0x4476e9e2, __VMLINUX_SYMBOL_STR(panic_notifier_list) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:02780ada77e3ac4a8e770558eb1073f8");
MODULE_ALIAS("pci:v00001414d00005353sv00000000sd00000000bc*sc*i*");

MODULE_INFO(srcversion, "8985F1BE52A6F37C4D38D6B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

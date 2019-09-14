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
	{ 0xa13277ea, __VMLINUX_SYMBOL_STR(serio_unregister_driver) },
	{ 0xb975e47, __VMLINUX_SYMBOL_STR(__serio_register_driver) },
	{ 0xb7d27f45, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xf670653c, __VMLINUX_SYMBOL_STR(serio_open) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xab72d020, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xe8fe6cd4, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x2953511d, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7304db2f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x6adb092d, __VMLINUX_SYMBOL_STR(serio_close) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("serio:ty02pr01id*ex*");
MODULE_ALIAS("serio:ty02pr02id*ex*");
MODULE_ALIAS("serio:ty02pr03id*ex*");
MODULE_ALIAS("serio:ty02pr04id*ex*");
MODULE_ALIAS("serio:ty02pr05id*ex*");
MODULE_ALIAS("serio:ty02pr06id*ex*");
MODULE_ALIAS("serio:ty02pr07id*ex*");

MODULE_INFO(srcversion, "E7D281725730032F0AC04F7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

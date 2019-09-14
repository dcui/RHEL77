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
	{ 0x16512db3, __VMLINUX_SYMBOL_STR(pci_bus_type) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3a78144a, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xaac87aa7, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb8dd402f, __VMLINUX_SYMBOL_STR(cx18_ext_init) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x43c42908, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0xa22bcf64, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xd5a525fd, __VMLINUX_SYMBOL_STR(cx18_stop_v4l2_encode_stream) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xfaadd09, __VMLINUX_SYMBOL_STR(cx18_release_stream) },
	{ 0xd64bba48, __VMLINUX_SYMBOL_STR(cx18_claim_stream) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x92ebed60, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x41bda6a5, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cb65bd5, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0xb91f67a1, __VMLINUX_SYMBOL_STR(cx18_start_v4l2_encode_stream) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7cf0314, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf37825f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8703bd73, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x18e6b5cd, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x6d9f056d, __VMLINUX_SYMBOL_STR(driver_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,cx18,snd";


MODULE_INFO(srcversion, "9B4371A09074E76BEDAAFC2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

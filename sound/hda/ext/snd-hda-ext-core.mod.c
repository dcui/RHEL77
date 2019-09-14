#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaea8b4b4, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x16fb15f9, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1ccd9990, __VMLINUX_SYMBOL_STR(snd_hdac_device_exit) },
	{ 0x352dca2a, __VMLINUX_SYMBOL_STR(snd_hda_bus_type) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xdb13c5d5, __VMLINUX_SYMBOL_STR(snd_hdac_bus_init_cmd_io) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xeed7b9fc, __VMLINUX_SYMBOL_STR(snd_hdac_bus_stop_cmd_io) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc5455e6b, __VMLINUX_SYMBOL_STR(snd_hdac_stream_assign) },
	{ 0x115aae2f, __VMLINUX_SYMBOL_STR(snd_hdac_device_init) },
	{ 0xbf67a316, __VMLINUX_SYMBOL_STR(snd_hdac_device_unregister) },
	{ 0xb92b03c1, __VMLINUX_SYMBOL_STR(snd_hdac_stream_init) },
	{ 0xcda6719c, __VMLINUX_SYMBOL_STR(snd_hdac_bus_init) },
	{ 0xa388671d, __VMLINUX_SYMBOL_STR(snd_hdac_stream_stop) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xdf8f34f0, __VMLINUX_SYMBOL_STR(snd_hdac_device_register) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8e297fee, __VMLINUX_SYMBOL_STR(snd_hdac_bus_exit) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xd2fe5067, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x84066290, __VMLINUX_SYMBOL_STR(snd_hdac_bus_stop_chip) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd6e013ee, __VMLINUX_SYMBOL_STR(snd_hdac_stream_release) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-hda-core";


MODULE_INFO(srcversion, "1968D5F11E0733EEE12A6BB");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

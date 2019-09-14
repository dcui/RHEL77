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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x73039031, __VMLINUX_SYMBOL_STR(saa7134_boards) },
	{ 0x1211df5d, __VMLINUX_SYMBOL_STR(saa7134_devlist) },
	{ 0xf3ec932e, __VMLINUX_SYMBOL_STR(saa7134_dmasound_exit) },
	{ 0x2494a7cb, __VMLINUX_SYMBOL_STR(saa7134_dmasound_init) },
	{ 0xc12fec8e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0xa22bcf64, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xf37825f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x92ebed60, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x8703bd73, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x5bf5706c, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x41bda6a5, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xcf2ef121, __VMLINUX_SYMBOL_STR(saa7134_pgtable_build) },
	{ 0x1da2ae50, __VMLINUX_SYMBOL_STR(saa7134_pgtable_alloc) },
	{ 0x726bf697, __VMLINUX_SYMBOL_STR(videobuf_dma_map) },
	{ 0x630a3e20, __VMLINUX_SYMBOL_STR(videobuf_dma_init_kernel) },
	{ 0xcbb774e0, __VMLINUX_SYMBOL_STR(videobuf_dma_init) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0xd87a9c5b, __VMLINUX_SYMBOL_STR(videobuf_dma_unmap) },
	{ 0x951b8cd0, __VMLINUX_SYMBOL_STR(saa7134_pgtable_free) },
	{ 0x2f501d34, __VMLINUX_SYMBOL_STR(videobuf_dma_free) },
	{ 0x4f816e9b, __VMLINUX_SYMBOL_STR(snd_pcm_format_big_endian) },
	{ 0x1d027e4b, __VMLINUX_SYMBOL_STR(snd_pcm_format_signed) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xfd22e21b, __VMLINUX_SYMBOL_STR(saa_dsp_writel) },
	{ 0xbad31b90, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x11e588da, __VMLINUX_SYMBOL_STR(saa7134_tvaudio_setmute) },
	{ 0x6f72a6dd, __VMLINUX_SYMBOL_STR(saa7134_set_dmabits) },
	{ 0x18e6b5cd, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x3a78144a, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x1cb65bd5, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x169d722d, __VMLINUX_SYMBOL_STR(snd_pcm_stop) },
	{ 0x43c42908, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x7cf0314, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,saa7134,snd,videobuf-dma-sg";


MODULE_INFO(srcversion, "2F6EC3BE77236DDC9CE79FF");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

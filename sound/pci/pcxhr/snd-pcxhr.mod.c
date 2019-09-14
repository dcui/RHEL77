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
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc12fec8e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x3a78144a, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x16fb15f9, __VMLINUX_SYMBOL_STR(snd_dma_alloc_pages) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa22bcf64, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe408b880, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x92ebed60, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x3077e138, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4e6daf04, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x596f5598, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x6728e776, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0x41bda6a5, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xd2fe5067, __VMLINUX_SYMBOL_STR(snd_dma_free_pages) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcba925d4, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xaa61a821, __VMLINUX_SYMBOL_STR(snd_card_rw_proc_new) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x8a84a7b5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x7cf0314, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf37825f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8703bd73, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x5bf5706c, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-pcm";

MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B321bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B401bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B601bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000B701bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B421bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B521bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B621bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000B721bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BA21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BD21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BC21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BB21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF01bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000BF21bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D001bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D101bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D021bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D121bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D201bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009656sv00001369sd0000D301bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D221bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv00001369sd0000D321bc*sc*i*");

MODULE_INFO(srcversion, "0CAEF6598AC67F4648C97A7");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

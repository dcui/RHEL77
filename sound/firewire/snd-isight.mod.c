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
	{ 0x16e91e21, __VMLINUX_SYMBOL_STR(fw_csr_iterator_next) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x189abbaa, __VMLINUX_SYMBOL_STR(fw_iso_resources_update) },
	{ 0xaea8b4b4, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xee4c1b4f, __VMLINUX_SYMBOL_STR(iso_packets_buffer_init) },
	{ 0x3a78144a, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xc2a51876, __VMLINUX_SYMBOL_STR(fw_iso_resources_init) },
	{ 0xd9efb952, __VMLINUX_SYMBOL_STR(snd_pcm_stop_xrun) },
	{ 0x3539dcb1, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6c32b86d, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x75d880c9, __VMLINUX_SYMBOL_STR(fw_iso_context_start) },
	{ 0xc6808b65, __VMLINUX_SYMBOL_STR(fw_iso_context_queue_flush) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2464824a, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xf7e7e92e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x14c8cd22, __VMLINUX_SYMBOL_STR(iso_packets_buffer_destroy) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x596f5598, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x41bda6a5, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xb8eb5fd9, __VMLINUX_SYMBOL_STR(fw_iso_resources_destroy) },
	{ 0xf15808bb, __VMLINUX_SYMBOL_STR(fw_iso_context_queue) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x79edb434, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xe3159282, __VMLINUX_SYMBOL_STR(fw_iso_resources_allocate) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0xf6c6cb6f, __VMLINUX_SYMBOL_STR(fw_iso_context_stop) },
	{ 0xce7dbcb0, __VMLINUX_SYMBOL_STR(fw_iso_context_create) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7cf0314, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf37825f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8703bd73, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x7f16c5d6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x5bf5706c, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x4d70ffa7, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x44ac65e6, __VMLINUX_SYMBOL_STR(fw_iso_resources_free) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x666ce071, __VMLINUX_SYMBOL_STR(fw_run_transaction) },
	{ 0xcd7ea506, __VMLINUX_SYMBOL_STR(fw_iso_context_destroy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-firewire-lib,snd-pcm,snd";

MODULE_ALIAS("ieee1394:ven*mo*sp00000A27ver00000010*");

MODULE_INFO(srcversion, "E9BF5D3F95D83B08884D5DC");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

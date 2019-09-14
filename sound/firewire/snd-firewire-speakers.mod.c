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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaea8b4b4, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x30c5c30d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x6005d2a, __VMLINUX_SYMBOL_STR(amdtp_out_stream_init) },
	{ 0x3539dcb1, __VMLINUX_SYMBOL_STR(fw_bus_type) },
	{ 0x65c9438b, __VMLINUX_SYMBOL_STR(fw_csr_iterator_init) },
	{ 0xa1601761, __VMLINUX_SYMBOL_STR(amdtp_out_stream_set_rate) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6c32b86d, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0xf960767f, __VMLINUX_SYMBOL_STR(amdtp_out_stream_destroy) },
	{ 0x90af9370, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_pointer) },
	{ 0xf01b89a, __VMLINUX_SYMBOL_STR(cmp_connection_destroy) },
	{ 0x9bb6374d, __VMLINUX_SYMBOL_STR(fcp_avc_transaction) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x769e3fb3, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x5a7b708, __VMLINUX_SYMBOL_STR(cmp_connection_establish) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x92ebed60, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xdd08621f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x2464824a, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xf7e7e92e, __VMLINUX_SYMBOL_STR(snd_pcm_lib_get_vmalloc_page) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x94098ff8, __VMLINUX_SYMBOL_STR(snd_interval_list) },
	{ 0x596f5598, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x41bda6a5, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xeb6ab81a, __VMLINUX_SYMBOL_STR(cmp_connection_update) },
	{ 0x60effb0, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0x48cf305f, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_abort) },
	{ 0x7d776a1, __VMLINUX_SYMBOL_STR(amdtp_out_stream_get_max_payload) },
	{ 0x7f061699, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x79edb434, __VMLINUX_SYMBOL_STR(_snd_pcm_lib_alloc_vmalloc_buffer) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xc663ea90, __VMLINUX_SYMBOL_STR(amdtp_out_stream_pcm_prepare) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x4cda566, __VMLINUX_SYMBOL_STR(snd_interval_refine) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf0023f35, __VMLINUX_SYMBOL_STR(fcp_bus_reset) },
	{ 0x78d2f921, __VMLINUX_SYMBOL_STR(cmp_connection_break) },
	{ 0x8c10cd5c, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_minmax) },
	{ 0x43d23764, __VMLINUX_SYMBOL_STR(amdtp_out_stream_update) },
	{ 0x8430b585, __VMLINUX_SYMBOL_STR(cmp_connection_init) },
	{ 0x77a2a833, __VMLINUX_SYMBOL_STR(amdtp_out_stream_stop) },
	{ 0x7cf0314, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xf37825f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x573b47de, __VMLINUX_SYMBOL_STR(snd_pcm_limit_hw_rates) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8703bd73, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x7f16c5d6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_vmalloc_buffer) },
	{ 0x5bf5706c, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x4d70ffa7, __VMLINUX_SYMBOL_STR(snd_fw_transaction) },
	{ 0x4cfb81e9, __VMLINUX_SYMBOL_STR(amdtp_out_stream_set_pcm_format) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xa7307050, __VMLINUX_SYMBOL_STR(amdtp_out_stream_start) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=firewire-core,snd-pcm,snd-firewire-lib,snd";

MODULE_ALIAS("ieee1394:ven00001292mo0000F970sp0000A02Dver00010001*");
MODULE_ALIAS("ieee1394:ven0000D04Bmo0000F970sp0000A02Dver00010001*");

MODULE_INFO(srcversion, "82F98751B5B144DBD2B5A7B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x3588d8ba, __VMLINUX_SYMBOL_STR(_raw_qspin_lock_irq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x24a94b26, __VMLINUX_SYMBOL_STR(snd_info_get_line) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x15606cf5, __VMLINUX_SYMBOL_STR(snd_ac97_read) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0xa3e78219, __VMLINUX_SYMBOL_STR(snd_ak4114_resume) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xc12fec8e, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_step) },
	{ 0x3a78144a, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xc5064c2, __VMLINUX_SYMBOL_STR(snd_i2c_device_create) },
	{ 0x30c5c30d, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_msbits) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x7555110f, __VMLINUX_SYMBOL_STR(snd_ice1712_akm4xxx_build_controls) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xb77368ed, __VMLINUX_SYMBOL_STR(snd_ak4113_create) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x229fe3d, __VMLINUX_SYMBOL_STR(snd_rawmidi_set_ops) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6c32b86d, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb4658015, __VMLINUX_SYMBOL_STR(snd_rawmidi_new) },
	{ 0xda9c97cc, __VMLINUX_SYMBOL_STR(_snd_ctl_add_slave) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x2e1da10a, __VMLINUX_SYMBOL_STR(snd_pcm_suspend_all) },
	{ 0x48f07692, __VMLINUX_SYMBOL_STR(snd_ak4113_external_rate) },
	{ 0x584b7c8e, __VMLINUX_SYMBOL_STR(snd_ak4113_build) },
	{ 0x35b6b772, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0xe408b880, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x769e3fb3, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3bb2e3e2, __VMLINUX_SYMBOL_STR(snd_pt2258_build_controls) },
	{ 0x92ebed60, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x3077e138, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_stereo_info) },
	{ 0xbad31b90, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x593c1bac, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rbx) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe3c81214, __VMLINUX_SYMBOL_STR(snd_akm4xxx_reset) },
	{ 0x4e6daf04, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0xf8a81f84, __VMLINUX_SYMBOL_STR(snd_ak4114_build) },
	{ 0x596f5598, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0x99740d7f, __VMLINUX_SYMBOL_STR(snd_pt2258_reset) },
	{ 0x6728e776, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0xe5c7ddca, __VMLINUX_SYMBOL_STR(snd_ac97_suspend) },
	{ 0x41bda6a5, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x81b69e41, __VMLINUX_SYMBOL_STR(snd_ctl_enum_info) },
	{ 0xd77ccf74, __VMLINUX_SYMBOL_STR(snd_ice1712_akm4xxx_free) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb5b85bc6, __VMLINUX_SYMBOL_STR(snd_i2c_bus_create) },
	{ 0x18b2b3d5, __VMLINUX_SYMBOL_STR(snd_ctl_make_virtual_master) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x3c58e9e1, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcba925d4, __VMLINUX_SYMBOL_STR(snd_pcm_set_sync) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x356bbada, __VMLINUX_SYMBOL_STR(snd_ctl_find_id) },
	{ 0x7eee9e71, __VMLINUX_SYMBOL_STR(snd_ac97_bus) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa0e157d8, __VMLINUX_SYMBOL_STR(snd_ak4114_create) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8e9bb926, __VMLINUX_SYMBOL_STR(snd_ac97_mixer) },
	{ 0xaa61a821, __VMLINUX_SYMBOL_STR(snd_card_rw_proc_new) },
	{ 0x4d008fae, __VMLINUX_SYMBOL_STR(snd_ak4114_suspend) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0xa554afd9, __VMLINUX_SYMBOL_STR(snd_ak4114_external_rate) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2ea2ad08, __VMLINUX_SYMBOL_STR(snd_ak4114_reinit) },
	{ 0xfb9b894f, __VMLINUX_SYMBOL_STR(snd_akm4xxx_write) },
	{ 0x8a84a7b5, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x7cf0314, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf37825f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x8703bd73, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x5c8bc25a, __VMLINUX_SYMBOL_STR(snd_ac97_resume) },
	{ 0x5bf5706c, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0x27c2876c, __VMLINUX_SYMBOL_STR(snd_ac97_write_cache) },
	{ 0xa4fd10df, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xd3ad274d, __VMLINUX_SYMBOL_STR(snd_rawmidi_transmit_empty) },
	{ 0xb5f601d5, __VMLINUX_SYMBOL_STR(snd_ice1712_akm4xxx_init) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x136183db, __VMLINUX_SYMBOL_STR(snd_rawmidi_receive) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd,snd-ac97-codec,snd-ak4114,snd-pcm,snd-i2c,snd-ice17xx-ak4xxx,snd-ak4113,snd-rawmidi,snd-pt2258,snd-ak4xxx-adda";

MODULE_ALIAS("pci:v00001412d00001724sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "D078490209859DCB48C0482");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

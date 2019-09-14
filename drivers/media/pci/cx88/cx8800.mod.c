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
	{ 0x80c154ec, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0xe5d9f2e8, __VMLINUX_SYMBOL_STR(videobuf_to_dma) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x689de426, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xa94ace02, __VMLINUX_SYMBOL_STR(cx88_newstation) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xec8f54e1, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xf1fdea42, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x6318019f, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x4ed5e0d7, __VMLINUX_SYMBOL_STR(v4l2_chip_match_host) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x7be134d6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0x508821b0, __VMLINUX_SYMBOL_STR(videobuf_queue_cancel) },
	{ 0x59ff2fdd, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x58cfbbef, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x10b6d450, __VMLINUX_SYMBOL_STR(cx88_free_buffer) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x635659e9, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7f2c54b5, __VMLINUX_SYMBOL_STR(cx88_sram_channel_setup) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc35e4b4e, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xb4b98d0, __VMLINUX_SYMBOL_STR(cx88_sram_channel_dump) },
	{ 0x9cb9c05d, __VMLINUX_SYMBOL_STR(cx88_set_tvaudio) },
	{ 0x4216fc84, __VMLINUX_SYMBOL_STR(cx88_sram_channels) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x92fb5ed8, __VMLINUX_SYMBOL_STR(v4l2_ctrl_s_ctrl) },
	{ 0x37800b6a, __VMLINUX_SYMBOL_STR(videobuf_read_one) },
	{ 0x5bbdc39c, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x42f90a31, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x337a47fc, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x25eaa08, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x797f4adc, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xb5857d81, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x7191757d, __VMLINUX_SYMBOL_STR(cx88_set_stereo) },
	{ 0x920d70e0, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x102e1553, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0xd11d6075, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x23c61672, __VMLINUX_SYMBOL_STR(btcx_riscmem_free) },
	{ 0x474c30cb, __VMLINUX_SYMBOL_STR(cx88_risc_buffer) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x486f2a3e, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0x123959a1, __VMLINUX_SYMBOL_STR(v4l2_type_names) },
	{ 0x5004f8ae, __VMLINUX_SYMBOL_STR(cx88_ir_start) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xc35f9f49, __VMLINUX_SYMBOL_STR(v4l2_ctrl_find) },
	{ 0xf5ef842e, __VMLINUX_SYMBOL_STR(v4l_bound_align_image) },
	{ 0xc506da45, __VMLINUX_SYMBOL_STR(cx88_set_tvnorm) },
	{ 0xbda07201, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x787da2ab, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xf5af5f44, __VMLINUX_SYMBOL_STR(cx88_ir_stop) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x248c868d, __VMLINUX_SYMBOL_STR(cx88_get_stereo) },
	{ 0xb7508a55, __VMLINUX_SYMBOL_STR(cx88_core_get) },
	{ 0xe65cdceb, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1aef8bce, __VMLINUX_SYMBOL_STR(cx88_core_irq) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xdb06331, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x904b8696, __VMLINUX_SYMBOL_STR(cx88_audio_thread) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5ede9448, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x18464d39, __VMLINUX_SYMBOL_STR(cx88_core_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xfc779e45, __VMLINUX_SYMBOL_STR(cx88_vdev_init) },
	{ 0xc30eead8, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x7cbcf7a1, __VMLINUX_SYMBOL_STR(cx88_shutdown) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x211b8af6, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xfe97384b, __VMLINUX_SYMBOL_STR(cx88_set_scale) },
	{ 0x9e8e070e, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0x31fb2074, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x8ae1c688, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0x7642ed3c, __VMLINUX_SYMBOL_STR(cx88_print_irqbits) },
	{ 0xa23c6646, __VMLINUX_SYMBOL_STR(pci_choose_state) },
	{ 0xa9f3ce40, __VMLINUX_SYMBOL_STR(cx88_risc_stopper) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x47850fe1, __VMLINUX_SYMBOL_STR(cx88_wakeup) },
	{ 0xee722cb1, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x90f2b3d6, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x929e313f, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x22a36997, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0xa4834732, __VMLINUX_SYMBOL_STR(cx88_reset) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x53108e44, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0xdbae970f, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x4c880368, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videobuf-dma-sg,videodev,cx88xx,v4l2-common,btcx-risc";

MODULE_ALIAS("pci:v000014F1d00008800sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "48D35016FB0890CE6B3967D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

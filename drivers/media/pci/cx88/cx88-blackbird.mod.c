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
	{ 0x90f2b3d6, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x689de426, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xb5857d81, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4c27cd29, __VMLINUX_SYMBOL_STR(cx8802_unregister_driver) },
	{ 0x2823f5af, __VMLINUX_SYMBOL_STR(cx8802_register_driver) },
	{ 0x58cfbbef, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xfc779e45, __VMLINUX_SYMBOL_STR(cx88_vdev_init) },
	{ 0x8ae1c688, __VMLINUX_SYMBOL_STR(v4l2_ctrl_add_handler) },
	{ 0xc637a9b, __VMLINUX_SYMBOL_STR(cx2341x_handler_init) },
	{ 0x211b8af6, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0xd11d6075, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0x797f4adc, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbda07201, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xd0374a82, __VMLINUX_SYMBOL_STR(cx88_set_freq) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xf4561f8d, __VMLINUX_SYMBOL_STR(cx2341x_handler_setup) },
	{ 0xb0559631, __VMLINUX_SYMBOL_STR(cx2341x_handler_set_50hz) },
	{ 0x102e1553, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0x929e313f, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x22a36997, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x59ff2fdd, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x1430059, __VMLINUX_SYMBOL_STR(cx8802_get_driver) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdbae970f, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x31fb2074, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x80c154ec, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x486f2a3e, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0x7c06cd81, __VMLINUX_SYMBOL_STR(cx8802_cancel_buffers) },
	{ 0x4c880368, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
	{ 0x78686d4f, __VMLINUX_SYMBOL_STR(cx2341x_handler_set_busy) },
	{ 0xfe97384b, __VMLINUX_SYMBOL_STR(cx88_set_scale) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x25eaa08, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x99b4b462, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x6318019f, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0xec8f54e1, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0xbe934b9b, __VMLINUX_SYMBOL_STR(cx8802_buf_prepare) },
	{ 0xdf61b4f8, __VMLINUX_SYMBOL_STR(cx8802_buf_queue) },
	{ 0x10b6d450, __VMLINUX_SYMBOL_STR(cx88_free_buffer) },
	{ 0x9fe3a0f5, __VMLINUX_SYMBOL_STR(cx88_querycap) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc30eead8, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0x920d70e0, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x337a47fc, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0xdb06331, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x32975282, __VMLINUX_SYMBOL_STR(cx88_enum_input) },
	{ 0xc506da45, __VMLINUX_SYMBOL_STR(cx88_set_tvnorm) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf861428, __VMLINUX_SYMBOL_STR(cx88_video_mux) },
	{ 0xa94ace02, __VMLINUX_SYMBOL_STR(cx88_newstation) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x248c868d, __VMLINUX_SYMBOL_STR(cx88_get_stereo) },
	{ 0x7191757d, __VMLINUX_SYMBOL_STR(cx88_set_stereo) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa12dacbf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,cx8802,cx88xx,cx2341x,videobuf-dma-sg,cx8800,videobuf-core";


MODULE_INFO(srcversion, "AB84C976C139E263BE56B50");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

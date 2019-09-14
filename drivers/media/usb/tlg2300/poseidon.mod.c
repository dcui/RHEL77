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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x689de426, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xb7e735a4, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5baea47, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x10fb14a6, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xec8f54e1, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x3a78144a, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xe5e7034a, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6c2143e7, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x99b4b462, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x4e771ff1, __VMLINUX_SYMBOL_STR(videobuf_queue_vmalloc_init) },
	{ 0x7be134d6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xa68ef25c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x59ff2fdd, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0xb0d2b7e8, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x58cfbbef, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x635659e9, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x44824fc3, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0x4c7fde98, __VMLINUX_SYMBOL_STR(usb_enable_autosuspend) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x43c42908, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0xa22bcf64, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x556c6d0f, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x58293ee6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x4fb4eafb, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3d001aa3, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x337a47fc, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x25eaa08, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x8e2c4e43, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x92ebed60, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xbe7567f, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xb5857d81, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x920d70e0, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x669fe0cc, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9cc4f70a, __VMLINUX_SYMBOL_STR(register_pm_notifier) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf35efa18, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x2baa15a6, __VMLINUX_SYMBOL_STR(v4l2_fh_is_singular) },
	{ 0x102e1553, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0x57d13b7c, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x4a15197a, __VMLINUX_SYMBOL_STR(device_init_wakeup) },
	{ 0x434eb397, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x41bda6a5, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x486f2a3e, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x610c5e64, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xbda07201, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1cb65bd5, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x5a4213c2, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xbffe6eb, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x43611dfa, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x6b50c65b, __VMLINUX_SYMBOL_STR(videobuf_vmalloc_free) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x163c9666, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x32144915, __VMLINUX_SYMBOL_STR(videobuf_to_vmalloc) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8a53927b, __VMLINUX_SYMBOL_STR(usb_get_intf) },
	{ 0xdb06331, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0x53d1630d, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xc30eead8, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xa6771be3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x7681946c, __VMLINUX_SYMBOL_STR(unregister_pm_notifier) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x7cf0314, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xcace5945, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0xf37825f, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8703bd73, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0xd0abc268, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x18e6b5cd, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xe315da4a, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x90f2b3d6, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x929e313f, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x22a36997, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x1068a034, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x83fa1f49, __VMLINUX_SYMBOL_STR(usb_put_intf) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x6191990b, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x4c880368, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-core,videodev,dvb-core,snd-pcm,videobuf-vmalloc,snd,v4l2-common";

MODULE_ALIAS("usb:v1B24p4001d*dc*dsc*dp*icFFisc01ip00in*");
MODULE_ALIAS("usb:v1B24p4001d*dc*dsc*dp*icFFisc01ip01in*");

MODULE_INFO(srcversion, "96EA80D897417E9AD59E48C");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

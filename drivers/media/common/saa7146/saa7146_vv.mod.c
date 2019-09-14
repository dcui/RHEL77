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
	{ 0xe5d9f2e8, __VMLINUX_SYMBOL_STR(videobuf_to_dma) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x689de426, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xec8f54e1, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x614dd5a, __VMLINUX_SYMBOL_STR(v4l2_video_std_frame_period) },
	{ 0x6318019f, __VMLINUX_SYMBOL_STR(video_device_release) },
	{ 0x4ed5e0d7, __VMLINUX_SYMBOL_STR(v4l2_chip_match_host) },
	{ 0xb5dcab5b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x6c2143e7, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x99b4b462, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x7be134d6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x508821b0, __VMLINUX_SYMBOL_STR(videobuf_queue_cancel) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x59ff2fdd, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x58cfbbef, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x635659e9, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x11b71ef7, __VMLINUX_SYMBOL_STR(saa7146_pgtable_free) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x556c6d0f, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xe64fa680, __VMLINUX_SYMBOL_STR(saa7146_pgtable_alloc) },
	{ 0x37800b6a, __VMLINUX_SYMBOL_STR(videobuf_read_one) },
	{ 0x5c7135dd, __VMLINUX_SYMBOL_STR(video_device_alloc) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x337a47fc, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x25eaa08, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x797f4adc, __VMLINUX_SYMBOL_STR(v4l2_fh_init) },
	{ 0xb5857d81, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0xd8eacd8f, __VMLINUX_SYMBOL_STR(saa7146_pgtable_build_single) },
	{ 0x920d70e0, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x102e1553, __VMLINUX_SYMBOL_STR(videobuf_read_stream) },
	{ 0xd87a9c5b, __VMLINUX_SYMBOL_STR(videobuf_dma_unmap) },
	{ 0xd11d6075, __VMLINUX_SYMBOL_STR(videobuf_queue_sg_init) },
	{ 0xa587ed11, __VMLINUX_SYMBOL_STR(arch_dma_alloc_attrs) },
	{ 0x486f2a3e, __VMLINUX_SYMBOL_STR(videobuf_stop) },
	{ 0x3adbd595, __VMLINUX_SYMBOL_STR(v4l2_field_names) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xbda07201, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe3cd9b5c, __VMLINUX_SYMBOL_STR(saa7146_debug) },
	{ 0xdb06331, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x5860aad4, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xd67f8181, __VMLINUX_SYMBOL_STR(videobuf_waiton) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc30eead8, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xa6771be3, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x211b8af6, __VMLINUX_SYMBOL_STR(v4l2_fh_add) },
	{ 0x2f501d34, __VMLINUX_SYMBOL_STR(videobuf_dma_free) },
	{ 0x31fb2074, __VMLINUX_SYMBOL_STR(v4l2_fh_del) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x90f2b3d6, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x929e313f, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x22a36997, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xdbae970f, __VMLINUX_SYMBOL_STR(v4l2_fh_exit) },
	{ 0x4c880368, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf-dma-sg,videodev,videobuf-core,v4l2-common,saa7146";


MODULE_INFO(srcversion, "33CB90BDF3C954C5875E9B6");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

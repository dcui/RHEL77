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
	{ 0x3085747d, __VMLINUX_SYMBOL_STR(dib7000m_pid_filter_ctrl) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0x583ce0c5, __VMLINUX_SYMBOL_STR(dib7000p_ctrl_timf) },
	{ 0xf05e4616, __VMLINUX_SYMBOL_STR(dib8000_pid_filter) },
	{ 0x8673f7b8, __VMLINUX_SYMBOL_STR(dib8000_get_i2c_master) },
	{ 0x43d6f45e, __VMLINUX_SYMBOL_STR(dib8000_pwm_agc_reset) },
	{ 0xd7f898f1, __VMLINUX_SYMBOL_STR(dib7000p_pid_filter_ctrl) },
	{ 0xdc969eaa, __VMLINUX_SYMBOL_STR(dibx000_i2c_set_speed) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xb30e047c, __VMLINUX_SYMBOL_STR(dib8000_get_slave_frontend) },
	{ 0x2c13b33e, __VMLINUX_SYMBOL_STR(dib7000p_set_agc1_min) },
	{ 0x90b3e49a, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x596a3591, __VMLINUX_SYMBOL_STR(dib8000_i2c_enumeration) },
	{ 0xad3a99b7, __VMLINUX_SYMBOL_STR(dib0090_gain_control) },
	{ 0x208fb985, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0x8d70d495, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xa7441e57, __VMLINUX_SYMBOL_STR(dib8096p_tuner_sleep) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0xe12085a, __VMLINUX_SYMBOL_STR(dib8000_pid_filter_ctrl) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xbb303a67, __VMLINUX_SYMBOL_STR(dib0070_wbd_offset) },
	{ 0x180197e5, __VMLINUX_SYMBOL_STR(dib0090_get_wbd_target) },
	{ 0xa7b997fc, __VMLINUX_SYMBOL_STR(dib0090_dcc_freq) },
	{ 0x1bf373a2, __VMLINUX_SYMBOL_STR(dib3000mc_get_tuner_i2c_master) },
	{ 0xb2d307de, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x41dae671, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x69192fc8, __VMLINUX_SYMBOL_STR(dib7000p_pid_filter) },
	{ 0x7ca3d9ed, __VMLINUX_SYMBOL_STR(dib8000_set_wbd_ref) },
	{ 0x109c23cb, __VMLINUX_SYMBOL_STR(dib7090_slave_reset) },
	{ 0x151b4d4d, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x83ccfc7f, __VMLINUX_SYMBOL_STR(dib0090_get_current_gain) },
	{ 0x669fe0cc, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfd5d40b0, __VMLINUX_SYMBOL_STR(dib8000_set_gpio) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xea6cd040, __VMLINUX_SYMBOL_STR(dib8000_update_pll) },
	{ 0x859a393e, __VMLINUX_SYMBOL_STR(dib8096p_get_i2c_tuner) },
	{ 0x1ff6d45d, __VMLINUX_SYMBOL_STR(dib8000_get_adc_power) },
	{ 0xe3bb7b9e, __VMLINUX_SYMBOL_STR(dib7000p_set_wbd_ref) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbffe6eb, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x86a5dd07, __VMLINUX_SYMBOL_STR(dib7000p_i2c_enumeration) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xf860098c, __VMLINUX_SYMBOL_STR(dib8000_ctrl_timf) },
	{ 0x727b5660, __VMLINUX_SYMBOL_STR(dib7000pc_detection) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe459dee1, __VMLINUX_SYMBOL_STR(dib3000mc_i2c_enumeration) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd8b76fd1, __VMLINUX_SYMBOL_STR(dib7000m_pid_filter) },
	{ 0xc70b9a72, __VMLINUX_SYMBOL_STR(dib7000p_update_pll) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x9d2ff566, __VMLINUX_SYMBOL_STR(dib0090_pwm_gain_reset) },
	{ 0x71abe13c, __VMLINUX_SYMBOL_STR(dib7090_get_adc_power) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x5635a5ff, __VMLINUX_SYMBOL_STR(dib7090_tuner_sleep) },
	{ 0x1ebeab99, __VMLINUX_SYMBOL_STR(dib8000_set_slave_frontend) },
	{ 0x7e7c273f, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xa7d43dd7, __VMLINUX_SYMBOL_STR(dib8000_set_tune_state) },
	{ 0xaa1b563f, __VMLINUX_SYMBOL_STR(dib0090_set_dc_servo) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xf2fdf583, __VMLINUX_SYMBOL_STR(dvb_usb_get_hexline) },
	{ 0xce214710, __VMLINUX_SYMBOL_STR(dib7000p_get_i2c_master) },
	{ 0x263c3ab0, __VMLINUX_SYMBOL_STR(dib0090_set_tune_state) },
	{ 0x63b7104b, __VMLINUX_SYMBOL_STR(dib0070_ctrl_agc_filter) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x59837807, __VMLINUX_SYMBOL_STR(dib7090_get_i2c_tuner) },
	{ 0x5cd5a13d, __VMLINUX_SYMBOL_STR(dib7000m_get_i2c_master) },
	{ 0xa1fba63c, __VMLINUX_SYMBOL_STR(dib0090_get_tune_state) },
	{ 0x19ee7394, __VMLINUX_SYMBOL_STR(dib7000p_set_gpio) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dib7000m,dib7000p,dib8000,dibx000_common,dvb-usb,dib0090,dib0070,dib3000mc,rc-core";

MODULE_ALIAS("usb:v10B8p1E14d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9941d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9950d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA807d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp1E78d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1584p6003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB808d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp005Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9580d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EF0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EBCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0228d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1EBEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0229d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v185Bp1E80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApB568d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p7001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D8p810Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p171Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p173Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0058d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0236d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1EDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0078d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6F01d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p5200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p7002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1F08d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1736d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0081d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1415p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p2EDCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040pB210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p0871d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p60F6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp10A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1EFCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1164p1E8Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0245d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2013p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E80d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp00ABd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F98d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F90d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d3F00dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d3[0-9A-E]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1554p5010d[0-2]*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1E59p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0245d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p0248d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1FA0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p2383d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1FA8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p2384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1BB2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1BB4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14F7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1660p1921d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p023Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1E6Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B8p1F9Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p003Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "88BED6C5C7DC7399636A819");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

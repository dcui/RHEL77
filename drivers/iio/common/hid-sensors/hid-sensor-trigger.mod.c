#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x16ffc330, __VMLINUX_SYMBOL_STR(hid_sensor_batch_mode_supported) },
	{ 0x8c4e01d9, __VMLINUX_SYMBOL_STR(iio_trigger_unregister) },
	{ 0x49dc84dd, __VMLINUX_SYMBOL_STR(__pm_runtime_disable) },
	{ 0x3906ef29, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa0d3db3b, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x8ed780dd, __VMLINUX_SYMBOL_STR(iio_trigger_alloc) },
	{ 0xf6bbc340, __VMLINUX_SYMBOL_STR(sensor_hub_get_feature) },
	{ 0xa85853bb, __VMLINUX_SYMBOL_STR(sensor_hub_device_open) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x7baababe, __VMLINUX_SYMBOL_STR(__pm_runtime_resume) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x26f6b499, __VMLINUX_SYMBOL_STR(iio_str_to_fixpoint) },
	{ 0x3df8ce62, __VMLINUX_SYMBOL_STR(hid_sensor_read_poll_value) },
	{ 0xace8404a, __VMLINUX_SYMBOL_STR(sensor_hub_device_close) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x867981b1, __VMLINUX_SYMBOL_STR(hid_sensor_get_usage_index) },
	{ 0xf350d6c, __VMLINUX_SYMBOL_STR(pm_runtime_enable) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd479c695, __VMLINUX_SYMBOL_STR(iio_trigger_register) },
	{ 0x69779953, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0xf3c52f5f, __VMLINUX_SYMBOL_STR(sensor_hub_set_feature) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0xd0a0906f, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x20c05d48, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x70d1fd07, __VMLINUX_SYMBOL_STR(iio_trigger_free) },
	{ 0x2b4abdb9, __VMLINUX_SYMBOL_STR(iio_buffer_set_attrs) },
	{ 0xa87be58d, __VMLINUX_SYMBOL_STR(hid_sensor_set_report_latency) },
	{ 0xcace5945, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x7ae6dc58, __VMLINUX_SYMBOL_STR(hid_sensor_get_report_latency) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-iio-common,hid-sensor-hub";


MODULE_INFO(srcversion, "235078D1F744A326A9A6426");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

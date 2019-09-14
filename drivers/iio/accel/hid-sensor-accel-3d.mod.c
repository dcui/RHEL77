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
	{ 0xafeec69e, __VMLINUX_SYMBOL_STR(hid_sensor_pm_ops) },
	{ 0x79a66c5a, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x5b0240c6, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc0442713, __VMLINUX_SYMBOL_STR(sensor_hub_register_callback) },
	{ 0x50db26f3, __VMLINUX_SYMBOL_STR(iio_device_register) },
	{ 0x41affbe8, __VMLINUX_SYMBOL_STR(hid_sensor_setup_trigger) },
	{ 0x6eeb329e, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_setup) },
	{ 0xdf76bbeb, __VMLINUX_SYMBOL_STR(iio_pollfunc_store_time) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc83a92bf, __VMLINUX_SYMBOL_STR(hid_sensor_format_scale) },
	{ 0xf6256a57, __VMLINUX_SYMBOL_STR(sensor_hub_input_get_attribute_info) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x26ba49b0, __VMLINUX_SYMBOL_STR(hid_sensor_parse_common_attributes) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa78e6d8f, __VMLINUX_SYMBOL_STR(devm_iio_device_alloc) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x5a0898e7, __VMLINUX_SYMBOL_STR(iio_push_to_buffers) },
	{ 0x55b352ff, __VMLINUX_SYMBOL_STR(hid_sensor_read_samp_freq_value) },
	{ 0x9d9e9a83, __VMLINUX_SYMBOL_STR(sensor_hub_input_attr_get_raw_value) },
	{ 0x77f4f6a2, __VMLINUX_SYMBOL_STR(hid_sensor_power_state) },
	{ 0xc470d8ed, __VMLINUX_SYMBOL_STR(hid_sensor_read_raw_hyst_value) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x971729c6, __VMLINUX_SYMBOL_STR(hid_sensor_write_samp_freq_value) },
	{ 0x1aae9714, __VMLINUX_SYMBOL_STR(hid_sensor_write_raw_hyst_value) },
	{ 0xd65f71df, __VMLINUX_SYMBOL_STR(hid_sensor_convert_timestamp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x984d2aa8, __VMLINUX_SYMBOL_STR(iio_triggered_buffer_cleanup) },
	{ 0x1bbde59e, __VMLINUX_SYMBOL_STR(hid_sensor_remove_trigger) },
	{ 0x228ebedd, __VMLINUX_SYMBOL_STR(iio_device_unregister) },
	{ 0x9aa8287d, __VMLINUX_SYMBOL_STR(sensor_hub_remove_callback) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-sensor-trigger,hid-sensor-hub,industrialio-triggered-buffer,hid-sensor-iio-common";

MODULE_ALIAS("platform:HID-SENSOR-200073");

MODULE_INFO(srcversion, "53A7EA1FA960071675D92B3");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

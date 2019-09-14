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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9924c496, __VMLINUX_SYMBOL_STR(__usb_get_extra_descriptor) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{  0xd1b0c, __VMLINUX_SYMBOL_STR(usb_hub_find_child) },
	{ 0x28c452f1, __VMLINUX_SYMBOL_STR(power_supply_unregister) },
	{ 0xee1b7988, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xa68ef25c, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2da62bf, __VMLINUX_SYMBOL_STR(power_supply_powers) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x44824fc3, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xf69fef42, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x733d371c, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x795965a9, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x2953511d, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf9c0b663, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xa13cd56d, __VMLINUX_SYMBOL_STR(power_supply_get_drvdata) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x54677dd5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x669fe0cc, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9d6776d7, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x1e4ee9f2, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x434eb397, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x456650b7, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb7d27f45, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xab72d020, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7bfd8c21, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x7304db2f, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x72345f60, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xd0abc268, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xab26df3e, __VMLINUX_SYMBOL_STR(power_supply_register) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x42057fab, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1068a034, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0xdc13f446, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe8fe6cd4, __VMLINUX_SYMBOL_STR(input_allocate_device) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v056Ap0000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0017d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0063d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0064d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0065d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap006Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap006Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0022d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0032d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0033d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0035d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0037d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0039d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0041d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0042d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0043d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0045d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0057d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0059d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap005Dd*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap005Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap005Ed*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap00B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00B9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00BCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0026d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0028d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap002Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap003Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00C7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00CEd*dc*dsc*dp*ic03isc01ip02in*");
MODULE_ALIAS("usb:v056Ap0084d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00D8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DEd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00DFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00CCd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0090d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0093d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap009Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00E6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00ECd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00EDd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00EFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap010Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0314d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap0315d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap0317d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap032Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap4001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap0047d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v056Ap00F6d*dc*dsc*dp*ic03isc00ip00in*");
MODULE_ALIAS("usb:v056Ap00FAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp6004d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "54DA32341E631C895C1E5D2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

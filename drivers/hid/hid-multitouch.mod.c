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
	{ 0xbd8bd54, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0xa370ea44, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x15784899, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0x54677dd5, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xbcd7d7d2, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x1208c4bf, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1b5285fb, __VMLINUX_SYMBOL_STR(__hid_request) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x7bfd8c21, __VMLINUX_SYMBOL_STR(input_mt_get_slot_by_key) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9d6776d7, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x1e4ee9f2, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x6073555a, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xf69fef42, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xee1b7988, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0xdbbf7afa, __VMLINUX_SYMBOL_STR(hidinput_calc_abs_res) },
	{ 0x795965a9, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7bd0ac85, __VMLINUX_SYMBOL_STR(hid_report_raw_event) },
	{ 0xdd4675f1, __VMLINUX_SYMBOL_STR(hid_alloc_report_buf) },
	{ 0x142c3e66, __VMLINUX_SYMBOL_STR(input_mt_sync_frame) },
	{ 0x72345f60, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0x2953511d, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g0002v00000596p00000500");
MODULE_ALIAS("hid:b0003g0002v00000596p00000502");
MODULE_ALIAS("hid:b0003g0002v00000596p00000506");
MODULE_ALIAS("hid:b0018g0004v0000044Ep0000121F");
MODULE_ALIAS("hid:b0018g0004v0000044Ep00001220");
MODULE_ALIAS("hid:b0003g0002v00001130p00003101");
MODULE_ALIAS("hid:b0003g0002v000003EBp00002118");
MODULE_ALIAS("hid:b0003g0002v00002453p00000100");
MODULE_ALIAS("hid:b0003g0002v00002087p00000A01");
MODULE_ALIAS("hid:b0003g0002v00002087p00000F01");
MODULE_ALIAS("hid:b0003g0002v00002247p00000001");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000020");
MODULE_ALIAS("hid:b0003g0002v000024B8p00000040");
MODULE_ALIAS("hid:b0003g0002v00001FF7p00000013");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480D");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000480E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007207");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000720C");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007224");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000722A");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000725E");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007262");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000726B");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072A1");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072AA");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072C4");
MODULE_ALIAS("hid:b0003g*v00000EEFp000072D0");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000072FA");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007302");
MODULE_ALIAS("hid:b0003g0002v00000EEFp00007349");
MODULE_ALIAS("hid:b0003g0002v00000EEFp000073F7");
MODULE_ALIAS("hid:b0003g0002v00000EEFp0000A001");
MODULE_ALIAS("hid:b0003g0002v000003FCp000005D8");
MODULE_ALIAS("hid:b0003g0002v000025B5p00000002");
MODULE_ALIAS("hid:b0003g0002v000010C4p000081B9");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000003");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000100");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000101");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000102");
MODULE_ALIAS("hid:b0003g0002v00000DFCp00000106");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000010A");
MODULE_ALIAS("hid:b0003g0002v00000DFCp0000E100");
MODULE_ALIAS("hid:b0005g0002v000025B6p00000002");
MODULE_ALIAS("hid:b0003g0002v00001AADp0000000F");
MODULE_ALIAS("hid:b0003g0002v000022EDp00001010");
MODULE_ALIAS("hid:b0003g0002v0000222Ap00000001");
MODULE_ALIAS("hid:b0003g*v00001FD2p00006007");
MODULE_ALIAS("hid:b0003g0002v00000486p00000185");
MODULE_ALIAS("hid:b0003g0002v00000486p00000186");
MODULE_ALIAS("hid:b0003g0002v0000062Ap00007100");
MODULE_ALIAS("hid:b0003g0002v000004DAp00001044");
MODULE_ALIAS("hid:b0003g0002v000004DAp0000104D");
MODULE_ALIAS("hid:b0003g0002v00000603p00000600");
MODULE_ALIAS("hid:b0018g0004v00001B96p00001B05");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008001");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008002");
MODULE_ALIAS("hid:b0003g0002v0000093Ap00008003");
MODULE_ALIAS("hid:b0003g0002v00002087p00000703");
MODULE_ALIAS("hid:b0003g0002v00000408p00003001");
MODULE_ALIAS("hid:b0003g0002v00000483p00003261");
MODULE_ALIAS("hid:b0003g0002v00001784p00000016");
MODULE_ALIAS("hid:b0003g0002v00001E5Ep00000313");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000709");
MODULE_ALIAS("hid:b0003g0002v0000227Dp00000A19");
MODULE_ALIAS("hid:b0003g0002v00000306p0000FF3F");
MODULE_ALIAS("hid:b0003g0002v00000FB8p00001109");
MODULE_ALIAS("hid:b0003g0002v00002505p00000220");
MODULE_ALIAS("hid:b0003g0002v00001477p00001006");
MODULE_ALIAS("hid:b0003g0002v00001477p00001007");
MODULE_ALIAS("hid:b0003g0002v00001477p0000100E");
MODULE_ALIAS("hid:b0003g0002v00001477p00001021");
MODULE_ALIAS("hid:b0003g0002v00001477p00001023");
MODULE_ALIAS("hid:b0003g0002v00001477p00001022");
MODULE_ALIAS("hid:b0003g0002v00001477p00001024");
MODULE_ALIAS("hid:b0003g0002v00001477p00001026");
MODULE_ALIAS("hid:b0003g0002v00001477p00001025");
MODULE_ALIAS("hid:b*g0002v*p*");
MODULE_ALIAS("hid:b*g0004v*p*");

MODULE_INFO(srcversion, "27B837F576D322B06337767");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
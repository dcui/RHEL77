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
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x6073555a, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xbcd7d7d2, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x1208c4bf, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00001A34p00000802");
MODULE_ALIAS("hid:b0003g*v00001A34p0000F705");

MODULE_INFO(srcversion, "C1CE948594A1E3537E10FCC");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

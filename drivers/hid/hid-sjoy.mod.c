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
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xbcd7d7d2, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x1208c4bf, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0003g*v00006666p00008801");
MODULE_ALIAS("hid:b0003g*v00006666p00008802");
MODULE_ALIAS("hid:b0003g*v00006666p00008804");
MODULE_ALIAS("hid:b0003g*v00000925p00000005");
MODULE_ALIAS("hid:b0003g*v00000925p00008888");
MODULE_ALIAS("hid:b0003g*v00000925p00008866");

MODULE_INFO(srcversion, "A23BA2C5D5E1825BFE5802E");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

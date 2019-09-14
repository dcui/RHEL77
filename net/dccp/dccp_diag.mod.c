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
	{ 0x438b880f, __VMLINUX_SYMBOL_STR(inet_diag_dump_icsk) },
	{ 0x7d5a91c1, __VMLINUX_SYMBOL_STR(dccp_hashinfo) },
	{ 0x63907b52, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf6cb27aa, __VMLINUX_SYMBOL_STR(inet_diag_dump_one_icsk) },
	{ 0xcaa0bbe0, __VMLINUX_SYMBOL_STR(inet_diag_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,dccp";


MODULE_INFO(srcversion, "50E8AD41AE6F8D1B40D5ED3");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

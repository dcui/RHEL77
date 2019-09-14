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
	{ 0xd70a53d7, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0xff338dca, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0xbe52ee31, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xae9568b0, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xe8ff9a9c, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x21b28166, __VMLINUX_SYMBOL_STR(ip6_local_out_sk) },
	{ 0x1b43c1c5, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x23a81d09, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x3f93866, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "5E93D75738F4E6CD65E4FD1");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

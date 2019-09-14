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
	{ 0x487d9343, __VMLINUX_SYMBOL_STR(param_ops_ushort) },
	{ 0x4845c423, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xe14476d, __VMLINUX_SYMBOL_STR(ip_vs_conn_in_get) },
	{ 0xaaad8f04, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x384b0469, __VMLINUX_SYMBOL_STR(ip_vs_conn_new) },
	{ 0x1a47e83, __VMLINUX_SYMBOL_STR(ip_vs_nfct_expect_related) },
	{ 0x705a6925, __VMLINUX_SYMBOL_STR(ip_vs_conn_put) },
	{ 0x436a9296, __VMLINUX_SYMBOL_STR(ip_vs_tcp_conn_listen) },
	{ 0x75f9ecee, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x13abc568, __VMLINUX_SYMBOL_STR(ip_vs_conn_out_get) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3d5844b3, __VMLINUX_SYMBOL_STR(strnicmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x158d5ed8, __VMLINUX_SYMBOL_STR(register_ip_vs_app_inc) },
	{ 0x96e65ffe, __VMLINUX_SYMBOL_STR(register_ip_vs_app) },
	{ 0xca6fdbc2, __VMLINUX_SYMBOL_STR(unregister_ip_vs_app) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_vs,nf_nat";


MODULE_INFO(srcversion, "4E3A90B8DE0B393A5CDF967");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xabf25fb, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xa96cdd5c, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x496f1ea9, __VMLINUX_SYMBOL_STR(mini_qdisc_pair_swap) },
	{ 0x6f53ae7f, __VMLINUX_SYMBOL_STR(tcf_block_get_ext) },
	{ 0xb19d2a64, __VMLINUX_SYMBOL_STR(mini_qdisc_pair_init) },
	{ 0x7be6905, __VMLINUX_SYMBOL_STR(net_inc_egress_queue) },
	{ 0x2c3054f9, __VMLINUX_SYMBOL_STR(net_inc_ingress_queue) },
	{ 0x86f85114, __VMLINUX_SYMBOL_STR(net_dec_egress_queue) },
	{ 0x46013233, __VMLINUX_SYMBOL_STR(net_dec_ingress_queue) },
	{ 0xe06d105e, __VMLINUX_SYMBOL_STR(tcf_block_put_ext) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B02A80229CBCB076B90FDA0");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

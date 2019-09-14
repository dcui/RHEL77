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
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x911f9226, __VMLINUX_SYMBOL_STR(netdev_set_tc_queue) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x15a313f, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0x178b4e51, __VMLINUX_SYMBOL_STR(default_qdisc_ops) },
	{ 0xab04e47a, __VMLINUX_SYMBOL_STR(pfifo_fast_ops) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xe2ce448b, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x559397b6, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x665ce2f9, __VMLINUX_SYMBOL_STR(dev_deactivate) },
	{ 0xd6b6116f, __VMLINUX_SYMBOL_STR(dev_activate) },
	{ 0x501798cf, __VMLINUX_SYMBOL_STR(netdev_txq_to_tc) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x44326fe3, __VMLINUX_SYMBOL_STR(netdev_set_num_tc) },
	{ 0x91f502c0, __VMLINUX_SYMBOL_STR(__rh_call_ndo_setup_tc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4060adf8, __VMLINUX_SYMBOL_STR(qdisc_hash_add) },
	{ 0xaa100ddd, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xfd097158, __VMLINUX_SYMBOL_STR(dev_graft_qdisc) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "E852D72C7140887914AFE9D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

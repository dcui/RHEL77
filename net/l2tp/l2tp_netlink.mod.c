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
	{ 0x82a6dd2e, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2b9da7a4, __VMLINUX_SYMBOL_STR(genl_lock) },
	{ 0x193c6476, __VMLINUX_SYMBOL_STR(genl_register_family) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x55d60387, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x27f1f57d, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5ea8e9c4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x3cfd3798, __VMLINUX_SYMBOL_STR(l2tp_session_find_by_ifname) },
	{ 0xe068338f, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x5710f18, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x94712da0, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2d140a58, __VMLINUX_SYMBOL_STR(genl_unlock) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27629fc1, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0x71a6e9c7, __VMLINUX_SYMBOL_STR(l2tp_tunnel_delete) },
	{ 0x4712b835, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "E4560318C2341F3938AEA6B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

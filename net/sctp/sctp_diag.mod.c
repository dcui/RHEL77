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
	{ 0x63907b52, __VMLINUX_SYMBOL_STR(inet_diag_unregister) },
	{ 0xcaa0bbe0, __VMLINUX_SYMBOL_STR(inet_diag_register) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x5ea8e9c4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf4d35288, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x3ae98c3e, __VMLINUX_SYMBOL_STR(inet_diag_msg_common_fill) },
	{ 0x8dc166c1, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x3048e9e8, __VMLINUX_SYMBOL_STR(nla_reserve_64bit) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4d96c5cd, __VMLINUX_SYMBOL_STR(inet_diag_msg_attrs_fill) },
	{ 0xe6746d10, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x17608a40, __VMLINUX_SYMBOL_STR(sctp_for_each_endpoint) },
	{ 0x3da911f8, __VMLINUX_SYMBOL_STR(sctp_for_each_transport) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xd14bc4d9, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbca81892, __VMLINUX_SYMBOL_STR(sctp_transport_lookup_process) },
	{ 0x94e848c4, __VMLINUX_SYMBOL_STR(sctp_get_sctp_info) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=inet_diag,sctp";


MODULE_INFO(srcversion, "9135546612F8287699E5761");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

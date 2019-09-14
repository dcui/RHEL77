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
	{ 0x1d77b0f8, __VMLINUX_SYMBOL_STR(unix_socket_table) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x56e7d899, __VMLINUX_SYMBOL_STR(unix_table_lock) },
	{ 0x34e784ff, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x21e29cb9, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0x3ff20dae, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4c2151cb, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xf3683543, __VMLINUX_SYMBOL_STR(unix_peer_get) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x5ea8e9c4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xa68ad9da, __VMLINUX_SYMBOL_STR(unix_inq_len) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xf4d35288, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x32ffbe6d, __VMLINUX_SYMBOL_STR(unix_outq_len) },
	{ 0xd14bc4d9, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0x8dc166c1, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xe6746d10, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x8725871d, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "68BB18BD2909388CA147CB9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xd0298b8b, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x92a1ee7d, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0x66f87150, __VMLINUX_SYMBOL_STR(register_netdevice_notifier_rh) },
	{ 0xdc85da96, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x2b58b0be, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x9b0c8220, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x8b4e1a6, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf74453d0, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x1f4116c2, __VMLINUX_SYMBOL_STR(lowpan_header_compress) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x88e3b639, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x73b2af97, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x3085bd19, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9a475008, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x6103de93, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x556547dc, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb9b91a94, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek) },
	{ 0xb4d5d033, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x39961c03, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xe234e34, __VMLINUX_SYMBOL_STR(nd_tbl) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xdcca836e, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x7fd49327, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0xbdf0907, __VMLINUX_SYMBOL_STR(lowpan_header_decompress) },
	{ 0x2e20ad8a, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3c30ccc4, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0xaa0073b7, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x4c9c14ab, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x19428dd6, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier_rh) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x4d3940dd, __VMLINUX_SYMBOL_STR(lowpan_unregister_netdevice) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xfbc25e3d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x90f81ba6, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek_addrs) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x79e83dec, __VMLINUX_SYMBOL_STR(inet_frags_init_net) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xa5a99b49, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xbded85d0, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1b4a7f67, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xb95cb2b4, __VMLINUX_SYMBOL_STR(lowpan_register_netdevice) },
	{ 0xbde3af67, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x43ebbda9, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x42c6546a, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0x63ac14a0, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x98b6dac, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xe9a6e26c, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x4d7aef69, __VMLINUX_SYMBOL_STR(ieee802154_max_payload) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154";


MODULE_INFO(srcversion, "664B5120BA3FBDA2B1D21A0");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0xd61221b9, __VMLINUX_SYMBOL_STR(nf_ct_tcp_seqadj_set) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xb56f1c11, __VMLINUX_SYMBOL_STR(nfq_ct_hook) },
	{ 0xb808414d, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xd575835c, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x59890b76, __VMLINUX_SYMBOL_STR(nf_conntrack_flush_report) },
	{ 0x117c9eec, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x5391cf5b, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x99bab161, __VMLINUX_SYMBOL_STR(nf_ct_zone_dflt) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xac7d47ef, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0xa2ccbce, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0x9d65ba14, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0x158ca4de, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xbd776f0f, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x3576b3fe, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0xa87edf6e, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x62f9499c, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x5584b8d0, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0xa93dc640, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0xf1fbb52, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x100aac22, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x4712b835, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x67d8d35, __VMLINUX_SYMBOL_STR(security_release_secctx) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x5ea8e9c4, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe6746d10, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x4d0975f0, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0xefdd70ce, __VMLINUX_SYMBOL_STR(security_secid_to_secctx) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x8c2b0ed0, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0xb7ab44ba, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0xf70d743b, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x26105947, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0x4a4eca73, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0x3b676bc5, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7844e74f, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0x940c1383, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x8725871d, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x84e94c5d, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0x50c5aee3, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0x4092504a, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x9df6e4cc, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x5460546d, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x495b4b6a, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0xfb496c41, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0x514e7886, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x25f9046, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nfnetlink";


MODULE_INFO(srcversion, "D979752EB56D790AA4D8B18");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

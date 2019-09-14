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
	{ 0xe84e3f75, __VMLINUX_SYMBOL_STR(unregister_tcf_proto_ops) },
	{ 0xbe2f6ea8, __VMLINUX_SYMBOL_STR(register_tcf_proto_ops) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x67cbc4b, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0xc2fb064b, __VMLINUX_SYMBOL_STR(flow_keys_dissector) },
	{ 0x4b7b0a44, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0xe6dc7dcc, __VMLINUX_SYMBOL_STR(__tcf_em_tree_match) },
	{ 0x830404f3, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x1fe8f483, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x2c08dd0c, __VMLINUX_SYMBOL_STR(tcf_action_exec) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e579dc5, __VMLINUX_SYMBOL_STR(__list_add_rcu) },
	{ 0x30eb9033, __VMLINUX_SYMBOL_STR(tcf_queue_work) },
	{ 0x93535f25, __VMLINUX_SYMBOL_STR(tcf_block_netif_keep_dst) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xb4e06cc5, __VMLINUX_SYMBOL_STR(tcf_exts_validate) },
	{ 0xaf2d2888, __VMLINUX_SYMBOL_STR(tcf_em_tree_validate) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1befda79, __VMLINUX_SYMBOL_STR(tcf_exts_dump_stats) },
	{ 0x74140e67, __VMLINUX_SYMBOL_STR(tcf_em_tree_dump) },
	{ 0xa58ed86, __VMLINUX_SYMBOL_STR(tcf_exts_dump) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x45794627, __VMLINUX_SYMBOL_STR(flow_get_u32_dst) },
	{ 0x89f2b2e9, __VMLINUX_SYMBOL_STR(flow_get_u32_src) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xbe52ee31, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2cd63a87, __VMLINUX_SYMBOL_STR(tcf_em_tree_destroy) },
	{ 0x857cc2c0, __VMLINUX_SYMBOL_STR(tcf_exts_destroy) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "C7F0385C40CA32229AEF23A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

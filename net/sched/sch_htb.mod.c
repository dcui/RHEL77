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
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xabf25fb, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xa96cdd5c, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xbf5f58a, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x18eb7bc7, __VMLINUX_SYMBOL_STR(qdisc_warn_nonwc) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x5e6fb48b, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x39451f3, __VMLINUX_SYMBOL_STR(tcf_classify) },
	{ 0x4060adf8, __VMLINUX_SYMBOL_STR(qdisc_hash_add) },
	{ 0xa1726eb2, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0x776fce12, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xda06a69, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0x7dba2a7b, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x44f8636d, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0x7370f000, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x3d7227d1, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x2f4d9f78, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x76fb3905, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x15a313f, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0xbd67bc19, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x62b9524b, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0xf8892c4f, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8d80a463, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xe2ce448b, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0xe9403777, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0x559397b6, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0x4712b835, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x92279dc0, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x369b09d1, __VMLINUX_SYMBOL_STR(tcf_block_get) },
	{ 0x6297e176, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe008922c, __VMLINUX_SYMBOL_STR(rtnl_kfree_skbs) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xacc90a3f, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0xb49070c3, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x788f4370, __VMLINUX_SYMBOL_STR(tcf_block_put) },
	{ 0xded39a6b, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0xaa100ddd, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xfc7632d2, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1F17BA088042A4BD261C714");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

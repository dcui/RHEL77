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
	{ 0x6297e176, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x4060adf8, __VMLINUX_SYMBOL_STR(qdisc_hash_add) },
	{ 0x25718274, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0xdce0a7e4, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0xda06a69, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0x7dba2a7b, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x2789bdfc, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0x7370f000, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x2f4d9f78, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4712b835, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x62b9524b, __VMLINUX_SYMBOL_STR(qdisc_tree_reduce_backlog) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0x5e6fb48b, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x35791dc, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0xa479c9be, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x33fdce41, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0xbf5f58a, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf8892c4f, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xaa100ddd, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xb49070c3, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "300A743C97B5E53D3D83853");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

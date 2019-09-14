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
	{ 0x1632352b, __VMLINUX_SYMBOL_STR(nft_unregister_set) },
	{ 0x6d80911d, __VMLINUX_SYMBOL_STR(nft_register_set) },
	{ 0x7224fcd8, __VMLINUX_SYMBOL_STR(rht_bucket_nested_insert) },
	{ 0x53424ac5, __VMLINUX_SYMBOL_STR(rhashtable_insert_slow) },
	{ 0xaee87ee1, __VMLINUX_SYMBOL_STR(rht_bucket_nested) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xab3dcc6, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_alloc) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xbf63bb61, __VMLINUX_SYMBOL_STR(nft_set_gc_batch_release) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x10108897, __VMLINUX_SYMBOL_STR(rhashtable_init) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xa44d198, __VMLINUX_SYMBOL_STR(rhashtable_walk_exit) },
	{ 0xdeb91cdd, __VMLINUX_SYMBOL_STR(rhashtable_walk_stop) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xb4c6c10e, __VMLINUX_SYMBOL_STR(rhashtable_walk_next) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x233a6e45, __VMLINUX_SYMBOL_STR(rhashtable_walk_start) },
	{ 0x589fadee, __VMLINUX_SYMBOL_STR(rhashtable_walk_enter) },
	{ 0x7fcb442d, __VMLINUX_SYMBOL_STR(nft_set_elem_destroy) },
	{ 0xfe33707d, __VMLINUX_SYMBOL_STR(rhashtable_free_and_destroy) },
	{ 0x797c8fa9, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa1f9a134, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rsi) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_tables";


MODULE_INFO(srcversion, "5F8ED0271AC96A8B43AE159");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

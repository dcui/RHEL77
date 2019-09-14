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
	{ 0xb8834b78, __VMLINUX_SYMBOL_STR(tcf_unregister_action) },
	{ 0x9928a67d, __VMLINUX_SYMBOL_STR(tcf_register_action) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x43a915e9, __VMLINUX_SYMBOL_STR(tcf_idrinfo_destroy) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb1b42470, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x365e6a05, __VMLINUX_SYMBOL_STR(tcf_generic_walker) },
	{ 0x8979608, __VMLINUX_SYMBOL_STR(tcf_idr_search) },
	{ 0x4712b835, __VMLINUX_SYMBOL_STR(nla_put_64bit) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x843ab3a5, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xab665ac8, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd4545060, __VMLINUX_SYMBOL_STR(tcf_idr_insert) },
	{ 0xa28cfcc0, __VMLINUX_SYMBOL_STR(gen_estimator_active) },
	{ 0x7dba2a7b, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x8948255c, __VMLINUX_SYMBOL_STR(__tcf_idr_release) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xda06a69, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0x7370f000, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x3d7227d1, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0xc9b4e0e2, __VMLINUX_SYMBOL_STR(tcf_idr_create) },
	{ 0x66697ae8, __VMLINUX_SYMBOL_STR(tcf_idr_check) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x4df2ea84, __VMLINUX_SYMBOL_STR(gen_estimator_read) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3701B863645D0E9289D5F5E");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
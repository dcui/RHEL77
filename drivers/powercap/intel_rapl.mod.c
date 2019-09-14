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
	{ 0xd75ff713, __VMLINUX_SYMBOL_STR(powercap_unregister_control_type) },
	{ 0x6808b453, __VMLINUX_SYMBOL_STR(__unregister_cpu_notifier) },
	{ 0x839430b2, __VMLINUX_SYMBOL_STR(__register_cpu_notifier) },
	{ 0x7f62a045, __VMLINUX_SYMBOL_STR(cpu_maps_update_done) },
	{ 0x501bb0cb, __VMLINUX_SYMBOL_STR(powercap_register_control_type) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x3465caa3, __VMLINUX_SYMBOL_STR(cpu_maps_update_begin) },
	{ 0xbec30d05, __VMLINUX_SYMBOL_STR(x86_match_cpu) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb337142a, __VMLINUX_SYMBOL_STR(cpumask_any_but) },
	{ 0x2e589b99, __VMLINUX_SYMBOL_STR(cpu_core_map) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x8b2b14ad, __VMLINUX_SYMBOL_STR(cpu_info) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x45449b56, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x6228c21f, __VMLINUX_SYMBOL_STR(smp_call_function_single) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x18e9deaf, __VMLINUX_SYMBOL_STR(powercap_unregister_zone) },
	{ 0x3d222c56, __VMLINUX_SYMBOL_STR(powercap_register_zone) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x7a82cb47, __VMLINUX_SYMBOL_STR(rdmsrl_safe_on_cpu) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x932493a8, __VMLINUX_SYMBOL_STR(iosf_mbi_read) },
	{ 0x6d1d5d9b, __VMLINUX_SYMBOL_STR(iosf_mbi_write) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x910538ff, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=iosf_mbi";

MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:002A:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:002D:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:003A:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:003E:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:003C:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0045:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0046:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:003F:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:003D:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0047:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0056:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:004F:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:005E:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:004E:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0055:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:008E:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:009E:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0066:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:007E:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0037:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:004C:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:004A:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:005A:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:005C:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:007A:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:005F:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0086:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0057:feature:*");
MODULE_ALIAS("x86cpu:vendor:0000:family:0006:model:0085:feature:*");

MODULE_INFO(srcversion, "2CED51596A9B127C7C74BE1");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

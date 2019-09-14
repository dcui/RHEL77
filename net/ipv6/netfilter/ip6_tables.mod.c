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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3d387a96, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0x24c8e482, __VMLINUX_SYMBOL_STR(xt_copy_counters_from_user) },
	{ 0xe0b4971b, __VMLINUX_SYMBOL_STR(xt_compat_lock) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xc096809, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0xd342b5d6, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0x565c7af, __VMLINUX_SYMBOL_STR(xt_compat_match_offset) },
	{ 0x9c995c69, __VMLINUX_SYMBOL_STR(xt_percpu_counter_alloc) },
	{ 0x442bf12b, __VMLINUX_SYMBOL_STR(xt_compat_target_to_user) },
	{ 0xd87ae60d, __VMLINUX_SYMBOL_STR(xt_check_entry_offsets) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x7a95d405, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0xcd4d0f19, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x12c53b6b, __VMLINUX_SYMBOL_STR(xt_compat_target_offset) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xc39c1c8f, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0x1d8e65ad, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xd74c6fa8, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0x6046da00, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0x71de9b3f, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xa9b170d8, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd7f5fcd, __VMLINUX_SYMBOL_STR(xt_alloc_entry_offsets) },
	{ 0xa8ac9321, __VMLINUX_SYMBOL_STR(xt_compat_match_to_user) },
	{ 0xf6c6637d, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa25fc115, __VMLINUX_SYMBOL_STR(xt_compat_check_entry_offsets) },
	{ 0xba18698e, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xe7f493e1, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0xb90a2d85, __VMLINUX_SYMBOL_STR(xt_compat_target_from_user) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3192616f, __VMLINUX_SYMBOL_STR(nf_log_trace) },
	{ 0x5f82f1f7, __VMLINUX_SYMBOL_STR(xt_compat_flush_offsets) },
	{ 0x691a6d69, __VMLINUX_SYMBOL_STR(xt_compat_calc_jump) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0xf99553e9, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0x253e8b44, __VMLINUX_SYMBOL_STR(xt_compat_init_offsets) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xec24fd82, __VMLINUX_SYMBOL_STR(xt_compat_add_offset) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xa4bc932a, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xe9441c54, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0x7679e2bb, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb370d544, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x3e664c26, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x54821529, __VMLINUX_SYMBOL_STR(xt_compat_match_from_user) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x430186e1, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0xfef779fa, __VMLINUX_SYMBOL_STR(xt_find_jump_offset) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xbfacb837, __VMLINUX_SYMBOL_STR(xt_percpu_counter_free) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x5a4896a8, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x3c7952d3, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x482d26fd, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0x77e2f33, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0xbd6381f1, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xd1a21986, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0x161d1417, __VMLINUX_SYMBOL_STR(xt_compat_unlock) },
	{ 0x88db9f48, __VMLINUX_SYMBOL_STR(__check_object_size) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8B0C2F03EB4AFEF03AEF6AC");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

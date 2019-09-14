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
	{ 0xa7345d19, __VMLINUX_SYMBOL_STR(pnfs_unregister_layoutdriver) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xcf7c1604, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_write) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xaf5bf6ef, __VMLINUX_SYMBOL_STR(nfs_debug) },
	{ 0xffcbafb7, __VMLINUX_SYMBOL_STR(ore_read) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x7c9722ba, __VMLINUX_SYMBOL_STR(nfs_dreq_bytes_left) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xda82e7cb, __VMLINUX_SYMBOL_STR(pnfs_ld_write_done) },
	{ 0x498ce8e1, __VMLINUX_SYMBOL_STR(ore_put_io_state) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x19455dfe, __VMLINUX_SYMBOL_STR(ore_write) },
	{ 0x292edbc9, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0xafdf92b6, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_test) },
	{ 0x4d405db8, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x7ddc6cd2, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_cleanup) },
	{ 0x83eb6e27, __VMLINUX_SYMBOL_STR(osduld_info_lookup) },
	{ 0x9e64d08b, __VMLINUX_SYMBOL_STR(pnfs_generic_sync) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcd25c12, __VMLINUX_SYMBOL_STR(find_or_create_page) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xd9c5287d, __VMLINUX_SYMBOL_STR(ore_check_io) },
	{ 0x997bac6e, __VMLINUX_SYMBOL_STR(nfs4_find_get_deviceid) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x2dd5e12f, __VMLINUX_SYMBOL_STR(xdr_init_decode) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0x194fd0c2, __VMLINUX_SYMBOL_STR(mark_tech_preview) },
	{ 0x5de75127, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x1b23ad75, __VMLINUX_SYMBOL_STR(nfs4_put_deviceid_node) },
	{ 0x28806871, __VMLINUX_SYMBOL_STR(ore_verify_layout) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x1b61ff91, __VMLINUX_SYMBOL_STR(osduld_put_device) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x815f2897, __VMLINUX_SYMBOL_STR(empty_zero_page) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x64047202, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_readpages) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0x68f90908, __VMLINUX_SYMBOL_STR(nfs_pgio_current_mirror) },
	{ 0x625c7be5, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_writepages) },
	{ 0xf9b8a8ed, __VMLINUX_SYMBOL_STR(ore_get_rw_state) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x505ee0ac, __VMLINUX_SYMBOL_STR(pnfs_generic_pg_init_read) },
	{ 0x334c1f75, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4d033d97, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xadeacf60, __VMLINUX_SYMBOL_STR(find_get_page) },
	{ 0x948e5a4, __VMLINUX_SYMBOL_STR(nfs4_init_deviceid_node) },
	{ 0x9929085d, __VMLINUX_SYMBOL_STR(xdr_set_scratch_buffer) },
	{ 0x4a54afe2, __VMLINUX_SYMBOL_STR(pnfs_ld_read_done) },
	{ 0xf6dc5a47, __VMLINUX_SYMBOL_STR(pnfs_register_layoutdriver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfsv4,sunrpc,libore,nfs,osd";


MODULE_INFO(srcversion, "7F583D0F23D49F06D4F6E67");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

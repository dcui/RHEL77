#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x434693dd, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xeb862489, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0xf54bd49b, __VMLINUX_SYMBOL_STR(lcm) },
	{ 0xf33ece8e, __VMLINUX_SYMBOL_STR(osd_req_read) },
	{ 0x7b7f76d0, __VMLINUX_SYMBOL_STR(osd_req_decode_get_attr_list) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x702a0025, __VMLINUX_SYMBOL_STR(osd_req_remove_object) },
	{ 0xb3667a2f, __VMLINUX_SYMBOL_STR(osd_req_read_sg) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdce747ae, __VMLINUX_SYMBOL_STR(osd_req_get_attributes) },
	{ 0x487c6251, __VMLINUX_SYMBOL_STR(osd_req_write_kern) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x83123af6, __VMLINUX_SYMBOL_STR(osd_finalize_request) },
	{ 0x180ef224, __VMLINUX_SYMBOL_STR(osd_req_add_get_attr_list) },
	{ 0x867c68af, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0xa281370e, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x83ce4c7b, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdae296, __VMLINUX_SYMBOL_STR(osd_start_request) },
	{ 0xbb4f81e1, __VMLINUX_SYMBOL_STR(osd_end_request) },
	{ 0x3d9ee9f0, __VMLINUX_SYMBOL_STR(clear_page) },
	{ 0xbf3c143a, __VMLINUX_SYMBOL_STR(osd_execute_request_async) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x82e44cad, __VMLINUX_SYMBOL_STR(osd_req_create_object) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb524bed4, __VMLINUX_SYMBOL_STR(osd_req_decode_sense_full) },
	{ 0x3e4f7b54, __VMLINUX_SYMBOL_STR(osd_req_set_attributes) },
	{ 0x7502c520, __VMLINUX_SYMBOL_STR(bio_clone_bioset) },
	{ 0xa90e1fdf, __VMLINUX_SYMBOL_STR(osd_req_add_set_attr_list) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf1bfdcce, __VMLINUX_SYMBOL_STR(osd_req_write) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xc45ab695, __VMLINUX_SYMBOL_STR(bio_add_pc_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libosd,async_xor";


MODULE_INFO(srcversion, "7B0B078B198D375BBCA7722");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

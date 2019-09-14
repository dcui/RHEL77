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
	{ 0xaf759b17, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xf811fa7f, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xb3c5211a, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0x7767ab19, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x8f517b9c, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x8ea459e4, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xc90f8cdc, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x452de78d, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x6c3d0e65, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xc897c382, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x15c92b16, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0xfbc25e3d, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf794b6dc, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0x5ee2ca83, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x31bdc7e8, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f944a92, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xbb8f1949, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x9f58134b, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x7b244558, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xa2cf1474, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x28dc96b, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "33B2BCF424613F28A8F3764");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

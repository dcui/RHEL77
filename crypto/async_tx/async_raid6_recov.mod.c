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
	{ 0xb0d904b7, __VMLINUX_SYMBOL_STR(raid6_empty_zero_page) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x97651e6c, __VMLINUX_SYMBOL_STR(vmemmap_base) },
	{ 0x7ad57e00, __VMLINUX_SYMBOL_STR(dma_find_channel) },
	{ 0x14ebacc7, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0xf0f1e1f0, __VMLINUX_SYMBOL_STR(async_memcpy) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x7c4711c2, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x83ce4c7b, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xd238013b, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xe4b051cf, __VMLINUX_SYMBOL_STR(raid6_datap_recov) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x15fe0cd3, __VMLINUX_SYMBOL_STR(raid6_gfexp) },
	{ 0x5ba93f9d, __VMLINUX_SYMBOL_STR(raid6_gfinv) },
	{ 0xcfb6f0c7, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0xbd662f6, __VMLINUX_SYMBOL_STR(raid6_gfmul) },
	{ 0xce45a6f1, __VMLINUX_SYMBOL_STR(raid6_gfexi) },
	{ 0x1803a6ed, __VMLINUX_SYMBOL_STR(raid6_2data_recov) },
	{ 0x584c5b17, __VMLINUX_SYMBOL_STR(dma_ops) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid6_pq,async_tx,async_memcpy,async_xor,async_pq";


MODULE_INFO(srcversion, "6D76E199B3164A91A1E03AB");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

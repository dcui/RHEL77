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
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x74dcd98c, __VMLINUX_SYMBOL_STR(dm_bufio_get_aux_data) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x9c256008, __VMLINUX_SYMBOL_STR(dm_bufio_get_device_size) },
	{ 0xafbda3f3, __VMLINUX_SYMBOL_STR(dm_bufio_new) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa82b2066, __VMLINUX_SYMBOL_STR(dm_bufio_write_dirty_buffers) },
	{ 0x27000b29, __VMLINUX_SYMBOL_STR(crc32c) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x7c381a76, __VMLINUX_SYMBOL_STR(dm_bufio_get_block_size) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xe7b00dfb, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r13) },
	{ 0xe6024e59, __VMLINUX_SYMBOL_STR(dm_bufio_release) },
	{ 0x532a87cf, __VMLINUX_SYMBOL_STR(dm_bufio_client_create) },
	{ 0x593c1bac, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rbx) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xebcc64a4, __VMLINUX_SYMBOL_STR(dm_bufio_get_block_data) },
	{ 0xeca7949e, __VMLINUX_SYMBOL_STR(dm_bufio_client_destroy) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x6aba7f5e, __VMLINUX_SYMBOL_STR(dm_bufio_get_block_number) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa1d2413a, __VMLINUX_SYMBOL_STR(dm_bufio_read) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xad0dc4f, __VMLINUX_SYMBOL_STR(dm_bufio_mark_buffer_dirty) },
	{ 0xcbb1bae2, __VMLINUX_SYMBOL_STR(dm_bufio_get) },
	{ 0xa448e19f, __VMLINUX_SYMBOL_STR(dm_bufio_prefetch) },
	{ 0x6d3f57bd, __VMLINUX_SYMBOL_STR(dm_bufio_get_client) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-bufio,libcrc32c";


MODULE_INFO(srcversion, "A1F8CCCD0D2B451435F7D02");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

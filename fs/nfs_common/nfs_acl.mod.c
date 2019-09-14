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
	{ 0x1a09418b, __VMLINUX_SYMBOL_STR(xdr_decode_word) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x72dea5ce, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x6f78a65b, __VMLINUX_SYMBOL_STR(xdr_encode_array2) },
	{ 0x41972754, __VMLINUX_SYMBOL_STR(make_kgid) },
	{ 0x495c96f8, __VMLINUX_SYMBOL_STR(posix_acl_init) },
	{ 0x2581e173, __VMLINUX_SYMBOL_STR(xdr_encode_word) },
	{ 0x830404f3, __VMLINUX_SYMBOL_STR(from_kuid) },
	{ 0x1fe8f483, __VMLINUX_SYMBOL_STR(from_kgid) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xe3a53f4c, __VMLINUX_SYMBOL_STR(sort) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x2a196e39, __VMLINUX_SYMBOL_STR(make_kuid) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x6cd30f0a, __VMLINUX_SYMBOL_STR(xdr_decode_array2) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sunrpc";


MODULE_INFO(srcversion, "10E3C9F11C1BFA534F4E771");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

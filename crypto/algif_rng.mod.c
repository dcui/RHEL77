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
	{ 0x4bba392, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4f98b64e, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xd5ae184, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xd06287a5, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x17b6a18f, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x94922865, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xdba7035d, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xdadf4a98, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0xf40f68dd, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0x497f5678, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0x9ad7dce8, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x5a69a0c9, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x6ec80c2, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0x7a43373d, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x23a9574b, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0xa249c828, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0xca40d9d3, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0xe388bca, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x8f944a92, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x14991225, __VMLINUX_SYMBOL_STR(af_alg_release_parent) },
	{ 0xbe97d12e, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0x188d7c33, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc15a44c6, __VMLINUX_SYMBOL_STR(memzero_explicit) },
	{ 0xd7cbddda, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6C9E36827F46D2F3AEC03CA");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

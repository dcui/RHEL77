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
	{ 0xb574b787, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x235214cd, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9bfcb6e7, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0x53c307c0, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x99d17a06, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xd27db446, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x85847527, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xbc24b595, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x1a075eca, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb77abc4a, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0x9b28b145, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xe03dce7b, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2e8447c3, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xce8b1878, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r14) },
	{ 0xc9b2c761, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0xad34f5e2, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0xe11910c8, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x1082fd21, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x8f944a92, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xe9846a03, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x6c4dec2d, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0xb5343a8c, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd6377b34, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xe388bca, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x31bdc7e8, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "F7B0B5F08E0520A3C6A7D20");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

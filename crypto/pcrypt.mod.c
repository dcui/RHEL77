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
	{ 0xbc24b595, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xbe83e4ff, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x2e8447c3, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xab62f63c, __VMLINUX_SYMBOL_STR(padata_start) },
	{ 0xbb77301a, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0xcc2e8c93, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x9b28b145, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x6443f147, __VMLINUX_SYMBOL_STR(padata_do_parallel) },
	{ 0x799aca4, __VMLINUX_SYMBOL_STR(local_bh_enable) },
	{ 0x3ff62317, __VMLINUX_SYMBOL_STR(local_bh_disable) },
	{ 0x53c307c0, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x5da32b0e, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0x1a075eca, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xb574b787, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xcfc68341, __VMLINUX_SYMBOL_STR(synchronize_rcu_bh) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb8c29477, __VMLINUX_SYMBOL_STR(padata_stop) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xec71c51e, __VMLINUX_SYMBOL_STR(padata_free) },
	{ 0xdbc34085, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0x2a70228, __VMLINUX_SYMBOL_STR(padata_unregister_cpumask_notifier) },
	{ 0xd7d79132, __VMLINUX_SYMBOL_STR(put_online_cpus) },
	{ 0xe66404c1, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xd9c798eb, __VMLINUX_SYMBOL_STR(kobject_add) },
	{ 0x83dacca8, __VMLINUX_SYMBOL_STR(padata_register_cpumask_notifier) },
	{ 0xd77a5aa5, __VMLINUX_SYMBOL_STR(__bitmap_and) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x5225ce99, __VMLINUX_SYMBOL_STR(alloc_cpumask_var) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8076583, __VMLINUX_SYMBOL_STR(padata_alloc_possible) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x3efb35c9, __VMLINUX_SYMBOL_STR(get_online_cpus) },
	{ 0x8f944a92, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x60912ff4, __VMLINUX_SYMBOL_STR(crypto_aead_setauthsize) },
	{ 0xb330a6, __VMLINUX_SYMBOL_STR(padata_do_serial) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe11910c8, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xb601be4c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rdx) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "356B619F2F98E0CF3277B34");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

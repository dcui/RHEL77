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
	{ 0xa7de1d69, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcd064321, __VMLINUX_SYMBOL_STR(mlxsw_core_port_clear) },
	{ 0x37613521, __VMLINUX_SYMBOL_STR(ethtool_convert_legacy_u32_to_link_mode) },
	{ 0x7028aa99, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xbfe4f83a, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0xbfb7df3c, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_priv) },
	{ 0xf8071e5e, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x8231dd28, __VMLINUX_SYMBOL_STR(mlxsw_core_trap_register) },
	{ 0x674187c7, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_unregister) },
	{ 0x3bd7d704, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xcc31f329, __VMLINUX_SYMBOL_STR(mlxsw_core_port_init) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xbb97f6d3, __VMLINUX_SYMBOL_STR(mlxsw_pci_driver_register) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x82bb04bb, __VMLINUX_SYMBOL_STR(mlxsw_pci_driver_unregister) },
	{ 0xca34ccf, __VMLINUX_SYMBOL_STR(mlxsw_core_max_ports) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x532894bc, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xa780a44, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x5948f2f0, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xfb4e23d9, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xa1a12204, __VMLINUX_SYMBOL_STR(mlxsw_core_port_eth_set) },
	{ 0xbd671048, __VMLINUX_SYMBOL_STR(__alloc_percpu_gfp) },
	{ 0xec51e246, __VMLINUX_SYMBOL_STR(mlxsw_core_skb_transmit_busy) },
	{ 0x5f2d7b40, __VMLINUX_SYMBOL_STR(mlxsw_core_driver_register) },
	{ 0xfe9869cb, __VMLINUX_SYMBOL_STR(ethtool_convert_link_mode_to_legacy_u32) },
	{ 0x141e6a0d, __VMLINUX_SYMBOL_STR(mlxsw_core_port_fini) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc311ec22, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x155f4108, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x63fedd30, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xa0f3b7a1, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x354b044, __VMLINUX_SYMBOL_STR(mlxsw_core_trap_unregister) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x64d6bea2, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xee8a3880, __VMLINUX_SYMBOL_STR(mlxsw_reg_query) },
	{ 0x93a99dbc, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs_rh) },
	{ 0xa1b59fab, __VMLINUX_SYMBOL_STR(mlxsw_core_port_ib_set) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4816904a, __VMLINUX_SYMBOL_STR(mlxsw_core_skb_transmit) },
	{ 0xf7d733e8, __VMLINUX_SYMBOL_STR(mlxsw_reg_write) },
	{ 0xf8fc95ba, __VMLINUX_SYMBOL_STR(mlxsw_core_port_type_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mlxsw_core,mlxsw_pci";

MODULE_ALIAS("pci:v000015B3d0000C738sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "CD24F55A2294173032AA82D");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

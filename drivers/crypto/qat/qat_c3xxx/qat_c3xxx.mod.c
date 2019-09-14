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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x9f13414d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x18610637, __VMLINUX_SYMBOL_STR(adf_dev_init) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0xc28f4055, __VMLINUX_SYMBOL_STR(adf_dev_stop) },
	{ 0x4cf6389a, __VMLINUX_SYMBOL_STR(adf_devmgr_rm_dev) },
	{ 0xd531c1bc, __VMLINUX_SYMBOL_STR(adf_init_arb) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8a485524, __VMLINUX_SYMBOL_STR(adf_dev_shutdown) },
	{ 0x5504be51, __VMLINUX_SYMBOL_STR(adf_disable_aer) },
	{ 0x8f6e15f, __VMLINUX_SYMBOL_STR(adf_cfg_dev_add) },
	{ 0x127b8725, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x237de890, __VMLINUX_SYMBOL_STR(adf_isr_resource_alloc) },
	{ 0x4c48a854, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x6fa2369b, __VMLINUX_SYMBOL_STR(adf_cfg_dev_remove) },
	{ 0x181ffdb7, __VMLINUX_SYMBOL_STR(adf_disable_sriov) },
	{ 0x655db601, __VMLINUX_SYMBOL_STR(adf_reset_flr) },
	{ 0xa1555f86, __VMLINUX_SYMBOL_STR(adf_isr_resource_free) },
	{ 0x7b80851e, __VMLINUX_SYMBOL_STR(adf_devmgr_add_dev) },
	{ 0x15455c9c, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xb3ea49f2, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_node_trace) },
	{ 0xa5a84d8f, __VMLINUX_SYMBOL_STR(adf_dev_start) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x193a0ad4, __VMLINUX_SYMBOL_STR(adf_sriov_configure) },
	{ 0xa7dd2030, __VMLINUX_SYMBOL_STR(adf_enable_aer) },
	{ 0x5a16e704, __VMLINUX_SYMBOL_STR(adf_send_admin_init) },
	{ 0x8783dc09, __VMLINUX_SYMBOL_STR(adf_init_admin_comms) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x3e5705c1, __VMLINUX_SYMBOL_STR(qat_crypto_dev_config) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xf99d347e, __VMLINUX_SYMBOL_STR(node_states) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xdba74019, __VMLINUX_SYMBOL_STR(adf_devmgr_pci_to_accel_dev) },
	{ 0x17c5e7a6, __VMLINUX_SYMBOL_STR(adf_exit_admin_comms) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x8055d058, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x22d4baab, __VMLINUX_SYMBOL_STR(adf_exit_arb) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x53108e44, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=intel_qat";

MODULE_ALIAS("pci:v00008086d000019E2sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "52F8B09BC233F07866A3326");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x2d408224, __VMLINUX_SYMBOL_STR(amd_nb_num) },
	{ 0xc110ca23, __VMLINUX_SYMBOL_STR(edac_mc_add_mc_with_groups) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1ed8b599, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r8) },
	{ 0xfdf8da6a, __VMLINUX_SYMBOL_STR(node_to_amd_nb) },
	{ 0xcf6cfe1f, __VMLINUX_SYMBOL_STR(msrs_free) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x5ac9a0e9, __VMLINUX_SYMBOL_STR(edac_pci_release_generic_ctl) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x45449b56, __VMLINUX_SYMBOL_STR(boot_cpu_data) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0xc29957c3, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rcx) },
	{ 0x3d7c1ed7, __VMLINUX_SYMBOL_STR(msrs_alloc) },
	{ 0xdbc34085, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xb51fbd64, __VMLINUX_SYMBOL_STR(edac_op_state) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x715dd89b, __VMLINUX_SYMBOL_STR(rdmsr_on_cpus) },
	{ 0x6cbcb3ec, __VMLINUX_SYMBOL_STR(edac_mc_handle_error) },
	{ 0x14878009, __VMLINUX_SYMBOL_STR(amd_report_gart_errors) },
	{ 0x3e092b88, __VMLINUX_SYMBOL_STR(zalloc_cpumask_var) },
	{ 0x830c469f, __VMLINUX_SYMBOL_STR(amd_register_ecc_decoder) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x70af3595, __VMLINUX_SYMBOL_STR(edac_mc_free) },
	{ 0xe55df866, __VMLINUX_SYMBOL_STR(wrmsr_on_cpus) },
	{ 0x9f46ced8, __VMLINUX_SYMBOL_STR(__sw_hweight64) },
	{ 0xcbe7fb80, __VMLINUX_SYMBOL_STR(amd_smn_read) },
	{ 0x2cd8ae37, __VMLINUX_SYMBOL_STR(edac_mc_alloc) },
	{ 0x3c00733f, __VMLINUX_SYMBOL_STR(edac_pci_create_generic_ctl) },
	{ 0x658c8186, __VMLINUX_SYMBOL_STR(amd_get_nb_id) },
	{ 0xdb81f6fc, __VMLINUX_SYMBOL_STR(find_mci_by_dev) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x910538ff, __VMLINUX_SYMBOL_STR(pv_cpu_ops) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd94cc09, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd919806a, __VMLINUX_SYMBOL_STR(amd_cache_northbridges) },
	{ 0xaf761418, __VMLINUX_SYMBOL_STR(amd_unregister_ecc_decoder) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x58af4a0f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xb728770a, __VMLINUX_SYMBOL_STR(edac_mc_find) },
	{ 0x9dd70dc5, __VMLINUX_SYMBOL_STR(edac_mc_del_mc) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x6a3665fd, __VMLINUX_SYMBOL_STR(umc_normaddr_to_sysaddr) },
	{ 0xefeafcf1, __VMLINUX_SYMBOL_STR(edac_has_mcs) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=edac_mce_amd";

MODULE_ALIAS("x86cpu:vendor:0002:family:000F:model:*:feature:*");
MODULE_ALIAS("x86cpu:vendor:0002:family:0010:model:*:feature:*");
MODULE_ALIAS("x86cpu:vendor:0002:family:0015:model:*:feature:*");
MODULE_ALIAS("x86cpu:vendor:0002:family:0016:model:*:feature:*");
MODULE_ALIAS("x86cpu:vendor:0002:family:0017:model:*:feature:*");

MODULE_INFO(srcversion, "EEE60D678FE7B6A3E0E8FF2");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

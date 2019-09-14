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
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xd2c58ab2, __VMLINUX_SYMBOL_STR(apei_exec_noop) },
	{ 0xfc968c8b, __VMLINUX_SYMBOL_STR(apei_exec_write_register_value) },
	{ 0x33b96e5d, __VMLINUX_SYMBOL_STR(apei_exec_write_register) },
	{ 0x3b7145bb, __VMLINUX_SYMBOL_STR(apei_exec_read_register_value) },
	{ 0x6c1251fd, __VMLINUX_SYMBOL_STR(apei_exec_read_register) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x3cd32b71, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x57805a8e, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{  0x3d853, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0xc821665c, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0x636c619f, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xafa7e1b2, __VMLINUX_SYMBOL_STR(debugfs_create_blob) },
	{ 0x9d2a62b0, __VMLINUX_SYMBOL_STR(debugfs_create_x64) },
	{ 0xbe8358e1, __VMLINUX_SYMBOL_STR(debugfs_create_x32) },
	{ 0x3d5f392d, __VMLINUX_SYMBOL_STR(acpi_os_unmap_memory) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x964d5c39, __VMLINUX_SYMBOL_STR(acpi_os_map_memory) },
	{ 0xae9bb4d4, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x9f13414d, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x7857cf18, __VMLINUX_SYMBOL_STR(apei_get_debugfs_dir) },
	{ 0x2dedc4c2, __VMLINUX_SYMBOL_STR(acpi_format_exception) },
	{ 0x81472677, __VMLINUX_SYMBOL_STR(acpi_get_table) },
	{ 0x1a45cb6c, __VMLINUX_SYMBOL_STR(acpi_disabled) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x7d36b7ad, __VMLINUX_SYMBOL_STR(region_intersects_pmem) },
	{ 0xbb449c5a, __VMLINUX_SYMBOL_STR(region_intersects_ram) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf51ae235, __VMLINUX_SYMBOL_STR(touch_nmi_watchdog) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x635ec980, __VMLINUX_SYMBOL_STR(apei_exec_post_unmap_gars) },
	{ 0xb52e502, __VMLINUX_SYMBOL_STR(apei_resources_add) },
	{ 0xe13cb4d, __VMLINUX_SYMBOL_STR(apei_resources_release) },
	{ 0x279cb985, __VMLINUX_SYMBOL_STR(apei_exec_pre_map_gars) },
	{ 0xef1f6e23, __VMLINUX_SYMBOL_STR(apei_resources_request) },
	{ 0x17614bf3, __VMLINUX_SYMBOL_STR(apei_resources_sub) },
	{ 0x74457e56, __VMLINUX_SYMBOL_STR(apei_resources_fini) },
	{ 0x94c318be, __VMLINUX_SYMBOL_STR(apei_exec_collect_resources) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x68c7263, __VMLINUX_SYMBOL_STR(ioremap_cache) },
	{ 0x1fedf0f4, __VMLINUX_SYMBOL_STR(__request_region) },
	{ 0x69a358a6, __VMLINUX_SYMBOL_STR(iomem_resource) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xeb370805, __VMLINUX_SYMBOL_STR(__apei_exec_run) },
	{ 0x8956aeae, __VMLINUX_SYMBOL_STR(apei_exec_ctx_init) },
	{ 0x8f763434, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "20413B077849F8C582FB5A9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

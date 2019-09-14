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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x45e2e38, __VMLINUX_SYMBOL_STR(mei_irq_write_handler) },
	{ 0xbb5ca3c1, __VMLINUX_SYMBOL_STR(mei_write_is_idle) },
	{ 0x91294261, __VMLINUX_SYMBOL_STR(mei_device_init) },
	{ 0x3906ef29, __VMLINUX_SYMBOL_STR(__pm_runtime_use_autosuspend) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0xa0d3db3b, __VMLINUX_SYMBOL_STR(__pm_runtime_suspend) },
	{ 0x5316299f, __VMLINUX_SYMBOL_STR(__tracepoint_mei_pci_cfg_read) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x422d53f1, __VMLINUX_SYMBOL_STR(mei_restart) },
	{ 0x2e409d94, __VMLINUX_SYMBOL_STR(__tracepoint_mei_reg_write) },
	{ 0x54573e49, __VMLINUX_SYMBOL_STR(mei_hbm_pg_resume) },
	{ 0x30fb3bec, __VMLINUX_SYMBOL_STR(mei_irq_compl_handler) },
	{ 0xdf566a59, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r9) },
	{ 0xcf73ce21, __VMLINUX_SYMBOL_STR(pci_release_regions) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x6d8753e9, __VMLINUX_SYMBOL_STR(pm_runtime_allow) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x127b8725, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xbcb373db, __VMLINUX_SYMBOL_STR(__tracepoint_mei_reg_read) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xdf1011e0, __VMLINUX_SYMBOL_STR(mei_register) },
	{ 0x30ade9ed, __VMLINUX_SYMBOL_STR(mei_stop) },
	{ 0x7d60a67e, __VMLINUX_SYMBOL_STR(mei_irq_read_handler) },
	{ 0xda61ed5, __VMLINUX_SYMBOL_STR(mei_cancel_work) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xc9dfa132, __VMLINUX_SYMBOL_STR(mei_deregister) },
	{ 0x7c481ff1, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x69779953, __VMLINUX_SYMBOL_STR(__pm_runtime_set_status) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xabda77d3, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe9020809, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x7ad44e6f, __VMLINUX_SYMBOL_STR(mei_hbm_pg) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x65693bc8, __VMLINUX_SYMBOL_STR(mei_start) },
	{ 0xc3fc2f, __VMLINUX_SYMBOL_STR(pci_request_regions) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x79142775, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x9726c898, __VMLINUX_SYMBOL_STR(pci_dev_run_wake) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xcace5945, __VMLINUX_SYMBOL_STR(pm_runtime_set_autosuspend_delay) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x142802a, __VMLINUX_SYMBOL_STR(dev_pm_domain_set) },
	{ 0x8055d058, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mei";

MODULE_ALIAS("pci:v00008086d00002974sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002984sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002994sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029A4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000029F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028D4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000028F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A44sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002A74sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E04sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E14sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E24sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002E34sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B64sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B65sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001DBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009CBBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009D3Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A13Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A1BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005A9Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000A2BBsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "3E7A177930E7EE1361CCCC8");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

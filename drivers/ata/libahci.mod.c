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
	{ 0xbea09b31, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0x1f635d72, __VMLINUX_SYMBOL_STR(ata_port_freeze) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf8f3a0fb, __VMLINUX_SYMBOL_STR(ata_ratelimit) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9327cf65, __VMLINUX_SYMBOL_STR(dev_attr_sw_activity) },
	{ 0xac202ca1, __VMLINUX_SYMBOL_STR(ata_port_printk) },
	{ 0x4879a6e5, __VMLINUX_SYMBOL_STR(sata_pmp_error_handler) },
	{ 0x643da2c4, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0xc2b5de9e, __VMLINUX_SYMBOL_STR(sata_pmp_qc_defer_cmd_switch) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x1976aa06, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xe9e50930, __VMLINUX_SYMBOL_STR(ata_port_desc) },
	{ 0xd28180a0, __VMLINUX_SYMBOL_STR(dev_attr_em_message) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x4fdc945d, __VMLINUX_SYMBOL_STR(sata_deb_timing_normal) },
	{ 0xfb4072d6, __VMLINUX_SYMBOL_STR(sata_pmp_port_ops) },
	{ 0x17aef392, __VMLINUX_SYMBOL_STR(ata_ehi_push_desc) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xeb2d3062, __VMLINUX_SYMBOL_STR(ata_dev_set_feature) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0xb8b43466, __VMLINUX_SYMBOL_STR(ata_dev_printk) },
	{ 0x883926a5, __VMLINUX_SYMBOL_STR(ata_wait_register) },
	{ 0x801b3ea1, __VMLINUX_SYMBOL_STR(ata_std_qc_defer) },
	{ 0xfb079ff2, __VMLINUX_SYMBOL_STR(ata_host_start) },
	{ 0xccdd491b, __VMLINUX_SYMBOL_STR(ata_link_abort) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xcd4ff675, __VMLINUX_SYMBOL_STR(dev_attr_unload_heads) },
	{ 0xe62f30aa, __VMLINUX_SYMBOL_STR(ata_msleep) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xcccfb2fa, __VMLINUX_SYMBOL_STR(sata_deb_timing_hotplug) },
	{ 0x15784899, __VMLINUX_SYMBOL_STR(devm_kfree) },
	{ 0xf4e32086, __VMLINUX_SYMBOL_STR(ata_ehi_clear_desc) },
	{ 0xaa7379e, __VMLINUX_SYMBOL_STR(sata_link_hardreset) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x73c832f2, __VMLINUX_SYMBOL_STR(ata_dev_classify) },
	{ 0xdde5e365, __VMLINUX_SYMBOL_STR(ata_host_activate) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xe9011671, __VMLINUX_SYMBOL_STR(ata_host_register) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x9fa1c9ed, __VMLINUX_SYMBOL_STR(dev_attr_em_message_type) },
	{ 0xe6a0bae, __VMLINUX_SYMBOL_STR(sata_lpm_ignore_phy_events) },
	{ 0x26ade7cd, __VMLINUX_SYMBOL_STR(dev_driver_string) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x56dc0b46, __VMLINUX_SYMBOL_STR(ata_link_printk) },
	{ 0xd09152a8, __VMLINUX_SYMBOL_STR(ata_wait_after_reset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6da67b43, __VMLINUX_SYMBOL_STR(ata_qc_complete_multiple) },
	{ 0x6fb4e0b9, __VMLINUX_SYMBOL_STR(ata_link_next) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x6128b5fc, __VMLINUX_SYMBOL_STR(__printk_ratelimit) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x822548a3, __VMLINUX_SYMBOL_STR(ata_std_postreset) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc56c9019, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0xcef5344c, __VMLINUX_SYMBOL_STR(ata_port_abort) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xa6ea6151, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xd24e8280, __VMLINUX_SYMBOL_STR(sata_async_notification) },
	{ 0x82dae60, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";


MODULE_INFO(srcversion, "BC11ACFB17CDA3B6D20DECD");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x570d7dcb, __VMLINUX_SYMBOL_STR(ata_bmdma32_port_ops) },
	{ 0xf8e9ff27, __VMLINUX_SYMBOL_STR(ata_cable_40wire) },
	{ 0xc56c9019, __VMLINUX_SYMBOL_STR(dev_attr_link_power_management_policy) },
	{ 0x6fed14b2, __VMLINUX_SYMBOL_STR(ata_common_sdev_attrs) },
	{ 0x680b4229, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xe99f1c8d, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0x2db8ca2f, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xa3fc65c4, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x3da94ee3, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9f2e91a9, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x48274201, __VMLINUX_SYMBOL_STR(sata_std_hardreset) },
	{ 0x15692c87, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x2a00d69b, __VMLINUX_SYMBOL_STR(ata_slave_link_init) },
	{ 0xf44490e2, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0x9610eab4, __VMLINUX_SYMBOL_STR(pci_intx) },
	{ 0x127b8725, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8055d058, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xce9dd96a, __VMLINUX_SYMBOL_STR(ata_pci_sff_activate_host) },
	{ 0xe818b32b, __VMLINUX_SYMBOL_STR(ata_bmdma_interrupt) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xfe911bc6, __VMLINUX_SYMBOL_STR(pcim_iomap_regions) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x71cff295, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0x58af4a0f, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9ccef4c7, __VMLINUX_SYMBOL_STR(ata_pci_bmdma_prepare_host) },
	{ 0xebfdcb96, __VMLINUX_SYMBOL_STR(pci_read_config_dword) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x17c754ae, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x50877b9, __VMLINUX_SYMBOL_STR(dmi_first_match) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0x7857b38b, __VMLINUX_SYMBOL_STR(ata_sff_prereset) },
	{ 0xa343890f, __VMLINUX_SYMBOL_STR(pci_test_config_bits) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xc9426d6d, __VMLINUX_SYMBOL_STR(pci_write_config_byte) },
	{ 0xc2f7c1b1, __VMLINUX_SYMBOL_STR(pci_read_config_byte) },
	{ 0x8bd590db, __VMLINUX_SYMBOL_STR(pci_write_config_word) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x26887399, __VMLINUX_SYMBOL_STR(ata_pio_need_iordy) },
	{ 0x408e5475, __VMLINUX_SYMBOL_STR(ata_bmdma_status) },
	{ 0x643da2c4, __VMLINUX_SYMBOL_STR(sata_link_scr_lpm) },
	{ 0x4276a767, __VMLINUX_SYMBOL_STR(ata_bmdma_port_start) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x7cc0b9e9, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x7f59e59, __VMLINUX_SYMBOL_STR(pci_write_config_dword) },
	{ 0x53108e44, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0xf2d35b0, __VMLINUX_SYMBOL_STR(ata_pci_device_do_suspend) },
	{ 0xf9765833, __VMLINUX_SYMBOL_STR(dmi_match) },
	{ 0x6add5c9a, __VMLINUX_SYMBOL_STR(dmi_find_device) },
	{ 0xd4835ef8, __VMLINUX_SYMBOL_STR(dmi_check_system) },
	{ 0x24c3e5a2, __VMLINUX_SYMBOL_STR(ata_host_suspend) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf89a75fa, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x9d7dff3e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0x705cd02f, __VMLINUX_SYMBOL_STR(pci_reenable_device) },
	{ 0x5bbdc39c, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x5ede9448, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libata";

MODULE_ALIAS("pci:v00008086d00007010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv000015ADsd00001976bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007111sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007199sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00007601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000084CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002421sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000244Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000248Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024C1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024CBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000245Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000266Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000269Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002850sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024D1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000024DFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025A3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000025B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002651sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002652sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002653sv*sd*bc01sc01i*");
MODULE_ALIAS("pci:v00008086d000027C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000027C4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002680sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002820sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002825sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A0bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A1bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv0000106Bsd000000A3bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002828sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002921sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002926sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002928sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000292Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A06sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003A26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B26sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B28sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00003B2Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001E09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00009C09sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00002326sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F30sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001F31sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D08sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D60sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00008D68sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F20sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000F21sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000023A6sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "BECF828A30FD905EC05478B");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

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
	{ 0x8e924e68, __VMLINUX_SYMBOL_STR(ahci_sdev_attrs) },
	{ 0xecd853dc, __VMLINUX_SYMBOL_STR(ahci_shost_attrs) },
	{ 0x680b4229, __VMLINUX_SYMBOL_STR(ata_scsi_unlock_native_capacity) },
	{ 0xe99f1c8d, __VMLINUX_SYMBOL_STR(ata_std_bios_param) },
	{ 0xcd95f710, __VMLINUX_SYMBOL_STR(ata_scsi_change_queue_depth) },
	{ 0x2db8ca2f, __VMLINUX_SYMBOL_STR(ata_scsi_slave_destroy) },
	{ 0xa3fc65c4, __VMLINUX_SYMBOL_STR(ata_scsi_slave_config) },
	{ 0x3da94ee3, __VMLINUX_SYMBOL_STR(ata_scsi_queuecmd) },
	{ 0x9f2e91a9, __VMLINUX_SYMBOL_STR(ata_scsi_ioctl) },
	{ 0x4e3ae8fe, __VMLINUX_SYMBOL_STR(ahci_ops) },
	{ 0x7cc0b9e9, __VMLINUX_SYMBOL_STR(ata_pci_remove_one) },
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xabda77d3, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x93be5933, __VMLINUX_SYMBOL_STR(pcim_pin_device) },
	{ 0x71cff295, __VMLINUX_SYMBOL_STR(ata_print_version) },
	{ 0xf699f988, __VMLINUX_SYMBOL_STR(ahci_host_activate) },
	{ 0xbe4a1520, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x8081c1da, __VMLINUX_SYMBOL_STR(ahci_print_info) },
	{ 0xc2560ac2, __VMLINUX_SYMBOL_STR(pci_read_config_word) },
	{ 0x17fbce60, __VMLINUX_SYMBOL_STR(sme_me_mask) },
	{ 0x7ae5ad74, __VMLINUX_SYMBOL_STR(sme_active) },
	{ 0x7a7f7d68, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x59d5a7f7, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xbea09b31, __VMLINUX_SYMBOL_STR(ata_dummy_port_ops) },
	{ 0xc126b784, __VMLINUX_SYMBOL_STR(ata_port_pbar_desc) },
	{ 0xea50dad3, __VMLINUX_SYMBOL_STR(ahci_ignore_sss) },
	{ 0xbe7a5488, __VMLINUX_SYMBOL_STR(ata_host_alloc_pinfo) },
	{ 0xd4442b46, __VMLINUX_SYMBOL_STR(ahci_set_em_messages) },
	{ 0x2c0e0075, __VMLINUX_SYMBOL_STR(ahci_save_initial_config) },
	{ 0xf44490e2, __VMLINUX_SYMBOL_STR(pcim_iomap_table) },
	{ 0xd5ec60d8, __VMLINUX_SYMBOL_STR(pcim_iomap_regions_request_all) },
	{ 0x17c754ae, __VMLINUX_SYMBOL_STR(pcim_enable_device) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xd65c1e80, __VMLINUX_SYMBOL_STR(ahci_fill_cmd_slot) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6cd21997, __VMLINUX_SYMBOL_STR(ata_tf_to_fis) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb2251d15, __VMLINUX_SYMBOL_STR(ahci_port_resume) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x82dae60, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x636462f8, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9304b6, __VMLINUX_SYMBOL_STR(ata_tf_from_fis) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2f1a8361, __VMLINUX_SYMBOL_STR(ata_pci_device_suspend) },
	{ 0xd25b0a6a, __VMLINUX_SYMBOL_STR(ahci_init_controller) },
	{ 0x3d09a10b, __VMLINUX_SYMBOL_STR(ahci_reset_controller) },
	{ 0x9d7dff3e, __VMLINUX_SYMBOL_STR(ata_host_resume) },
	{ 0xf89a75fa, __VMLINUX_SYMBOL_STR(ata_pci_device_do_resume) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libahci,libata";

MODULE_ALIAS("pci:v00001191d0000000Dsv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "F79BF65B58855B484EBC3F0");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

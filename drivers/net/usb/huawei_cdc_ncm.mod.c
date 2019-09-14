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
	{ 0xf5caf607, __VMLINUX_SYMBOL_STR(cdc_ncm_tx_fixup) },
	{ 0x545290f0, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_fixup) },
	{ 0x8d328f38, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x12bb0f4f, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x3fbb7b80, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xeaad664, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x1068a034, __VMLINUX_SYMBOL_STR(usb_autopm_put_interface) },
	{ 0x44824fc3, __VMLINUX_SYMBOL_STR(usb_autopm_get_interface) },
	{ 0xd2554df8, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x6ea7691d, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x3668556, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0xa19416d1, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0xf950bdd2, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ncm,usbnet,cdc-wdm";

MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip16in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip46in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc02ip76in*");
MODULE_ALIAS("usb:v12D1p*d*dc*dsc*dp*icFFisc03ip16in*");

MODULE_INFO(srcversion, "8A1FBE646C007A3B5BD4B14");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

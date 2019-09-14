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
	{ 0x2cb61da5, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0x99487493, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xe2b87116, __VMLINUX_SYMBOL_STR(register_sja1000dev) },
	{ 0x87ebcb71, __VMLINUX_SYMBOL_STR(alloc_sja1000dev) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x46734db7, __VMLINUX_SYMBOL_STR(pci_enable_device) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x1c3e657e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x35a49f06, __VMLINUX_SYMBOL_STR(free_sja1000dev) },
	{ 0x5626a8bc, __VMLINUX_SYMBOL_STR(unregister_sja1000dev) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x127b8725, __VMLINUX_SYMBOL_STR(pci_iounmap) },
	{ 0x8055d058, __VMLINUX_SYMBOL_STR(pci_iomap) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sja1000";

MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc02sc80i00*");
MODULE_ALIAS("pci:v0000144Ad00007841sv*sd*bc07sc80i00*");
MODULE_ALIAS("pci:v000010B5d00009050sv000012FEsd00000004bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd0000010Bbc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012FEsd00000501bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000009bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd0000000Ebc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009056sv000012FEsd00000200bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009050sv*sd00002540bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00002715sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001498d0000032Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010B5d00009030sv000012C4sd00000900bc*sc*i*");

MODULE_INFO(srcversion, "0DC5BEA33DEA3175CA13F0A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

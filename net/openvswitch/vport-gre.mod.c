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
	{ 0x42c6546a, __VMLINUX_SYMBOL_STR(dev_queue_xmit) },
	{ 0xd8f7137d, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0x736e7b45, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x1b819832, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0xf8baf4c9, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x7906ae2f, __VMLINUX_SYMBOL_STR(rtnl_delete_link) },
	{ 0xdbe1342f, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x3b87ef65, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x88374ce3, __VMLINUX_SYMBOL_STR(gretap_fb_dev_create) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x8120aaf9, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,ip_gre";


MODULE_INFO(srcversion, "5DE4BAF836DB4753FBA5FBD");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

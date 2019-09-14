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
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x66cf5afb, __VMLINUX_SYMBOL_STR(vmbus_hvsock_device_unregister) },
	{ 0xad118769, __VMLINUX_SYMBOL_STR(__hv_pkt_iter_next) },
	{ 0xd1c7b353, __VMLINUX_SYMBOL_STR(__vsock_create) },
	{ 0x42396e17, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0xf3a322be, __VMLINUX_SYMBOL_STR(vmbus_set_chn_rescind_callback) },
	{ 0xd212a40, __VMLINUX_SYMBOL_STR(__vsock_core_init) },
	{ 0xf5ee3a25, __VMLINUX_SYMBOL_STR(hv_pkt_iter_close) },
	{ 0x7f730c80, __VMLINUX_SYMBOL_STR(vsock_core_exit) },
	{ 0xb1a5bf92, __VMLINUX_SYMBOL_STR(vsock_find_connected_socket) },
	{ 0x46a417ca, __VMLINUX_SYMBOL_STR(vmbus_proto_version) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x194fd0c2, __VMLINUX_SYMBOL_STR(mark_tech_preview) },
	{ 0x9330d234, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0xd7cbddda, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0x15c0c57c, __VMLINUX_SYMBOL_STR(vsock_addr_init) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd66f3d37, __VMLINUX_SYMBOL_STR(vsock_find_bound_socket) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9e754aa6, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd23aad4b, __VMLINUX_SYMBOL_STR(hv_pkt_iter_first) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x52630cd5, __VMLINUX_SYMBOL_STR(vmbus_sendpacket) },
	{ 0x6874e561, __VMLINUX_SYMBOL_STR(vsock_remove_sock) },
	{ 0x74b72f93, __VMLINUX_SYMBOL_STR(vmbus_send_tl_connect_request) },
	{ 0x91c31fd8, __VMLINUX_SYMBOL_STR(vsock_insert_connected) },
	{ 0x2b3b4899, __VMLINUX_SYMBOL_STR(vsock_enqueue_accept) },
	{ 0xd1c7f6c7, __VMLINUX_SYMBOL_STR(vmbus_driver_unregister) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus,vsock";


MODULE_INFO(srcversion, "E843E113D9598B134C48471");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

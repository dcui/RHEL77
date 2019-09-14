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
	{ 0x42396e17, __VMLINUX_SYMBOL_STR(__vmbus_driver_register) },
	{ 0xd1c7f6c7, __VMLINUX_SYMBOL_STR(vmbus_driver_unregister) },
	{ 0x5c8f2257, __VMLINUX_SYMBOL_STR(x86_msi) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54efb5d6, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xbe18153d, __VMLINUX_SYMBOL_STR(try_wait_for_completion) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x512101d1, __VMLINUX_SYMBOL_STR(apic) },
	{ 0xe92c20f0, __VMLINUX_SYMBOL_STR(vmbus_recvpacket_raw) },
	{ 0x816facf9, __VMLINUX_SYMBOL_STR(pci_remove_root_bus) },
	{ 0xe47eccf, __VMLINUX_SYMBOL_STR(pci_stop_root_bus) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x38a71b7e, __VMLINUX_SYMBOL_STR(pci_free_resource_list) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x71e3cecb, __VMLINUX_SYMBOL_STR(up) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0x65e75cb6, __VMLINUX_SYMBOL_STR(__list_del_entry) },
	{ 0x9f6b4c62, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x45a765cf, __VMLINUX_SYMBOL_STR(pci_add_resource) },
	{ 0x9c42082d, __VMLINUX_SYMBOL_STR(pci_bus_add_devices) },
	{ 0x5f45a6f3, __VMLINUX_SYMBOL_STR(pci_bus_assign_resources) },
	{ 0xd3eeaee5, __VMLINUX_SYMBOL_STR(pci_scan_child_bus) },
	{ 0x161195a3, __VMLINUX_SYMBOL_STR(pci_create_root_bus) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x9eeda0e1, __VMLINUX_SYMBOL_STR(vmbus_allocate_mmio) },
	{ 0xedc95699, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x9e754aa6, __VMLINUX_SYMBOL_STR(vmbus_close) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x9330d234, __VMLINUX_SYMBOL_STR(vmbus_open) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x9b388444, __VMLINUX_SYMBOL_STR(get_zeroed_page) },
	{ 0xdbc34085, __VMLINUX_SYMBOL_STR(free_cpumask_var) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x626d8132, __VMLINUX_SYMBOL_STR(hv_max_vp_index) },
	{ 0xd77a5aa5, __VMLINUX_SYMBOL_STR(__bitmap_and) },
	{ 0x5225ce99, __VMLINUX_SYMBOL_STR(alloc_cpumask_var) },
	{ 0x7cd8d75e, __VMLINUX_SYMBOL_STR(page_offset_base) },
	{ 0x9bad141d, __VMLINUX_SYMBOL_STR(hv_hypercall_pg) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x9ab8f995, __VMLINUX_SYMBOL_STR(cpumask_next_and) },
	{ 0xafa5032e, __VMLINUX_SYMBOL_STR(hv_vp_index) },
	{ 0x930484aa, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xa26a4f07, __VMLINUX_SYMBOL_STR(__ioapic_set_affinity) },
	{ 0xdb2f6047, __VMLINUX_SYMBOL_STR(vmbus_free_mmio) },
	{ 0x41f54a0c, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x5790e7a0, __VMLINUX_SYMBOL_STR(pci_unlock_rescan_remove) },
	{ 0xdaf7b334, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0xf9a2ce1e, __VMLINUX_SYMBOL_STR(pci_stop_and_remove_bus_device) },
	{ 0xddbeeecc, __VMLINUX_SYMBOL_STR(pci_lock_rescan_remove) },
	{ 0x6cbda93b, __VMLINUX_SYMBOL_STR(pci_get_domain_bus_and_slot) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x52630cd5, __VMLINUX_SYMBOL_STR(vmbus_sendpacket) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x4b8febf7, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1d4519c, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hv_vmbus";

MODULE_ALIAS("vmbus:1df6c444444400449d52802e27ede19f");

MODULE_INFO(srcversion, "E6B4773B5844FD618FD3F0A");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

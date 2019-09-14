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
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x3456eff2, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xb4b43690, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x887de448, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x6a0e8e30, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x2b038aa5, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x219840ab, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xff1a716d, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x43fc08a4, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x6526fc4c, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x3b8b9de0, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x9817f256, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xb05f37b5, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0xae724b10, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x3ee21b89, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd27a4ad1, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x97868aef, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x9a025cd5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xd47cda4f, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0xc483a55a, __VMLINUX_SYMBOL_STR(dev_set_drvdata) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb5c859b1, __VMLINUX_SYMBOL_STR(tty_standard_install) },
	{ 0x9b4077c9, __VMLINUX_SYMBOL_STR(tty_port_open) },
	{ 0xce33366d, __VMLINUX_SYMBOL_STR(tty_port_close) },
	{ 0x58cb52d2, __VMLINUX_SYMBOL_STR(tty_port_hangup) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x4492645d, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xbd66232b, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xaecfc1bc, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0xfa981f7, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x7cf5b2b3, __VMLINUX_SYMBOL_STR(dev_get_drvdata) },
	{ 0x57dfa996, __VMLINUX_SYMBOL_STR(tty_port_put) },
	{ 0x40eaa386, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xa2a93eff, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x84ebc2ea, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x780d0a96, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x4ed12f73, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7f3fd881, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x9abdea30, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x784213a6, __VMLINUX_SYMBOL_STR(pv_lock_ops) },
	{ 0x4b7dcf38, __VMLINUX_SYMBOL_STR(_raw_qspin_lock) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mmc_core";

MODULE_ALIAS("sdio:c01v*d*");
MODULE_ALIAS("sdio:c04v*d*");

MODULE_INFO(srcversion, "F688533C09B2E45607194D9");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

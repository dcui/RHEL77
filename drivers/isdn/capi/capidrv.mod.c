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
	{ 0x6d044c26, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x2296f507, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x9c3df9b4, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x1685c91c, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xa16aae11, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x8c34c149, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x8c062387, __VMLINUX_SYMBOL_STR(capi20_release) },
	{ 0x23359aff, __VMLINUX_SYMBOL_STR(unregister_capictr_notifier) },
	{ 0xce1414b2, __VMLINUX_SYMBOL_STR(register_capictr_notifier) },
	{ 0xc9882c76, __VMLINUX_SYMBOL_STR(capi20_register) },
	{ 0x6057c6f3, __VMLINUX_SYMBOL_STR(capi_message2cmsg) },
	{ 0x372ca774, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x81553ad8, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x51f677f4, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3bd7d704, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x47d3fc51, __VMLINUX_SYMBOL_STR(capi_info2str) },
	{ 0x7292ab34, __VMLINUX_SYMBOL_STR(cdebbuf_free) },
	{ 0x72a25a72, __VMLINUX_SYMBOL_STR(capi_cmsg2str) },
	{ 0xb19fda8d, __VMLINUX_SYMBOL_STR(capi_cmd2str) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xe19a11ac, __VMLINUX_SYMBOL_STR(capi20_get_profile) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x5fe557dc, __VMLINUX_SYMBOL_STR(register_isdn) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x84c274f9, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x14f2aa5a, __VMLINUX_SYMBOL_STR(capi20_get_version) },
	{ 0x1e6d26a8, __VMLINUX_SYMBOL_STR(strstr) },
	{ 0x7e6f1307, __VMLINUX_SYMBOL_STR(capi20_get_manufacturer) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb60e5e5f, __VMLINUX_SYMBOL_STR(capi_cmsg_header) },
	{ 0xab18ae92, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x72c93980, __VMLINUX_SYMBOL_STR(capi20_put_message) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x50b33ca4, __VMLINUX_SYMBOL_STR(capi_cmsg2message) },
	{ 0xc3bf75bc, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x74df1d4, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x16a5a12f, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xc3aaf0a9, __VMLINUX_SYMBOL_STR(__put_user_1) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0x7129e5f8, __VMLINUX_SYMBOL_STR(hex_asc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=kernelcapi,isdn";


MODULE_INFO(srcversion, "475B254C579CE2B01CB7D61");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
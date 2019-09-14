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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x7cd22840, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x98ab5c8d, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x4c4fef19, __VMLINUX_SYMBOL_STR(kernel_stack) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xd1c7b353, __VMLINUX_SYMBOL_STR(__vsock_create) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xc79d5ef, __VMLINUX_SYMBOL_STR(vm_sockets_get_local_cid) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x9621849f, __VMLINUX_SYMBOL_STR(ring_buffer_event_data) },
	{ 0x912b5f0b, __VMLINUX_SYMBOL_STR(filter_current_check_discard) },
	{ 0xb3e39df0, __VMLINUX_SYMBOL_STR(vsock_stream_has_space) },
	{ 0x343a1a8, __VMLINUX_SYMBOL_STR(__list_add) },
	{ 0xbc28726, __VMLINUX_SYMBOL_STR(vsock_core_get_transport) },
	{ 0xa0b5b192, __VMLINUX_SYMBOL_STR(trace_event_buffer_lock_reserve) },
	{ 0xe2253bd7, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x7e526bfa, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r10) },
	{ 0xb1a5bf92, __VMLINUX_SYMBOL_STR(vsock_find_connected_socket) },
	{ 0x5991219c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0xb8c7ff88, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x453c7c74, __VMLINUX_SYMBOL_STR(vsock_stream_has_data) },
	{ 0xa352b491, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x521445b, __VMLINUX_SYMBOL_STR(list_del) },
	{ 0x788e4e94, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x3de2640, __VMLINUX_SYMBOL_STR(perf_trace_run_bpf_submit) },
	{ 0x5f31288f, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0xd7cbddda, __VMLINUX_SYMBOL_STR(memcpy_toiovec) },
	{ 0xf0fce431, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x15c0c57c, __VMLINUX_SYMBOL_STR(vsock_addr_init) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xeeec26a7, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xf0fdf6cb, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xd66f3d37, __VMLINUX_SYMBOL_STR(vsock_find_bound_socket) },
	{ 0x2ea2c95c, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_rax) },
	{ 0xbfdcb43a, __VMLINUX_SYMBOL_STR(__x86_indirect_thunk_r11) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x41ec4c1a, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71995c4e, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x5c8b5ce8, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x9af89f98, __VMLINUX_SYMBOL_STR(memcpy_fromiovec) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xf164e30b, __VMLINUX_SYMBOL_STR(vsock_deliver_tap) },
	{ 0x7628f3c7, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x6874e561, __VMLINUX_SYMBOL_STR(vsock_remove_sock) },
	{ 0x47b6a10f, __VMLINUX_SYMBOL_STR(ftrace_print_symbols_seq) },
	{ 0x1e3a88fb, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x4fb85f8f, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x91c31fd8, __VMLINUX_SYMBOL_STR(vsock_insert_connected) },
	{ 0x4b55313f, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x498d293a, __VMLINUX_SYMBOL_STR(trace_buffer_unlock_commit) },
	{ 0x2b3b4899, __VMLINUX_SYMBOL_STR(vsock_enqueue_accept) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=vsock";


MODULE_INFO(srcversion, "AE99BA728DFC2443F73FA42");
MODULE_INFO(rhelversion, "7.7");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif

#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xd1b09e08, "module_layout" },
	{ 0x9ee9d2da, "cdev_del" },
	{ 0xe1ea0878, "kmalloc_caches" },
	{ 0xd2b09ce5, "__kmalloc" },
	{ 0x405c1144, "get_seconds" },
	{ 0xd3725fc4, "cdev_init" },
	{ 0x9b388444, "get_zeroed_page" },
	{ 0xdaf485b9, "pv_lock_ops" },
	{ 0xb5da66ef, "param_ops_int" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x25170ad2, "down_interruptible" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x91715312, "sprintf" },
	{ 0x6f26a72a, "nonseekable_open" },
	{ 0xa120d33c, "tty_unregister_ldisc" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xb44ad4b3, "_copy_to_user" },
	{ 0x7c32d0f0, "printk" },
	{ 0xa1c76e0a, "_cond_resched" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x9c1cb9ae, "cdev_add" },
	{ 0xc6cbbc89, "capable" },
	{ 0x8ff4079b, "pv_irq_ops" },
	{ 0xdb7305a1, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x47941711, "_raw_spin_lock_irq" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xc3c01ffa, "kmem_cache_alloc_trace" },
	{ 0xdbf17652, "_raw_spin_lock" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0xcf2a6966, "up" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x9e0ccf30, "tty_register_ldisc" },
	{ 0x88db9f48, "__check_object_size" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


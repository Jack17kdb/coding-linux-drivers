#include <linux/module.h>
#include <linux/init.h>

static int __init my_init(void) {
	printk("Hello kernel!!!!\n");
	return 0;
}

static void __exit my_exit(void) {
	printk("Goodbye kernel!!!!\n");
}

module_init(my_init);
module_exit(my_exit)

MODULE_LICENCE("GPL");
MODULE_AUTHOR("rex king");
MODULE_DESCRIPTION("A simple hello world kernel module");

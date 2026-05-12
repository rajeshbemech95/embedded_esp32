#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h> 

static int __init hello_init(void)
{
    printk(KERN_INFO "hello: moduled loaded\n");
    return 0;
}

static void __exit hello_exit(void)
{
    printk(KERN_INFO "hello: kernel module unloaded\n");
    
}

module_init(hello_init);
module_exit(hello_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("TEST ME");
MODULE_DESCRIPTION("THIS IS FOR TEST");
MODULE_VERSION("1.0");
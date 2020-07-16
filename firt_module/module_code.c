#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Rusin Alex");
MODULE_DESCRIPTION("Simple example");
// MODULE_VERSION("0.1");

static int __init example_init(void) {
    // printk(KERN_INFO "Sarting...");
    printk("Start module -> printk\n");
    pr_alert("Sarting...\n");    
    return 0;
}

static void __exit example_exit(void) {
    // printk(KERN_INFO "Go down...");
    printk("End module -> printk\n");
    pr_alert("Go down...\n");
}

module_init(example_init);
module_exit(example_exit);



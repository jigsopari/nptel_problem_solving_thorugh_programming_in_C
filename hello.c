#define module 
#include<linux/module.h>

int init_module(void) {printk("<1>Hello,World\n");return 0;}
int cleanup_module(void) {printk("<1> Good bye cruel world \n");}



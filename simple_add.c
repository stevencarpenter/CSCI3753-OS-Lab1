#include <linux/kernel.h>
#include <linux/linkage.h>
asmlinkage long sys_simple_add(int number1, int number2, int *result)
{

 printk(KERN_ALERT "number 1 is: %d \n", number1);
 printk(KERN_ALERT "number 2 is: %d \n", number2);
 *result = number1 + number2;
 printk(KERN_ALERT "result is: %d \n", *result);
 return 0;
}


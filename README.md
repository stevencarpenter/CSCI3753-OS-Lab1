Steven Carpenter
PA1

helloworld.c -- located in /home/kernel/linux-lts-vivid-3.19.0/arch/x86/kernel/ [this is the source code for the hello world syscall]

simple_add.c -- located in /home/kernel/linux-lts-vivid-3.19.0/arch/x86/kernel/ [this is the source code for the hello world syscall]

Makefile -- located in /home/kernel/linux-lts-vivid-3.19.0/arch/x86/syscalls/ [this file contains all the compilation instructions and files to be linked during compilation]

test1.c -- located in /home/user/Desktop/ [this is the test file that when compiled and run will execute the helloworld syscall]

test2.c -- located in /home/user/Desktop/ [this is the test file that when compiled and run will execute the simple_add syscall]

syscall_64.tbl -- located in /home/kernel/linux-lts-vivid-3.19.0/arch/x86/syscalls/ [this file contains a table of all the syscalls available to the system as well as the parameters under which they can be run ie. common, 32, 64]

syscalls.h -- located in include/linux/ [this file declares the syscalls and can be used to import syscalls for use in other programs]

syslog -- located in var/log/ [this file contains logs of all syscalls]

to compile the test files cd to the directory and run $ gcc -o testX testX.c where X is 1 or 2 depending on the test to be compiled.

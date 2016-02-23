#define _GNU_SOURCE        
#include <unistd.h>
#include <sys/syscall.h> 
#include <stdio.h>
	
int main(){

syscall(323);


return 0;
}

#define _GNU_SOURCE         
#include <unistd.h>
#include <sys/syscall.h>   
#include <stdio.h>
	
int main(){
	int a=5;
	int b=20;
	int c;	
	long int x = syscall(324,a,b,&c);

	printf("the result should be 25 and it is %d \n", c);
	return 0;
}

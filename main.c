#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int main(){
	pid_t pid1,pid2,pid3,pid4;

	pid1=fork();
	printf("%d \n",pid1);
	pid2=fork();
	printf("%d \n",pid2);
	pid3=fork();
	printf("%d \n",pid3);
	pid4=fork();
	printf("%d \n",pid4);	



	return 0;
}

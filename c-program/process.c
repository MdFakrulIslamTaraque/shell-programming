#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t pid;
	printf("ABC");
	pid = fork();
	if(pid<0)
		printf("Unsuccessful fork\n");
	else if(pid == 0){
		printf("Child\n");
		printf("process id: %d && parent id: %d\n",getpid(),getppid());
	}
	else
	{
		printf("Parent\n");
		printf("Process id: %d && parent id: %d\n",getpid(),getppid());
	}
	return 0;
}

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
		printf("Child-1 created!\n");
		printf("child-1 >> process id: %d && parent id: %d\n",getpid(),getppid());
		pid_t pid1;
		pid1 = fork();
		if(pid1 == 0)
		{
			printf("Child-2 created!\n");
			printf("child-2 >> process id: %d && parent id: %d\n",getpid(),getppid())
		}
	}
	else
	{
		printf("Parent process0\n");
		printf("Process id: %d && parent id: %d\n",getpid(),getppid());
	}
	return 0;
}

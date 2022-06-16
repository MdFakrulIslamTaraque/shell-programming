#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t pid;
	pid = fork();
	if(pid<0)
		printf("xxxxxxxxxxxx------ child-1 creation unsuccessfull! ------xxxxxxxxxxx\n\n");
	else if(pid == 0){
		char file[100];
		printf("Enter file name to execute instead of this process: ");
		scanf("%s",file);
		execvp(file,NULL);
		printf("Child-1 creation successful!\n");
		printf("child-1 >> process id: %d && parent id: %d\n\n",getpid(),getppid());
		pid_t pid1;
		pid1 = fork();
		if(pid1<0)
		{
			printf("xxxxxxxxxxx --- child-2 creation unsuccessful! ---xxxxxxxxxxx\n\n");
		}
		else if(pid1 == 0)
		{
			printf("--------- child-2 creation successfull!!!! --------------------\n");
			printf("child-2 >> process id:%d && parent id: %d\n\n",getpid(),getppid());
		}
		else
		{
			printf("<<<<<<<<<It is child-1>>>>>>>>>>\n");
			printf("process id:%d && parent id:%d\n\n",getpid(),getppid());
		}

	}
	else
	{
		printf("|||||||||||| Parent-1(root) |||||||||||||||||\n");
		printf("Process id: %d && parent id: %d\n\n",getpid(),getppid());
	}
	return 0;
}

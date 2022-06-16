#include<stdio.h>
int main(int argc, char* argv[])
{
	char params = {"./load","1","2","3"};
	execlp("./load","1","2","3");
	for(int i=0; i<100; i++)
		printf("%d",i);
	return 0;
}

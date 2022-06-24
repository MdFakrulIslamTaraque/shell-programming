#include<bits/stdc++.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;
int main()
{
pid_t pid;
pid = fork();
cout<<"Running Process : "<<getpid()<<endl;
if(pid<0)
{
cout<<"unsuccessful process creation!\n";
}
else if(pid == 0)
{
cout<<"successfull child process created!!\n";
cout<<"Child process id:"<<getpid()<<" of parent : "<<getppid()<<endl;
}
else
{
cout<<"It is parent!!\n";
cout<<"Parent process id:"<<getpid()<<endl;
}
return 0;
}

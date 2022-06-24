#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
#include<stdlib.h>
#include<pthread.h>

int buffer[10];
int freed = 10;
void *producer(void *params)
{
    int produced = 0;
    while(produced<100)
    {
	if(freed>0)
	{
	    buffer[produced%10] = produced+1;
	    printf("Prducing %d\n",buffer[produced%10]);
	    produced++;
	    freed--;
	}
    }
}
void *consumer(void *params)
{
    int consumed = 0;
    while(consumed<100)
    {
	if(freed<10)
	{
	    printf("Consuming %d\n",buffer[consumed%10]);
	    consumed++;
	    freed++;
	}
    }
}
int main()
{
    pthread_t thread1,thread2;
    pthread_create(&thread1,NULL,producer, NULL);
    pthread_create(&thread2,NULL,consumer,NULL);
    pthread_exit(0);  
//thread t1(thread1,n);
//thread t2(thread1,n);
//t1.join();
//t2.join();
    return 0;
}

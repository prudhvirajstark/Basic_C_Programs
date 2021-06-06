//use fork() api to create a child process

#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main()
{
	int pid=fork();
	printf("Program 1:Creating a hild using For API()");
	if(pid==0)
	{
		printf("Child pid is %d, and parent PID is %d",getpid(),getppid());
	}
	else
	{
		printf("Child pid is %d, and parent PID is %d",getpid(),getppid());
	}
	return 0;
}
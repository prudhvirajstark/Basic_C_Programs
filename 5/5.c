/*
PRUDHVI RAJ PANISETTI-191043006

5.	Read a text file called input.txt 
and segregate the even (2nd,4th, 6th …) and odd (1st,3rd,5th…) words into two different files names even.txt and odd.txt.
Get the names of input and output files through command line arguments.


Solution: While exeecuting the a.exe file through cmd, you have to give the inputs in thee same lines

enter this command to complete this program:

a.exe input.txt even.txt odd.txt

*/
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char **argv)
{
	FILE *inputPtr,*evenPtr,*oddPtr;
	
	char Ch;
	int count=0;
	
	
	inputPtr=fopen(argv[1],"r");
	evenPtr=fopen(argv[2],"w");
	oddPtr=fopen(argv[3],"w");
	
	if(inputPtr==NULL)
	{
		printf("Cannot open a file");
		exit(0);
	}
	
	Ch=fgetc(inputPtr);
	
	while(Ch!=EOF)
	{		
		if(count%2!=0)
		{
			fputc(Ch,evenPtr);			
		}
		else
		{
			fputc(Ch,oddPtr);
		}		
		if(Ch==' ')
		{			
			count++;
		}
		Ch=fgetc(inputPtr);
	}
	fclose(evenPtr);
	fclose(oddPtr);	
	fclose(inputPtr);
	printf("%d",count);
	return 0;
}
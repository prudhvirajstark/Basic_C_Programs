/*
PRUDHVI RAJ PANISETTI-191043006
14.	Read a file in which numbers are stored.
Segregate the even and odd numbers into two different files named even.txt and odd.txt.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *number,*evenPtr,*oddPtr;
	char InputFile[20],Ch;
	int count,num;
	
	printf("enter the file name to be opened: ");
	scanf("%s",InputFile);
	
	number=fopen(InputFile,"r");
	evenPtr=fopen("even.txt","w");
	oddPtr=fopen("odd.txt","w");
	
	if(number==NULL || evenPtr==NULL || oddPtr==NULL)
	{
		printf("Cannot open a file");
		exit(0);
	}
	Ch=getw(number);
	while(Ch!=EOF)
	{
		if(Ch%2==0)
			putw(Ch,evenPtr);
		else
			putw(Ch,oddPtr);
	}
	
	
	fclose(evenPtr);
	fclose(oddPtr);	
	fclose(number);
	
	printf("succeessssfuul");
	return 0;
}
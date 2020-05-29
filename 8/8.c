/*
PRUDHVI RAJ PANISETTI-191043006


8.	Read the numbers stored in a file named input.txt. 
Write a function to check if the number is divisible by 8. 
Create an output file named output.txt.  
If it is divisible, write number ‘1’ into output file. 
If it is not divisible, write ‘0’ to the output file.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *number;
	char InputFile[20];
	char Ch;
	int count,num;
	
	/*printf("enter the file name to be opened: ");
	scanf("%s",InputFile);*/
	
	number=fopen("input.txt","r");
	
	if(number==NULL )
	{
		printf("Cannot open a file");
		exit(0);
	}
	Ch=getw(number);
	while(Ch!=EOF)
	{
		printf("%c",Ch);
		Ch=getw(number);
	}
	
	
	fclose(number);
	
	printf("succeessssfuul");
	
	return 0;
}
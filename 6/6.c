/*
PRUDHVI RAJ PANISETTI-191043006

6.	Read a text file called input.txt and change all the characters to uppercase characters 

(Eg: “ThisIsASampleText” should be changed to “THISISASAMPLETEXT”.
*/


#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>


void main()
{
	char c;
	FILE *inputPtr;
	
	if((inputPtr=fopen("input.txt","r"))==NULL)
	{
		printf("Error! Opening File ");
		exit(1);
	}
	do
	{
		c=fgetc(inputPtr);
		putchar(toupper(c));
	}while(c!=EOF);
	//strlength(c);
	printf("Data from the file:\n%s",c);
	fclose(inputPtr);
	exit(1);
}
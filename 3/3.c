/*
PRUDHVI RAJ PANISETTI-191043006

3.	Read a string from a file. 
Count the number of characters in a given string without making use of the string library function. 
Use ‘for loop’. Get the input using ‘fscanf’.
 Use functions and pass string by reference.
*/


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/*int strlength(char *str)
{
	int len=0;
	char *ptr;
	ptr=str;
	while(ptr)
	{
		if(ptr>='a'&&ptr<='z'||ptr>='A'&&ptr<='Z')
			len++;
		printf("%d\n",ptr);
	}
	return len;
}*/

int main()
{
	char c[1000];
	FILE *inputPtr;
	
	if((inputPtr=fopen("input.txt","r"))==NULL)
	{
		printf("Error! Opening File ");
		exit(1);
	}
	fscanf(inputPtr,"%[^\n]",c);
	//strlength(c);
	printf("Data from the file:\n%s",c);
	fclose(inputPtr);
	return 0;
}
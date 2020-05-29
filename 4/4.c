/*
PRUDHVI RAJ PANISETTI-191043006

4.	Read a text stored in a file. 

	Count the number of words and lines in the file.
		
	Use functions.
*/
#include<stdio.h>


int main()
{
	FILE *inputPtr;
	char ch;
	int linecount=0,wordcount=0,charcount=0;

	inputPtr=fopen("input.txt","r");
	
	if(inputPtr)
	{
		while((ch=getc(inputPtr))!=EOF)
		{
			if(ch!=' '&&ch!='\n')
			{
				++charcount;
			}
			if(ch==' '||ch=='\n')
			{
				++wordcount;
			}
			if(ch=='\n')
			{
				++linecount;
			}
		}		
	}
	else
	{
		printf("Failed to open a file\n");
	}
	printf("Lines :%d\n",linecount);
	printf("Words :%d\n",wordcount);
	printf("Characters :%d\n",charcount);
	return 0;
}
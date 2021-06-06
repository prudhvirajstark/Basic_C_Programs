/*
PRUDHVI RAJ PANISETTI-191043006
15.	Write a C program which reads input15.txt, 
checks to see if the string contains a ‘F’ 
and if so, it breaks the string into another word and writes to output15.txt.
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *inputPtr,*outputPtr;
	
	char InputFile[20],Ch;
	
	printf("enter the file name to be opened: ");
	scanf("%s",InputFile);
	
	 inputPtr=fopen(InputFile,"r");
	outputPtr=fopen("output15.txt","w");
	
	if(inputPtr==NULL)
	{
		printf("Cannot open a file");
		exit(0);
	}
	
	Ch=fgetc(inputPtr);
	
	while(Ch!=EOF)
	{
		if(Ch=='f'||Ch=='F')
		{			
			fprintf(outputPtr,"\n");		
		}
		fputc(Ch,outputPtr);
		Ch=fgetc(inputPtr);
	}
	fclose(outputPtr);	
	fclose(inputPtr);
	
	return 0;
}
/*
PRUDHVI RAJ PANISETTI-191043006

11.	Write a C program to find the factorial of the number entered by user

*/

#include<stdio.h>

int main()
{
	int i,number,factorial=1;
	printf("Enter anumber: \n");
	scanf("%d",&number);
	
	for(i=1;i<=number;i++)
		factorial=factorial*i;
	printf("Factorial of %d is %d",number,factorial);
	return 0;
}
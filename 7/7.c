/*
PRUDHVI RAJ PANISETTI-191043006


7.	Get ten numbers from the user. 
Write a function to arrange them in ascending order 
and another function to arrange them in descending order. 
Print out the arranged sequence onto the console.
*/

#include<stdio.h>
void Ascend(int *arr,int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Elements sorted in ascending order are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
void Descend(int *arr,int n)
{
	int i,j,temp=0;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("Elements sorted in ascending order are:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d\n",arr[i]);
	}
}


int main()
{
	int arr[10],i,j,temp,choice;
	
	printf("Enter elements in an array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the choice to display:\n1.Ascending Order\n2.Descending Order\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			Ascend(arr,10);
			break;
		case 2:
			Descend(arr,10);
			break;
	}
	

	return 0;
}
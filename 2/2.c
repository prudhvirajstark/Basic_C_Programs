/*
PRUDHVI RAJ PANISETTI-191043006

2.	Modify the above program to continue to accept the input from the user until the user enters ‘999’. 
As the user inputs the number, the sum, average and product should be displayed in the main function. 
*/


#include<stdio.h>
int sum(int arr[],int n)
{
	int sum=0;
	for(int i=0;i<n;i++)
		sum+=arr[i];
	
	return sum;
}
float average(int arr[],int n)
{
	float avg=0;
	for(int i=0;i<n;i++)
		avg+=arr[i];
	avg=avg/n;
	return avg;
}
int product(int arr[],int n)
{
	int prdt=1;
	for(int i=0;i<n;i++)
		prdt*=arr[i];
	
	return prdt;
}
int main()
{
	int arr[1000],i=0,n;
	do
	{
		printf("\nEnter a number:");
		scanf("%d",&n);
		arr[i]=n;
		i++;
		printf("\nSum of 10 numbers is %d",sum(arr,i));
		printf("\nProduct of 10 numbers is %d",product(arr,i));
		printf("\nAverage of 10 numbers is %f",average(arr,i));
	}while(n!=999);	
	
	
	
	return 0;
}
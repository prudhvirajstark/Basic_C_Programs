/*
PRUDHVI RAJ PANISETTI-191043006

1.	Get ten numbers from user. 
Store them in an array. 
Using functions, find sum, average and product of the numbers. 
Print the sum, average and product in the main function.

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
	int arr[10];
	printf("Enter 10 elements:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&arr[i]);
	
	printf("\nSum of 10 numbers is %d",sum(arr,10));
	printf("\nProduct of 10 numbers is %d",product(arr,10));
	printf("\nAverage of 10 numbers is %f",average(arr,10));
	return 0;
}
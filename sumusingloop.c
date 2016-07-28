#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum=sum+i;
}
printf("sum of %d natural numbers %d",n,sum);
}
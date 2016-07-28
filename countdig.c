#include<stdio.h>
#include<conio.h>
void main()
{
int i,sum=0;
printf("enter the value of n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum++;
n=n/10;
}
printf("%d"sum);
}
// program to reverse of a number
#include<stdio.h>
int main()
{
int i=0,r,n;
printf("enter the number to be reversed");
scanf("%d",&n);
while(i<n)
{
r=n%10;
rev=rev*10+r;
n=n/10;
}
printf("reverse of the number", rev);
return 0;
}


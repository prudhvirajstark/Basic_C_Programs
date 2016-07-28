#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int s=0,n,k,i;
scanf("%d",&n);
k=n;
while(n>0)
{
i=n%10;
s=s*10+i;
n=n/10;
}
if(s==k)
printf("the number is palindrome");
else
printf("the number is not palindrome");
}
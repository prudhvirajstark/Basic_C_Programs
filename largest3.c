#include<stdio.h>
#include<conio.h>
int main()
{
int a[3];
int largest=0;
for(int i=0;i<3;i++)
{
scanf("%d",&a[i]);
}
for(int i=0;i<3;i++)
{
	if(a[i]>largest)
	{
		largest=a[i];
	}
}
printf("\n%d",largest);
return 0;
}
#include<stdio.h>
#include<conio.h>
void main()
{
int a;
scanf("%d",&a);
if(a!=0)
{
 if(a%2==0)
 {
  printf("%d is even number",a);
 }
 else 
 {
  printf("%d is odd number",a);
 }
}
else
 {
  printf("0");
 }
}
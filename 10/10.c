/*
PRUDHVI RAJ PANISETTI-191043006

10.	Compare two dates and display the latter one. 
Consider the date as consisting of day, month and year. 
Get the dates through user inputs through console. 
Use structures in this program.
*/

#include<stdio.h>
#include<stdlib.h>

struct date
{
	int day,month,year;
};

int main()
{		
	int i;
	struct date d1,d2;
	//getting the values
	printf("Enter the first date(dd mm yyyy)");
	scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
	printf("Enter the second date(dd mm yyyy)");
	scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
	
	if(d1.year<0 || d2.year<0 ||d1.year>3000 || d2.year>3000)
	{
		printf("Range of years in 0-3000.Entered year is invalid range");
		exit(1);
	}
	if(d1.month<1 || d2.month<1 || d1.month>12|| d2.month>12)
	{
		printf("Range of Months in 1-12.Entered month is invalid range");
		exit(1);
	}
	if(d1.day<1||d2.day<1||d1.day>31||d2.day>31)
	{
		printf("Range of days in 1-31.Entered day is invalid range");
		exit(1);
	}
	//checking for the years months and dates
	if(d1.year<d2.year)
		i=-1;
	else if(d1.year>d2.year)
		i=1;
	if(d1.year==d2.year)
	{
		if(d1.month<d2.month)
			i= -1;
		else if(d1.month>d2.month)
			i= 1;
		else if(d1.day<d2.day)
			i= -1;
		else if(d1.day>d2.day)
			i= 1;
		else
			i= 0;
	}	
	//printing the latter one
	switch(i)
	{
		case -1:
			printf("%d/%d/%d is the latter one",d2.day,d2.month,d2.year);
			break;
		case 1:
			printf("%d/%d/%d is the latter one",d1.day,d1.month,d1.year);
			break;
		case 0:
			printf("%d/%d/%d both dates are same",d2.day,d2.month,d2.year);
			break;
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year you want to check for leap year:");
	scanf("%d",&year);
	if(year%4==0)
	{
		printf("The given year is a leap year.");
	}
	else
	{
		printf("The given year is not a leap year.");
	}
	return(0);
}

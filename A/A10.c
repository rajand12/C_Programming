#include<stdio.h>
int main()
{
	int year, month, days1, days;
	printf("Please enter the number of days:");
	scanf("%d",&days);
	year = days/365;
	days = days-(365*year);
	month = days/30;
	days1 = days-(month*30);
	printf("Provided days is equivalent to:\n%d Years %d Months %d Days",year,month,days1);
	return 0;	
}

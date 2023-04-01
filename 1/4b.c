#include<stdio.h>
int main()
{
	int num,year,month,days,a;
	printf("Please enter the number of days: ");
	scanf("%d",&num);
	year=num/365;
	a=num%365;
	month=a/30;
	days=a%30;
	printf("%d days is equals to %d years %d months and %d days.",num,year,month,days);
	return 0;
}

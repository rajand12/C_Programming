/* Write a program to find sales person commission on sales according to following conditions
Sales Amount		Commission
<5000				0%
>=5000 and <10000	5%
<=10000 and <15000	7%
>=15000				10%  */

#include<stdio.h>
int main()
{
	int sales;
	float commission;
	printf("Enter the amount of sales: ");
	scanf("%d",&sales);
	if(sales>=15000)
	{
		commission=(float)10/100 * sales;
		printf("Your commission is %.2f.",commission);
	}
	else if(sales>=10000)
	{
		commission=(float)7/100 * sales;
		printf("Your commission is %.2f.",commission);
	}
	else if(sales>=5000)
	{
		commission=(float)5/100 * sales;
		printf("Your commission is %.2f.",commission);
	}
	else
	{
		printf("Your have received no commission.");
	}
	return 0;
}

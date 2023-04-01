#include<stdio.h>
int main()
{
	float cen,far;
	printf("Enter the temperature in Farenheit:");
	scanf("%f",&far);
	cen=5*(far-32)/9;
	printf("%.2f Farenheit equals to %.2f Centrigade.",far,cen);
	return 0;
}

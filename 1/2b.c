#include<stdio.h>
int main()
{
	float far,cen;
	printf("Enter the temperature in Centrigade:");
	scanf("%f",&cen);
	far=(cen*9/5)+32;
	printf("%.2f Centrigade equals to %.2f Farenheit.",cen,far);
	return 0;
}

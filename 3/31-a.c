/*31.a Wap to find the sum of following series
1/1^2 + 1/3^2 + 1/5^2 + .....upto 10 terms */
#include<stdio.h>
int main()
{
	int i,j=1;
	float sum=0;
	for(i=1;i<=10;i++)
	{
		sum=sum+(float)1/(j*j);
		j=j+2;	
	}
	printf("The sum is %f.",sum);
}

#include<stdio.h>
int main()
{
	float num, final;
	printf("Enter the number you want to find the square of: ");
	scanf("%f",&num);
	final = num * num;
	printf("The square of %f is: %f ",num, final);
	return 0;	
}

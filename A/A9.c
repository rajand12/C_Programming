#include<stdio.h>
int main()
{
	int principle,time,rate;
	float interest,amount;
	printf("Enter the principle: ");
	scanf("%d",&principle);
	printf("Enter the time in years: ");
	scanf("%d",&time);
	printf("Enter the rate: ");
	scanf("%d",&rate);
	interest = (principle*time*rate)/100;
	amount = principle + interest; 
	printf("The simple interest is %f\n",interest);
	printf("The amount is %f",amount);
	return 0;	
}

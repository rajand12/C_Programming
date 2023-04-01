#include<stdio.h> 
int main()
{
	int time,rate,principal,interest,amount;
	printf("Enter the principal: ");
	scanf("%d",&principal);
	printf("Enter the rate of interest: ");
	scanf("%d",&rate);
	printf("Enter the time: ");
	scanf("%d",&time);
	interest=(principal*time*rate)/100;
	amount = principal + interest;
	printf("The interest is %d.\nThe amount is %d.",interest,amount);
	return 0;
}

//Write program to read cost and selling price of a good and find profit or loss amount.
#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Enter the cost price: ");
	scanf("%d",&cp);
	printf("Enter the selling price: ");
	scanf("%d",&sp);
	if(sp>cp)
	{
		profit=sp-cp;
		printf("The profit amount is %d.",profit);
	}
	else if(cp>sp)
	{
		loss=cp-sp;
		printf("The loss amount is %d.",loss);
	}
	else
		printf("You haven't incurred neither profit nor loss.");
	return 0;
}

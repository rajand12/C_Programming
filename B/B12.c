#include<stdio.h>
int main()
{
	int cp,sp,profit,loss;
	printf("Please enter the cost and selling price:");
	scanf("%d %d",&cp,&sp);
	if(cp>sp)
	{
		loss=cp-sp;
		printf("You have incurred loss.\n");
		printf("Your loss amount is Rs.%d.",loss);
	}
	else if(sp>cp)
	{
		profit=sp-cp;
		printf("You have incurred profit.\n");
		printf("Your loss amount is Rs.%d.",profit);	
	}
	else
	{
		printf("You have neither incurred profit nor loss.");
	}
	return(0);
}

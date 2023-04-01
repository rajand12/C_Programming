//WAP to find the value of given base to the given power 
#include<stdio.h>
int main()
{
	int i,power,base,result=1;
	printf("Enter a base:");
	scanf("%d",&base);
	printf("Enter a power:");
	scanf("%d",&power);
	for(i=1;i<=power;i++)
	{
		result*=base;
	}
	printf("%d raised to power %d is %d.",base,power,result);
	return 0;
}


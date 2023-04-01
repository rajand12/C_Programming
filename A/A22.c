#include<stdio.h>
int main()
{
	int num,sq,cu;
	printf("Please enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		sq=num*num;
		printf("The square of the number is %d.",sq);
	}
	else
	{
		cu=num*num*num;
		printf("The cube of the number is %d.",cu);
	}
	return 0;
}

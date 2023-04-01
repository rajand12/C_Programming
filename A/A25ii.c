#include<stdio.h>
int main()
{
	int a,b;
	printf("Please enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("The numbers you entered are %d and %d.\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The swapped numbers are %d and %d.",a,b);
	return(0);	
}

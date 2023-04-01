#include<stdio.h>
int main()
{
	int a,b ,c;
	printf("Please enter two numbers:");
	scanf("%d %d",&a,&b);
	printf("The numbers you entered are %d %d.\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("The swapped numbers are %d %d.",a,b);
	return(0);
}

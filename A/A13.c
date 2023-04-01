#include<stdio.h>
int main()
{
	int a,b,rem,quo;
	printf("Please enter the dividend and divider:");
	scanf("%d %d",&a,&b);
	quo=a/b;
	rem=a-(quo*b);
	printf("The quotient is %d and the remainder is %d.",quo,rem);
	return 0;
}

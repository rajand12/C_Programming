#include<stdio.h>
int main()
{
	int num,a,b,c,d,e;
	printf("Enter a three digit number: ");
	scanf("%d",&num);
	a=num/100;
	b=num%100;
	c=b/10;
	d=b%10;
	e=a+c+d;
	printf("The three digits of the numbers are %d %d %d and their sum is %d.",a,c,d,e);
	return 0;
}

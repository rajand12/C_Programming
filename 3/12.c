//Write a program to find the sum of digits of given numbers.

#include<stdio.h>
int main()
{
	int num,x,sum=0,w;
	printf("Enter a number: ");
	scanf("%d",&num);
	x=num;
	while(num>0)
	{
		w=num%10;
		sum+=w;
		num=num/10;
	}
	printf("The sum of digits of %d is %d.",x,sum);	
}

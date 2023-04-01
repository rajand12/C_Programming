//Write a program to find the sum of cube of first 10 natural numbers.

#include<stdio.h>
int main()
{
	int i,sum=0,z;
	for(i=1;i<=10;i++)
	{
		//printf("%d\n",i);
		z=i*i*i;
		sum=sum+z;
	}
	printf("The sum of cube of first 10 natural numbers is %d.",sum);
	return 0;
}

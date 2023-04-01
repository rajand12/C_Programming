//Write a program to generate sum of first 'n' natural numbers.

#include<stdio.h>
int main()
{
	int i,sum=0,num;
	printf("Enter n: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		//printf("%d\n",i);
		sum+=i;
	}
	printf("The sum of first %d natural numbers is %d.",num,sum);
	return 0;
}

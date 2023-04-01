//Write a program to generate first 'n' odd numbers.

#include<stdio.h>
int main()
{
	int i,num;
	printf("Enter n: ");
	scanf("%d",&num);
	printf("The first %d odd numbers are:\n",num);
	for(i=1;i<=2*num;i+=2)
	{
		printf("%d\n",i);
		//i=i+1;
	}
	return 0;
}

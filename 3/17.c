//Write a program to display the first 'n' terms of Fibonacci series.

#include<stdio.h>
int main()
{
	int num,i,a=0,b=1,j;
	printf("Enter n: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\t",a);
		j=a+b;
		a=b;
		b=j;	
	}
}

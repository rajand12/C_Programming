//Write a program to print all the prime numbers between 1 to 100.

#include<stdio.h>
int main()
{
	int i,j,count=0;
	printf("Prime numbers between 1 to 100 are\n");
	for(j=1;j<=100;j++)
	{
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
		count++;
	}
	if(count==2)
	printf("%d\t",j);
	count=0;	
	}
}


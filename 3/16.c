//Write a program to count all prime numbers between 1 to given number 'n'.

#include<stdio.h>
int main()
{
	int num,i,j,count=0,fcount=0;
	printf("Enter n: ");
	scanf("%d",&num);
	for(j=1;j<=num;j++)
	{
	for(i=1;i<=j;i++)
	{
		if(j%i==0)
		count++;
	}
	if(count==2)
	fcount++;
	count=0;	
	}
	printf("The numbers of prime numbers between 1 to %d is %d.",num,fcount);
}


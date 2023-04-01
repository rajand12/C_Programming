//Write a program to generate first 'n' even numbers and find their sum also.

#include<stdio.h>
int main()
{
	int i,num,sum=0;
	printf("Enter n: ");
	scanf("%d",&num);
	printf("The first %d even numbers are:",num);
	for(i=0;i<2*num;i+=2)
	{
		printf("\n%d",i);
		sum=sum+i;
	}
	printf("\nThe sum of first %d even number is %d.",num,sum);
	return 0;
}

//Write a program to display multiplication table up to 'n'.

#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter n: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d\t",i*j);
		}
		printf("\n");
	}
}

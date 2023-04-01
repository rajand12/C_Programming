//Write a program to display the first ten terms of the series 1,5,9.....

#include<stdio.h>
int main()
{
	int i,j=1;
	for(i=1;i<=10;i++)
	{
		printf("%d\t",j);
		j+=4;	
	}
	return 0;
}

// Write a program to read number and check whether it is positive or negative.
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num<0)
		printf("%d is a negative number.",num);
	else
		printf("%d is a positive number.",num);
	return 0;
}

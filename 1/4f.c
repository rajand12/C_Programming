/* Write a program to check whether a entered number is odd or even using ternary operator. */

#include<stdio.h>
int main()
{
	int num;
	printf("Please enter a number: ");
	scanf("%d",&num);
	num%2==0?printf("The number %d is even.",num):printf("The number %d is odd.",num);
	return 0;
	
}

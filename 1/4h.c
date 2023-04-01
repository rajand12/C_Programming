/* Write a program to read four different numbers and find the largest one. */

#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Please enter four different numbers: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	a>b&&a>c&&a>d?printf("The largest number is %d.",a):b>c&&b>d?printf("The largest number is %d.",b):c>d?printf("The largest number is %d.",c):printf("The largest number is %d.",d);
	return 0;
}

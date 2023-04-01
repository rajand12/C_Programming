/* Write a program to read three different numbers and find the smallest one. */

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter three different numbers:");
	scanf("%d %d %d",&a,&b,&c);
	//a<b&&a<c?printf("The smallest number is %d.",a):b<c&&b<a?printf("The smallest number is %d.",b):printf("The smallest number is %d.",c);
	a<b&&a<c?printf("The smallest number is %d.",a):b<c?printf("The smallest number is %d.",b):printf("The smallest number is %d.",c);
	return 0;
	
}

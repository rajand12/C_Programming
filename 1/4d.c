/*Write a program to demonstrate the use of arithmetic operation on integers.*/

#include<stdio.h>
int main()
{
	int a,b,sum,diff,prod,rem;
	float quo;
	printf("Enter two numbers in which you want perform arithmetic operation: ");
	scanf("%d %d",&a,&b);
	sum=a+b;
	diff=a-b;
	prod=a*b;
	quo=(float)a/b;
	rem=a%b;
	printf("The sum of %d and %d is %d.",a,b,sum);
	printf("\nThe difference of %d and %d is %d.",a,b,diff);
	printf("\nThe product of %d and %d is %d.",a,b,prod);
	printf("\nThe quotient of %d divided by %d is %.2f.",a,b,quo);
	printf("\nThe remainder of %d divided by %d is %d.",a,b,rem);
	return 0;
}

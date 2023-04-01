/*Write a program to find the sum of x and y where x=a^3+3a^2b+b^3 and y=(a+b)/b*a-b.*/

#include<stdio.h>
int main()
{
	int a,b;
	float x,y,z;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	x=(float)a*a*a+3*a*a*b+b*b*b;
	y=(float)(a+b)/b*a-b;
	z=x+y;
	printf("The result of a and b with given operation is %.2f.",z);
	return 0;
}

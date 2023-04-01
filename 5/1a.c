/*1. WAP to calculate simple interest using function.
a. With function returning values and passing arguments*/
#include<stdio.h>
float si(int p,int t,float r);
int main()
{
	int p,t;
	float r;
	printf("Enter principal time and rate:\n");
	scanf("%d %d %f",&p,&t,&r);
	printf("Simple intrest is %.2f",si(p,t,r));
	return 0;
}
float si(int p,int t,float r)
{
	return (p*t*r/100);
}

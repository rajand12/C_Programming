/*Write a program to reverse four digit number. */

#include<stdio.h>
int main()
{
	int num,a,b,c,d,e,f,num2;
	printf("Please enter a four digit number: ");
	scanf("%d",&num);
	a=num/1000;
	b=num%1000;
	c=b/100;
	d=b%100;
	e=d/10;
	f=d%10;
	num2=f*1000 + e*100 + c*10 + a;
	printf("The reverse of %d is %d.",num,num2);
	return 0;
}

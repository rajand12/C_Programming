//Write a program to find the reverse of given number.

#include<stdio.h>
int main()
{
	int num,x,w,rev=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	x=num;
	while(num>0)
	{
		w=num%10;
		rev=rev*10+w;
		num=num/10;
	}
	printf("The reverse of %d is %d.",x,rev);	
}

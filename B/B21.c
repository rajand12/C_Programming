#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Please enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b&&a<c&&b<c)
	{
		printf("The numbers in descending order is %d, %d and %d.",a,b,c);
	}
	else if(b<a&&b<c&&a<c)
	{
		printf("The numbers in descending order is %d, %d and %d.",b,a,c);	
	}
	else if(c<a&&c<b&&a<b)
	{
		printf("The numbers in descending order is %d, %d and %d.",c,a,b);
	}
	else if(a<b&&a<c&&c<b)
	{
		printf("The numbers in descending order is %d, %d and %d.",a,c,b);
	}
	else if(b<a&&b<c&&c<a)	
	{
		printf("The numbers in descending order is %d, %d and %d.",b,c,a);
	}
	else if(c<a&&c<b&&b<a)
	{
		printf("The numbers in descending order is %d, %d and %d.",c,b,a);
	}
	else
	{
		printf("All the numbers are equal.");
	}
	return(0);		
}

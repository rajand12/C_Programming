#include<stdio.h>
int main()
{
	int age;
	printf("Please enter your age:");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("You are eligible for license.");
	}
	else
	{
		printf("You are not elegible for license.");
	}
	return(0);
	
}

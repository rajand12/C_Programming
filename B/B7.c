#include<stdio.h>
int main()
{
	int age;
	char name[50];
	printf("Please enter your name:");
	scanf("%s",&name);
	printf("Please enter your age:");
	scanf("%d",&age);
	if (age<=12)
	{
		printf("You are a CHILD.");
	}
	else if (age<=19)
	{
		printf("You are a TEENAGER.");
	}
	else
	{
		printf("You are an ADULT.");
	}
	return(0);
}

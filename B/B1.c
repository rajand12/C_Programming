#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per;
	printf("Please enter the marks of five subjects:");
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)/5;
	if(m1>40&m2>40&m3>40&m4>40&m5>40)
	{
		printf("You have passed.");
	}
	else
	{
		printf("You have failed.");
	}
	return(0);
	
}	

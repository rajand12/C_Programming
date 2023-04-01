#include<stdio.h>
int main()
{
	int a,b,c,d,e;
	printf("Please enter marks of five subjects:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	(a>40&&b>40&&c>40&d>40&&e>40)?printf("You have passed the exam."):printf("You have failed the exam.");
	return 0;
}

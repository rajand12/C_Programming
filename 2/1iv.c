//Write  a program to read three numbers and find the largest one.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three different numbers:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b&&a>c)
	//{
		printf("%d is the largest number.",a);
	//}
	else if(b>c)
	//{
		printf("%d is the largest number.",b);
	//}
	else
	//{
		printf("%d is the largest number.",c);
	//}
	return 0;
}

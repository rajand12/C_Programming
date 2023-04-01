//Write  a program to find the smallest among four given numbers.
#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter four different numbers:");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(a<b&&a<c&&a<d)
	//{
		printf("%d is the smallest number.",a);
	//}
	else if(b<c&&b<d)
	//{
		printf("%d is the smallest number.",b);
	//}
	else if(c<d)
	//{
		printf("%d is the smallest number.",c);
	//}
	else
	//{
		printf("%d is the smallest number.",d);
	//}
	return 0;
} 

//4. WAP a program to find smallest of three number using function.
#include<stdio.h>
int small(int a,int b,int c);
void main()
{
	int a,b,c;
	printf("Eneter three numbers:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The smallest is %d",max(a,b,c));
}
int max(int a, int b, int c)
{
	if(a<b&&a<c)
	//{
		return a;
	//}
	else if(b<c)
	//{
		return b;
	//}
	else
	//{
		return c;
	//}
}

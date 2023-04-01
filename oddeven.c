#include<stdio.h>
int main()
{
	int a;
	printf("Please enter the number you want to check: ");
	scanf("%d",&a);
 	(a%2==0)?printf("The number %d is even.",a):printf("The number %d is odd.",a);
	return 0;	
}

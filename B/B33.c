#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	printf("The numbers between %d and %d are:\n",a,b);
	for(a=a+1;a<b;a++)
	{
		printf("%d ",a);		
	}
	return(0);
}

//31.c   1^1+2^2+3^3+......upto n terms 
#include<stdio.h>
int main()
{
	int i,n,sum=0,p=1,j;
	printf("Enter n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
		p=p*i;
		}
		sum=sum+p;
		p=1;
	}
	printf("The sum is %d.",sum);
	return 0;
}

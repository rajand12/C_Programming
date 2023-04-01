//31.b 11+22+33+.........upto nth terms 
#include<stdio.h>
int main()
{
	int d=0,s=0,i,n;
	printf("Enter the number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		d+=11;
		s+=d;
	}
	printf("The sum is %d.",s);
	return 0;
	
}

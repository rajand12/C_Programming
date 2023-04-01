#include<stdio.h>
int main()
{
	int i;
	printf("The odd numbers between 1 and 50 are:\n");
	for(i=1;i<50;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}		
	}
	return(0);
}

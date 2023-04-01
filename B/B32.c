//WAP to find out the sum and average of all the numbers within the given range.
#include<stdio.h>
int main()
{
	int a,b,z,sum=0,average;
	printf("Enter two numbers: ");
	scanf("%d %d",&a,&b);
	for(z=a+1;z<b;z++)
	{
		sum=sum+z;		
	}
	average = sum/(b-a-1);
	printf("The sum of numbers between %d and %d is %d.\n",a,b,sum);
	printf("The average is %d.",average);
	return(0);
	
}

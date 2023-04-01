/*Write a program to find largest and smallest number from N set of numbers entered by user.*/

#include<stdio.h>
int main()
{
	int n,i,largest,smallest;
	printf("How many numbers will you enter? : ");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&array[i]);
	}
	largest=array[0];
	smallest=array[0];
	for(i=0;i<n;i++)
	{
		if(array[i]>largest)
		largest=array[i];
	}
		for(i=0;i<n;i++)
	{
		if(array[i]<smallest)
		smallest=array[i];
	}
	printf("The largerst number is %d.\n",largest);
	printf("The smallest number is %d.",smallest);
	return 0;
}

//Write a program to read N numbers in an array and find the sum of odd numbers.

#include<stdio.h>
int main()
{
	int i,n,num[100],sum=0;
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	{
		if(num[i]%2!=0)
		sum+=num[i];
	}
	printf("The sum of odd numbers in the array is %d.",sum);
}

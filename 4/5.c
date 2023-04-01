/*Write a program to read N numbers from user and display the numbers,their sum and their average.*/

#include<stdio.h>
int main()
{
	int i,n,sum=0;
	float average;
	printf("How many numbers will you enter in the array? : ");
	scanf("%d",&n);
	int array[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d: ",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
		sum+=array[i];
	average=(float)sum/n;
	for(i=0;i<n;i++)
		printf("Number %d=%d\n",i+1,array[i]);
	printf("The sum of the numbers in array is %d.\n",sum);
	printf("The average of numbers in array is %.2f",average);
	return 0;	
}

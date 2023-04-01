/* Write a program to read N numbers in an array and then increment the elements by constant C,
   where C is entered by users.*/

#include<stdio.h>
int main()
{
	int n,i,num[100],c,final[100];
	printf("Enter the number of elements in array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	printf("Enter a constant: ");
	scanf("%d",&c);
	for(i=0;i<n;i++)
		num[i]=num[i]+c;
	printf("The array incremented by value %d is:\n",c);
	for(i=0;i<n;i++)
		printf("%d  ",num[i]);
	return 0;	
}

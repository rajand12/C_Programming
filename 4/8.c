/* Write a program to read N numbers and sort them in ascending order
   using selection sort.*/
#include<stdio.h>
int main()
{	
	int i, j, n, temp, number[100];
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter %d elements: ", n);
	for(i=0;i<n;i++)
    	scanf("%d",&number[i]);
   	for(i=0;i<n;i++)
   	{
    	for(j=i+1;j<n;j++)
	  	{
        	if(number[i]>number[j])
		 	{
            	temp=number[i];
            	number[i]=number[j];
            	number[j]=temp;
        	}
      	}
   	}
	printf("Sorted elements in ascending order:\n");
   	for(i=0;i<n;i++)
      printf("%d\t",number[i]);
   return 0;
}

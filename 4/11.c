/* Write a program to read N items and sort them in ascending or descending order depending 
upon user choice. ( for e.g. 'a' for ascending and 'd' for descending) */

#include <stdio.h>
int main()
{
	
  	int array[100], n, i, j, swap;
  	char c;
	printf("Enter number of elements: ");
  	scanf("%d", &n);
	printf("Enter %d integers:\n", n);
  	for (i = 0; i < n; i++)
	scanf("%d", &array[i]);
	printf("Enter 'a' for ascending order and 'd' for descending order: ");
	fflush(stdin);
	scanf("%c",&c);
	if(c=='a')
	{
  	for ( i = 0 ; i < n - 1; i++)
  	{
    	for (j = 0 ; j < n - i - 1; j++)
    	{
      		if (array[j] > array[j+1]) /* For decreasing order use '<' instead of '>' */
      		{
        		swap       = array[j];
        		array[j]   = array[j+1];
        		array[j+1] = swap;
      		}
    	}
  	}
	printf("Sorted elements in ascending order:\n");
	for (i = 0; i < n; i++)
     	printf("%d\n", array[i]);
	}
	else if(c=='d')
	{
  	for ( i = 0 ; i < n - 1; i++)
  	{
    	for (j = 0 ; j < n - i - 1; j++)
    	{
      		if (array[j] < array[j+1]) 
      		{
        		swap       = array[j];
        		array[j]   = array[j+1];
        		array[j+1] = swap;
      		}
    	}
  	}
	printf("Sorted elements in descending order:\n");
	for (i = 0; i < n; i++)
     	printf("%d\n", array[i]);
	}
	else
	printf("Invalid Choice!!!");
	return 0;
}

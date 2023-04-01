/* Write a program to search an item in an array using linear search. */

#include <stdio.h>
int main()
{
	int array[100], item, c, n;
  	printf("Enter number of elements in array: ");
  	scanf("%d", &n);
	printf("Enter %d integer(s): ",n);
  	for (c = 0; c < n; c++)
	scanf("%d", &array[c]);
	printf("Enter a number to search: ");
  	scanf("%d", &item);
 	for (c = 0; c < n; c++)
  	{
    	if (array[c] == item)
    	{
      		printf("%d is present at location %d.", item, c+1);
      		exit(0);
    	}
  	}
  	printf("%d isn't present in the array.",item);
  	return 0;
}

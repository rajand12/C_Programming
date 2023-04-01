/*Write a program to print the size of all primitive data types.*/

#include<stdio.h>
int main()
{
	int a;
	float b;
	double c;
	char d;
	printf("The size of integer data type is %d.",sizeof(a));
	printf("\nThe size of float data type is %d.",sizeof(b));
	printf("\nThe size of double data type is %d.",sizeof(c));
	printf("\nThe size of character data type  is %d.",sizeof(d));
	return 0;
	
}


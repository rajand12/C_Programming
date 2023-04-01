//Write a program to concatenate string without using function.
#include<stdio.h>

int main()
{
	int i,j;
	char string1[25],string2[25],result[50];
	printf("Enter first string::\n");
	scanf("%[^\n]",string1);
	fflush(stdin);
	printf("Enter second string::\n");
	scanf("%[^\n]",string2);
	for(i=0;string1[i]!='\0';i++)
	{
		result[i]=string1[i];
	}
	for(j=0;string2[j]!='\0';j++)
	{
			result[i]=string2[j];
			i++;
	}
	printf("Concatenated string is \"%s\"",result);
	return 0;
}

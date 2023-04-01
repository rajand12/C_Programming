//Write a program to copy the string without using string function
#include<stdio.h>
int main()
{
	char str[50],copy[50];
	int n=0;
	printf("Enter a string::");
	scanf("%[^\n]",str);
	while(str[n]!='\0')
	{
		copy[n]=str[n];
		n++;	
	}
	printf("The copied string is \"%s\".",copy);
	return 0;

}

//Write a program to find reverse of string without using function.

#include<stdio.h>
int main()
{
	char str[100],rev[100];
	int i,length=0,j=0;
	printf("Enter a string: ");
	scanf("%[^\n]",&str);
	for(i=0;str[i]!='\0';i++)
	{
		length++;
	}
	length--;
	for(i=length;i>=0;i--)
	{
		rev[j]=str[i];
		j+=1;
	}
	printf("The reverse of the string is %s",rev);
	return 0;	
}


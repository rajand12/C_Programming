//Write a program to convert string into upper case without using function.

#include<stdio.h>
int main()
{
	char str[100],z[100];
	int i;
	printf("Enter a word: ");
	scanf("%[^\n]",&str);
	//gets(str);
	printf("You entered: %s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='a'&& str[i]<='z')
		{
			z[i]=str[i]-32;
		}
		else
		{
			z[i]=str[i];
		}
		
	}
	printf("\nUppercase: %s",z);
}

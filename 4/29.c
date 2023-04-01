//	29. Write a program to check whether a word is palindrome or not using function.
#include<stdio.h>
#include<string.h>
int main()
{
	
	int l,i,f=0;
	char string[25];
	printf("Enter a string:\n");
	gets(string);
	l=strlen(string);
	for(i=0;i<l;i++)
	{
		if(string[i]!=string[l-1-i])
		{
			f=1;
			break;
		}
	}
	if(f==0)
	//{
		printf("Its is palindrome.");
	//}
	else 
	//{
		printf("Its not palindrome");

	//}
return 0;
}

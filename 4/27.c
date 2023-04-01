//Write a program to check whether a word is palindrome or not.
#include<stdio.h>
int main()
{
	int i,n=0,f=0,c=0,len=0;
	char str[50],rev[50];
	printf("Enter a string:::");
	scanf("%[^\n]",str);
	while(str[n]!='\0')
	{
		len++;
		n++;
	}
	n=0;
	for(i=len-1;i>=0;i--)
	{
		rev[n]=str[i];
		n++;
	}
	printf("Reverse string is %s.\n",rev);
	for(i=0;str[i]!='\0';i++)
	{
		if(rev[i]!=str[i])
			{
				f=1;
			}
	}
	if(f==1)
	printf("Word %s is not palindrome.",str);
	else
	printf("Word %s is palindrome.",str);
	return 0;
	
}

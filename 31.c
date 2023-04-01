//Write a program to read a line of text and search the substring from that line.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,c=0,t,j;
	char string[50];
	char substring[20];
	printf("Enter text:::\n");
	scanf("%[^\n]",string);
	printf("Enter a substring:::::::\n");
	scanf("%s",substring);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]==substring[c])
		{
		j=i;
		t=i;
			while(substring[c]==string[j])
			{
				c++;
				j++;
			
			}
			if(substring[c]=='\0')
			{
				printf("\nThe substring is found form the postion %d of the line.",t+1);
				exit(0);
			}
			c=0;
		}	
	}
	printf("Substring is not found::\n");
	return 0;
}

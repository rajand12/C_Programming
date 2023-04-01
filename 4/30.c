//30. Write a program to read line of text and delete all the occurrence of word "that".
//hey whats that thing 
//hey whats thing
#include<stdio.h>
int main()
{
	int i=0,c=0,n=0,flag=1;
	char str[50],ans[50];
	printf("Enter your text::\n");
	scanf("%[^\n]",str);
	while(str[i]!='\0')
	{
		if(str[i]=='t'&&str[i+1]=='h'&&str[i+2]=='a'&&str[i+3]=='t')
		{
			i+=4;
		}		
	ans[c]=str[i];
	i++;
	c++;
	}
	for(i=0;i<=c;i++)
	{
		printf("%c",ans[i]);
		
	}
	return 0;
}

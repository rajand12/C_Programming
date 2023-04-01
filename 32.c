//32.Write a program to remove all space from a line of text.
#include<stdio.h>
int main()
{
	int i,c=0;
	char str[50],ans[50];
	printf("Enter your text::\n");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]!=' ')
		{
			ans[c]=str[i];
			c++;
		}
	}
	for(i=0;i<=c;i++)//{
		printf("%c",ans[i]);
		
	//}
	return 0;
	
}


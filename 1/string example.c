/*string example str copy*/

#include<stdio.h>
int main()
{
	char first_str[20]="Hello World";
	char second_str[20];
	int i,str_len;
	for(i=0;first_str[i]!='\0';i++);
	str_len=i;
	for(i=0;first_str[i]!='\0';i++)
	{
		second_str[i]=first_str[i];
	}
	second_str[i]='\0';
	printf("Second String= %s",second_str);
	return 0;
}


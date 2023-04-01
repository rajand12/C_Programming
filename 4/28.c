//Write a program to read line of text and count number of vowels ,consonant ,digits ,white spaces and other characters
#include<stdio.h>
int main(){
	char string[25];
	int v=0,i,flag=0,con=0,s=0,ch=0,d;
	printf("Enter a string::\n");
	scanf("%[^\n]",string);
	for(i=0;string[i]!='\0';i++)
	{
		if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
		{
			v++;
			flag=1;
		}
		else if(flag==0&&string[i]<=122&&string[i]>=97)
		{
			con++;
		}
		else if(string[i]==' ')
		{
			s++;
		}
		else if(string[i]>=48&&string[i]<=57)
		{						 
		d++;
		}     
		else
		{
			ch++;
		}
		flag=0;
	}
	printf("The no of vowels is %d\n",v);
	printf("The no of consonants is %d\n",con);
	printf("The no of spaces is %d\n",s);
	printf("The no of digits is %d\n",d);
	printf("The no of other characters is %d\n",ch);
	return 0;
}

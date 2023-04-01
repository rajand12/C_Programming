#include<stdio.h>
int main()
{
	char ch;
	FILE *fp;
	fp=fopen("character.txt","a");
	printf("Enter a character: ");
	scanf("%c",&ch);
	fputc(ch,fp);
	fclose(fp);
	return 0;
}

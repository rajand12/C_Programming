//33.Write a program to count numbers of words from line of text.
#include<stdio.h>
int main(){
	int i,c=1;
	char str[50],ans[50];
	printf("Enter your text::\n");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]==' ')
		{
			c++;
		}
	}

		printf("There are %d words.",c);

	return 0;
	
}

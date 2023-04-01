//Write a program to read name of N student and display in monitors.
#include<stdio.h>
int main(){
	char names[100][15];
	int i , n;
	printf("Enter no of names::\n");
	scanf("%d",&n);
	printf("Enter names::\n");
	for(i=0;i<n;i++)
	{
		scanf("%s",names[i]);
	}
	printf("The names are::::\n");
		for(i=0;i<n;i++)
		{
		printf("%s\n",names[i]);
		}
		return 0;
}   



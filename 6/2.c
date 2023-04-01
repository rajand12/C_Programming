/*2. Write a program using structure of booklist having data member's title, author
and cost. Enter four data and calculate total cost.*/
#include<stdio.h>
struct booklist{
	char title[25];
	char aurthor[25];
	int cost;
};
int main ()
{
	struct booklist b[4];
	int i,total_cost=0;
	for(i=0;i<4;i++){
		printf("\nEnter the detials of the book no %d:\n",i+1);
		printf("Enter the title of the book:\n");
		fflush(stdin);
		gets(b[i].title);
		printf("Enter the aurthor of the book:\n");
		gets(b[i].aurthor);
		printf("Enter the cost of the book:\n");
		scanf("%d",&b[i].cost);
		total_cost+=b[i].cost;
	}
	printf("The total cost of book is %d",total_cost);
}

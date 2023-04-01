//Write a menu base progrm  to perform calculation according to 
// + for addition
// - for subtraction
// * for multiplication
// / for division
// e for exit

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1,num2,sum,diff,prod;
	float div;
	char ch;
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	printf("+ for Addition\n- for Subtraction\n* for Multiplication\n/ for Division\ne to Exit");
	printf("\nPlease enter a character accordingly: ");
	fflush(stdin);
	scanf("%c",&ch);
	
	if(ch=='+')
	{
		sum=num1+num2;
		printf("\nThe sum is %d.",sum);
	}
	else if(ch=='-')
	{
		diff=num1-num2;
		printf("\nThe diffrence is %d.",diff);
	}
	else if(ch=='*')
	{
		prod=num1*num2;
		printf("\nThe product is %d.",prod);
	}
	else if(ch=='/')
	{
		div=(float)num1/num2;
		printf("\nThe division is %.2f.",div);
	}
	else if(ch=='e')
	{
		exit(0);
	}
	else
	{
		printf("\nYour input is not valid.");
	}
	return 0;
}

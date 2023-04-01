#include<stdio.h>
#include<stdlib.h>
int main()
{
	int choice, num1, num2,sum,diff,mul;
	printf("1-Addition\n2-Subtraction\n3-Multiplication\n-Exit the program\nEnter you choice:");
	scanf("%d",&choice);
	printf("Enter two numbers: ");
	scanf("%d %d",&num1,&num2);
	switch(choice)
	{
		case 1:
			sum=num1+num2;
			printf("Sum=%d\n",sum);
			break;
		case 2:
			diff=num1-num2;
			printf("Difference=%d\n",diff);
			break;
		case 3:
			mul=num1*num2;
			printf("Multiplication=%d\n",mul);
			break;
		case 4:
			exit(0);
		default:
			printf("Your choice is invalid!!!");
			
	}
	printf("\nOut of the switch block.");
	return 0;
}

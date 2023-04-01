#include<stdio.h>
#include<stdlib.h>
int main()
{
	int num1,num2,choice,sum,diff,mul;
	printf("Please Press:\n1 for Addition\n2 for subtraction\n3 for Multiplication\n4 to exit program\nEnter your choice:");
	scanf("%d",&choice);
	printf("Enter two numbers:");
	scanf("%d %d",&num1,&num2);
	if (choice==1)
	{
		sum=num1+num2;
		printf("The sum is %d.\n",sum);
	}
	else if(choice==2)
	{
		diff=num1-num2;
		printf("The difference is %d.\n",diff);
	}
	else if(choice==3)
	{
		mul=num1*num2;
		printf("The product is %d.\n",mul);
	}
	else if(choice==4)
	{
		exit(0);
	}
	else
	{
		printf("Your choice is invalid!!!");
	}
    return 0;
}


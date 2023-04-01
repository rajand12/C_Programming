//Write a program to find the factorial of a given number.

#include<stdio.h>
int main()
{
    int num, i;
    unsigned long  long  fact = 1;
    printf("Enter an integer: ");
    scanf("%d",&num);
    if (num < 0)
        printf("Factorial of negative integer is not defined.");
    else {
        for (i=1;i<=num;i++) 
		{
            fact=fact*i;
        }
        printf("Factorial of %d is %llu.",num,fact);
    }

    return 0;
}

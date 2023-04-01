#include<stdio.h>
int main()
{
    int choice,a,b,result;
    float div;
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("5. Remainder\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    switch(choice)
    {
        case 1:
            result=a+b;
            printf("%d is the sum of %d and %d.\n",result,a,b);
            break;
        case 2:
            result=a-b;
            printf("%d is the difference of %d and %d.\n",result,a,b);
            break;
        case 3:
            result=a*b;
            printf("%d is the product of %d and %d.\n",result,a,b);
            break;
        case 4:
            div=(float)a/b;
            printf("%d divided by %d is %.2f.\n",a,b,div);
            break;
        case 5:
            result = a % b;
            printf("%d is the remainder when %d is divided by %d.\n",result,a,b);
            break;
        default:
            printf("Invalid number.");
    }
    return(0);
}


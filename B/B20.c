#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("Enter the third number:");
    scanf("%d",&c);
    if ((a>b)&&(a>c))
    {
        printf("%d is the largest number among %d, %d and %d.\n", a,a,b,c);
    }
    else if (b>c)
    {
        printf("%d is the largest number among %d, %d and %d.\n", b,a,b,c);
    }
    else
    {
        printf("%d is the largest number among %d, %d and %d.\n", c,a,b,c);
    }
    return(0);
}

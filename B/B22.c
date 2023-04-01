#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number(0-7): ");
    scanf("%d",&num);
    if (num == 1)
    {
        printf("Day %d is Sunday.\n",num);
    }
    else if (num == 2)
    {
        printf("Day %d is Monday.\n",num);
    }
    else if (num == 3)
    {
        printf("Day %d is Tuesday.\n",num);
    }
    else if (num == 4)
    {
        printf("Day %d is Wednesday.\n",num);
    }
    else if (num == 5)
    {
        printf("Day %d is Thursday.\n",num);
    }
    else if (num == 6)
    {
        printf("Day %d is Friday.\n",num);
    }
    else if (num == 7)
    {
        printf("Day %d is Saturday.\n",num);
    }
    else
    {
        printf("You have enterd an invalid number.\n");
    }
}

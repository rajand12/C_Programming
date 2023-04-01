#include<stdio.h>
int main()
{
    int sales, com;
    printf("Enter the amount made from sales:");
    scanf("%d",&sales);
    if (sales<=10000)
    {
        com = sales * 4 / 100;
        printf("Rs.%d is your commission.\n", com);
    }
    else if ((sales >= 10001)&&(sales<=20000))
    {
        com = sales * 5 / 100;
        printf("Rs.%d is your commission.\n", com);
    }
    else if ((sales >= 20001)&&(sales<=30000))
    {
        com = sales * 6 / 100;
        printf("Rs.%d is your commission.\n", com);
    }
    else
    {
        com = sales * 7 / 100;
        printf("Rs.%d is your commission.\n", com);
    }
}

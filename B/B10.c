#include<stdio.h>
int main()
{
    int units,amt;
    printf("Enter the units:");
    scanf("%d",&units);
    if (units<=100)
    {
        amt=(units*40/100)+50;
        printf("Your electricity charge is Rs.%d.",amt);
    }
    else if(units<=300)
    {
        amt=(units*50/100)+50;
        printf("Your electricity charge is Rs.%d.",amt);
    }
    else
    {
        amt=(units*60/100)+50;
        printf("Your electricity charge is Rs.%d.",amt);
    }
    return(0);
}

#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,total;
    float per;
    printf("Enter your mark in first subject:");
    scanf("%d",&m1);
    printf("Enter your mark in second subject:");
    scanf("%d",&m2);
    printf("Enter your mark in third subject:");
    scanf("%d",&m3);
    printf("Enter your mark in fourth subject:");
    scanf("%d",&m4);
    printf("Enter your mark in fifth subject:");
    scanf("%d",&m5);
    total= m1+m2+m3+m4+m5;
    per=(float)total/5;
    if (per>90)
    {
        printf("Your grade is 'S'.\n");
    }
    else if ((per>=76)&&(per<=90))
    {
        printf("Your grade is 'A'.\n");
    }
    else if ((per>=61)&&(per<=75))
    {
        printf("Your grade is 'B'.\n");
    }
    else if ((per>=51)&&(per<=60))
    {
        printf("Your grade is 'C'.\n");
    }
    else if ((per>=40)&&(per<=50))
    {
        printf("Your grade is 'D'.\n");
    }
    else
    {
        printf("You have failed....");
    }
    return(0);
}

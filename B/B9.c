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

    total = m1+m2+m3+m4+m5;
    per = total/5;

    if (per>=60)
    {
        printf("You have passed in FIRST DIVISION.");
    }
    else if ((per>=50)&&(per<=59))
    {
        printf("You have passed in SECOND DIVISION.");
    }
    else if ((per>=40)&&(per<=49))
    {
        printf("You have passed in THIRD DIVISION.");
    }
    else
    {
        printf("Sorry you  have failed the exam.\nStudy properly for re-exam.");
    }
    return(0);
}

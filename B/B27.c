#include<stdio.h>
int main()
{
    int pr,th,total;
    printf("Enter the theory marks:");
    scanf("%d",&th);
    printf("Enter the practical marks:");
    scanf("%d",&pr);
    total=th+pr;
    if (total<=100 && total>=40)
    {
        printf("You have PASSED. Your total marks is %d.\n",total);
    }
    else if(total>100)
    {
        printf("Invalid Marks: Totak marks cannot exceed 100.\n");
    }
    else
    {
        printf("You have FAILED. Your total marks is %d.",total);
    }
    return(0);
}

#include<stdio.h>
int main()
{
    int sal;
    float HRA,DA;
    printf("Enter the salary:");
    scanf("%d",&sal);
    if((sal>=5000)&&(sal<=10000))
    {
        HRA= sal * 10 /100;
        DA = sal * 5 / 100;
        printf("Your HRA is %.1f.\n",HRA);
        printf("Your DA is %.1f.\n",DA);
    }
    else if((sal>=10001)&&(sal<=15000))
    {
        HRA= sal * 15 /100;
        DA = sal * 8 / 100;
        printf("Your HRA is %.1f.\n",HRA);
        printf("Your DA is %.1f.\n",DA);
    }
    else
    {
        printf("Your salary is not between 5000 and 15000.\nEnter the correct salary amount.");
    }
    return 0;
}

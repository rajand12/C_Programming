#include<stdio.h>
int main()
{
    int a,b,sum,sub,mul,rem;
    char ch;
    float div;
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);
    printf("\n");
    printf("Enter '+' symbol to find sum.\n");
    printf("Enter '-' symbol to find difference.\n");
    printf("Enter '*' symbol to find product.\n");
    printf("Enter '/' symbol to perform division.\n");
    printf("Enter '%%' symbol to find remainder.\n \n");
    printf("Enter a symbol: ");
    fflush(stdin);
    scanf("%c",&ch);
    if(ch == '+')
    {
        sum=a+b;
        printf("%d is the sum of %d and %d.\n",sum,a,b);
    }
    else if(ch=='-')
    {
        sub=a-b;
        printf("%d is the difference of %d and %d.\n",sub,a,b );
    }
    else if(ch=='*')
    {
        mul=a*b;
        printf("%d is the multiplication of %d and %d.\n",mul,a,b );
    }
    else if(ch=='/')
    {
        div=(float)a/b;
        printf("%d divided by %d is %.2f.\n",a,b,div );
    }
    else if(ch=='%')
    {
        rem=a%b;
        printf("%d is the remainder of %d divided by %d.\n",rem,a,b );
    }
    else
    {
        printf("You have entered a invalid symbol.");
    }
}

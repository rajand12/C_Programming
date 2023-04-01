#include<stdio.h>
#define PI 3.14
int main()
{
    int choice,r,l,b,h;
    float area;
    printf("1. Circle\n");
    printf("2. Rectangle\n");
    printf("3. Triangle\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            printf("Enter the radius:");
            scanf("%d",&r);
            area=(float)PI*r*r;
            printf("Area of the circle is %.2f\n",area);
            break;
        case 2:
            printf("Enter the length:");
            scanf("%d",&l);
            printf("Enter the breath:");
            scanf("%d",&b);
            area=l*b;
            printf("Area of the rectange is %.0f.\n",area);
            break;
        case 3:
            printf("Enter the base:");
            scanf("%d",&b);
            printf("Enter the height:");
            scanf("%d",&h);
            area=(float)1/2*(b*h);
            printf("Area of the triangle is %.2f.\n",area );
            break;
        default:
        	printf("Enter a valid number.");
    }
    return(0);
}

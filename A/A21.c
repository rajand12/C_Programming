#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
	int r,choice;
	float area,cir;
	printf("Please enter the radius of the circle:");
	scanf("%d",&r);
	printf("Please enter:\n");
	printf("1 to find area.\n2 to find circumference.\n");
	scanf("%d",&choice);
	switch(choice)
	case(1):
	{
		area=PI*r*r;
		printf("The area of the circle is %f.",area);
		break;
	case(2):
		cir=2*PI*r;
		printf("The circumference of the circle is %f.",cir);
		break;
	default:
		printf("Invalid Choice!!!");
    }
    return 0;
}

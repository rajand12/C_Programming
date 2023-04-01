#include<stdio.h>
#include<stdlib.h>
#define PI 3.14
int main()
{
	int choice,l,b,r,base,h,length,area1,area4;
	float area2,area3;
	printf("Please Press to find the area of:\n1 for Rectangle\n2 for Circle\n3 for Triangle\n4 for Square\n5 to exit the program\nEnter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Please enter the length and breadth of the rectangle:");
			scanf("%d %d",&l,&b);
			area1=l*b;
			printf("The area of the rectangle is %d.",area1);
			break;
		case 2:
			printf("Please enter the radius of the circle:");
			scanf("%d",&r);
			area2=PI*r*r;
			printf("The area of the circle is %f.",area2);
			break;
		case 3:
			printf("Please enter the base and height of the triangle:");
			scanf("%d %d",&base,&h);
			area3=0.5*base*h;
			printf("The area of the triangle is %f.",area3);
			break;
		case 4:
			printf("Please enter the side of the square:");
			scanf("%d",&length);
			area4=length*length;
			printf("The area of the square is %d.",area4);
			break;
		case 5:
			exit(0);
		default:
			printf("Invalid Choice!!!");
			
	}
	return 0;
}

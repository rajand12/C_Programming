#include<stdio.h>
#define PI 3.14 
int main()
{
	int radius;
	float area,perimeter;
	printf("Enter the radius of the circle: ");
	scanf("%d",&radius);
	area = PI*radius*radius;
	perimeter = 2*PI * radius;
	printf("The perimeter of the circle is %.2f.\n",perimeter);
	printf("The area of the circle is %.2f.",area);
	return 0;
}

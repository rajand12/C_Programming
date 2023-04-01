#include<stdio.h>
int main()
#define PI 3.14
{
	float radius,area,circumference;
	printf("Enter the radius of the circle: ");
	scanf("%f",&radius);
	area = (PI*radius)*(PI*radius);
	circumference = 2*PI*radius; 
	printf("The area of the circle is %f\n",area);
	printf("The circumference of the circle is %f",circumference);
	return 0;	
}

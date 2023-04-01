#include<stdio.h>
int main()
{
	int base,height;
	float area;
	printf("Please enter the base and height of the triangle:");
	scanf("%d %d",&base,&height);
	area=0.5*base*height;
	printf("The area of the triangle is %f.",area);
	return 0;
}

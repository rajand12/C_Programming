#include<stdio.h>
int main()
{
	float length,breadth,area,perimeter;
	printf("Enter the length of the rectangle: ");
	scanf("%f",&length);
	printf("Enter the breadth of the rectangle: ");
	scanf("%f",&breadth);
	area = length*breadth;
	perimeter = 2*(length+breadth); 
	printf("The area of the rectangle is %f\n",area);
	printf("The perimeter of the rectangle is %f",perimeter
	);
	return 0;	
}

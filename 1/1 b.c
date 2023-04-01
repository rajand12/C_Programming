#include<stdio.h> 
int main()
{
	int length,breadth,area,perimeter;
	printf("Enter the length and breadth of the rectangle: ");
	scanf("%d %d",&length,&breadth);
	area =length*breadth;
	perimeter =2*(length+breadth);
	printf("The perimeter of the rectangle is %d.\n",perimeter);
	printf("The area of the rectangle is %d.",area);
	return 0;
}

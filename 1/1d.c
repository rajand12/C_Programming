#include<stdio.h> 
int main()
{
	int l,b,h,s;
	printf("Enter the length of the box: ");
	scanf("%d",&l);
	printf("Enter the breadth of the box: ");
	scanf("%d",&b);
	printf("Enter the height of the box: ");
	scanf("%d",&h);
	s=2*(l*b+l*h+b*h);
	printf("The surface area of the box is %d.",s);
	return 0;
}

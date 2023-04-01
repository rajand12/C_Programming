//2. WAP to find surface area of box using function.
#include<stdio.h>
int sur_area (int h, int w, int l);
int main()
{
	int h,w,l;
	printf("Enter height weidth and length of the box:\n");
	scanf("%d %d %d",&h,&w,&l);
	printf("The surface area of the box is %d",sur_area(h,w,l));
}
int sur_area (int h, int w, int l)
{
	return (2*(h*w)+2*(h*l)+2*(w*l));
}

// Write a menu base progrm  for 
//1. Area of rectangle
//2. Perimeter of rectangle
//3. Exit

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int length,breadth,num,area,perimeter;
	printf("Enter the length and breadth of the rectangle:");
	scanf("%d %d",&length,&breadth);
	printf("1. Area of rectangle\n2. Perimeter of rectangle\n3. Exit");
	printf("\nPlease enter the number accordingly: ");
	scanf("%d",&num);
	if(num==1)
	{
		area=length*breadth;
		printf("\nThe area of the rectangle is %d.",area);
	}
	else if(num==2)
	{
		perimeter=2*(length+breadth);
		printf("\nThe perimeter of the rectangle is %d.",perimeter);
	}
	else if(num==3)
	{
		exit(0);
	}
	else
	{
		printf("\nYour input is not valid.");
	}
	return 0;
}

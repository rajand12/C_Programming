//Write a program to read coefficient of quadratic equation and find all its root.
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,e,x1,x2;
	printf("Enter the a,b and c in the equation ax^2+bx+c=0 ::");
	scanf("%d %d %d",&a,&b,&c);
	d=b*b-4*a*c;
	e=sqrt(d);
	if(d<0)
	{
		printf("The root of the equation is imaginary.");
	}
	else if(e==0)
	{
		x1=(float)(-b+e)/(2*a);
		printf("The root of the equation is %f.",x1);
	}
	else
	{
		x1=(float)(-b+e)/(2*a);
		x2=(float)(-b-e)/(2*a);
		printf("The roots of the equation are %f and %f.",x1,x2);
	}
	return 0;
	
}

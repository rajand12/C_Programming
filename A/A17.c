#include<stdio.h>
int main()
{
	int in,yard,ft,in1,in2;
	printf("Please enter the length in inches:");
	scanf("%d",&in);
	yard=in/36;
	in1=in-(yard*36);
	ft=in1/12;
	in2=in1-(ft*12);
	printf("%d inches is equivalent to:",in);
	printf("\n%d Yards %d Feets %d Inches",yard,ft,in2);
	return 0;
}

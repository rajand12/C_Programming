#include<stdio.h>
int main()
{
	int male,female;
	float r1,r2;
	printf("Enter the number of male student in class: ");
	scanf("%d",&male);
	printf("Enter the number of female student in class: ");
	scanf("%d",&female);
	r1= (float)male/female;
	r2= (float)female/male;
	printf("The ratio of male to female is %.2f.",r1);
	printf("\nThe ratio of female to male is %.2f.",r2);
	return 0;
}

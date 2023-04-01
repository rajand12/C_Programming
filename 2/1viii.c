/*Write a program to read marks obtained in your final exam in all subjects and find total
marks,percentage,result(pass or fail) and division. */
#include<stdio.h>
int main()
{
	int a,b,c,d,e,tot;
	float per;
	printf("Enter your marks in five subjects:");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	tot=a+b+c+d+e;
	per=(float)tot/5;
	if(a>=40&&b>=40&&c>=40&&d>=40&&e>=40)
	{
		printf("You have passed.");
		printf("\nYou have got %.2f percentage.",per);
		if(per>=80)
		//{
			printf("\nYou have secured distinction.");
		//}
		else if(per>=70)
		//{
			printf("\nYou have secured first division.");
		//}
		else if(per>=60)
		//{
			printf("\nYou have secured second division.");
		//}
		else
		//{
			printf("\nYou have secured third division.");
		//}	
	}
	else
	//{
		printf("\nYou have failed the exam.");
	//}
	return 0;
}

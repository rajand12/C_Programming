/* Write a program to read the age of a person and display remarks accordingly:
Age			Remarks
Age<12		CHILD
12<=age<20	TEEN
20<=age<30	ADULT
30<=age<55	YOUNG
Age>=55		OLD    */

#include<stdio.h>
int main()
{
	int age;
	printf("Please enter your age: ");
	scanf("%d",&age);
	if(age>=55)
	//{
		printf("\nOLD");
	//}
	else if(age>=30)
	//{
		printf("\nYOUNG");
	//}
	else if(age>=20)
	//{
		printf("\nADULT");
	//}
	else if(age>=12)
	//{
		printf("\nTEEN");
	//}
	else 
	//{
		printf("\nCHILD");
	//}
	return 0;	
}

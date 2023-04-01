#include<stdio.h>
#include<conio.h>
int main()
{
	int roll_no;
	char name[50];
	float mark1,mark2,mark3;
	long long int mob_number;
	printf("Enter your roll number: ");
	scanf("%d",&roll_no);
	printf("Enter your name: ");
	fflush(stdin);
	scanf("%[^\n]s",name);
	printf("Enter marks of three subjects:");
	scanf("%f %f %f",&mark1,&mark2,&mark3);
	printf("Enter your mobile number: ");
	scanf("%lld",&mob_number);
	printf("\n\n");
	printf("Roll Number = %d\n",roll_no);
	printf("Name = %s\n",name);
	printf("Marks = %f %f %f\n",mark1,mark2,mark3);
	printf("Mobile Number = %lld",mob_number);
	return 0;
	
}

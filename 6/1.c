/*Write a Program to store bio-data of 100 students in a class that includes name,
roll number, address, DOB using structure.*/


#include<stdio.h>
struct student{
	char name[30];
	int roll;	
	char add[40];
	int d,m,y;
};
int main()
{
	int i;
	struct student s[100];
	for(i=0;i<100;i++)
	{
		fflush(stdin);
		printf("Enter the name of student %d: ",i+1);
		scanf("%[^\n]",&s[i].name);
		printf("Enter the roll number of student %d: ",i+1);
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("Enter the address of student %d: ",i+1);
		scanf("%[^\n]",&s[i].add);
		printf("Enter the date of birth(dd-mm-yyyy) of student %d: ",i+1);
		scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
	}
	for(i=0;i<100;i++)
	{
		printf("\n\nStudent %d Details\n",i+1);
		printf("Name= %s\n",s[i].name);
		printf("Roll No.= %d\n",s[i].roll);
		printf("Address= %s\n",s[i].add);
		printf("DOB= %d-%d-%d\n\n",s[i].d,s[i].m,s[i].y);	
	}
	
}


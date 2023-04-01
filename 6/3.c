 /*Write a program to compute total marks and percentage of N student of BSc.
CSIT First Semester, with student name and roll no using structure.*/

#include<stdio.h>
struct student{
	char name[30];
	int roll;
	int marks[5];
	float per;
	
};
int main()
{
	int n,i,j,sum=0;
	printf("How many student's data will you enter: ");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		fflush(stdin);
		printf("Enter the name of student %d: ",i+1);
		scanf("%[^\n]",&s[i].name);
		printf("Enter the roll number of student %d: ",i+1);
		scanf("%d",&s[i].roll);
		fflush(stdin);
		printf("Enter the marks of student %d in five subjects:\n",i+1);
		for(j=0;j<5;j++)
		scanf("%d",&s[i].marks[j]);	
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<5;j++)
		{
			sum+=s[i].marks[j];
		}
		s[i].per=(float)sum/5;
		sum=0;
		
	}
	for(i=0;i<n;i++)
	{
		printf("\n\nStudent %d Details\n",i+1);
		printf("Name=%s\n",s[i].name);
		printf("Roll No.=%d\n",s[i].roll);
		printf("Percentage=%.2f\n\n",s[i].per);	
	}
	
}


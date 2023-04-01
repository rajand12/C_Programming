#include<stdio.h>
#include<string.h>
struct Student{
	int roll;
	char name[30];
	char add[40];
	long long phone;
};
int main()
{
	struct Student s;
	FILE *fp;
	s.roll=10;
	strcpy(s.name,"Rohan");
	strcpy(s.add,"Teku");
	s.phone=9843333333;
	fp=fopen("student.txt","r");
	//while(fread(&s,sizeof(Struct Student),1,fp)!=EOF)
	
	{
		
	}
//	fprintf(fp,"%d",s.roll);
//	fprintf(fp,"%s",s.name);
//	fprintf(fp,"%s",s.add);
//	fprintf(fp,"%lld",s.phone);
	return 0;
}

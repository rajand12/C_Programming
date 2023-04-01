#include<stdio.h>
int main()
{
	char ID[20],name[50];
	int salary,HRA,DA,CCA,GS,PF,IT,NS;
	printf("Please enter employee ID: ");
	scanf("%s",&ID);
	printf("Please enter employee name: ");
	scanf("%s",&name); 
	printf("Enter the amount of basic salary: ");
	scanf("%d",&salary);
	HRA=(40*salary)/100;
	DA=(10*salary)/100;
	CCA=(5*salary)/100;
	GS=salary+HRA+DA+CCA;
	PF=(10*GS)/100;
	IT=(10*salary)/100;
	NS=GS-(PF+IT);
	printf("Here are the salary, fund and allowance details of %s(%s).\n",name,ID);
	printf("HRA=%d\nDA=%d\nCCA=%d\nGS=%d\nPF=%d\nIT=%d\nNS=%d\n",HRA,DA,CCA,GS,PF,IT,NS);
	return 0;		 
}

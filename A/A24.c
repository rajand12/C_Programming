#include<stdio.h>
#include<stdlib.h>
int main()
{
	int cel,fer,choice;
	int cel1,fer1;
	printf("Please enter:\n1 to convert Celcius to Farenheit.\n2 to convert Farenheit to Celcius.  ");
	scanf("%d",&choice);
	switch(choice)
	{
		case(1):
			printf("Enter the temperature in Celcius: ");
			scanf("%d",&cel);
			fer1=((cel/5)*9)+32;
			printf("The converted temperarure is %dF.",fer1);
			break;
		case(2):
			printf("Enter the temperature in Farenheit: ");
			scanf("%d",&fer);
			cel1=((fer-32)*5)/9;
			printf("The converted temperarure is %dC.",cel1);
			break;
		default:
			printf("Invalid Choice!!!");			
	}
	return(0);	
}

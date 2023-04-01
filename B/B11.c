#include<stdio.h>
int main()
{
	int salary,tax;
	printf("Enter your salary amount:");
	scanf("%d",&salary);
	if(salary>=9000)
	{
		tax=(40*salary)/100;
		printf("You have to pay Rs.%d as tax.",tax);
    }
    else if(salary<9000&salary>7500)
    {
    	tax=(20*salary)/100;
    	printf("You have to pay Rs.%d as tax.",tax);
	}
	else
	{
		tax=(10*salary)/100;
    	printf("You have to pay Rs.%d as tax.",tax);	
	}
	return(0);
}


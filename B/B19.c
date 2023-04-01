#include<stdio.h>
#include<stdlib.h>
int main()
{
    int choice;
    float f,c;
    printf("1. Convert Fahrenheit to Celsius.\n");
    printf("2. Convert Celsius to Fahrenheit.\n");
    printf("3. Exit the program.\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {	
    	case 1:
        	printf("Enter the temperature in Fahrenheit:");
        	scanf("%f",&f);
        	c= (f- 32) * 5/9;
        	printf("%.2f~C is the temperature Celsius.\n", c);
        	break;
        	
        case 2:
        	printf("Enter the temperature in Celsius:");
        	scanf("%f",&c);
       		f= c * 9 / 5 +32;
        	printf("%.2f~F is the temperature in Fahrenheit.\n", f);
        	break;
    	case 3:
    		exit(0);
    	default:
    	printf("Invalid number.\n");
    }
    return(0);
}

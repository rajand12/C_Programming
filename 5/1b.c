/*1. WAP to calculate simple interest using function.
b. With function returning values and passing no argument*/
#include<stdio.h>
float si();
int main(){
	
	printf("Simple intrest is %.2f",si());
	return 0;
}
float si(){
	int p,t;
	float r;
	printf("Enter principal time and rate:\n");
	scanf("%d %d %f",&p,&t,&r);
	return (p*t*r/100);
}

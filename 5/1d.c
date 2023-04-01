/*1. WAP to calculate simple interest using function.
d. With function returning no values and passing no arguments*/
#include<stdio.h>
void si();
int main(){
	si();
	return 0;
}
void si(){
	int p,t;
	float r;
	printf("Enter principal time and rate:\n");
	scanf("%d %d %f",&p,&t,&r);
	printf("Simple intrest is %.2f",p*t*r/100);
}

/*1. WAP to calculate simple interest using function.
c. With function returning no values and passing arguments*/
#include<stdio.h>
void si(int p,int t,float r);
int main(){
	int p,t;
	float r;
	printf("Enter principal time and rate:\n");
	scanf("%d %d %f",&p,&t,&r);
	si(p,t,r);
	return 0;
}
void si(int p,int t,float r){
	printf("Simple intrest is %.2f",p*t*r/100);
	
}

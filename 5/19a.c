//19a.WAP to find factorial of number using recursion.
#include<stdio.h>
int fact(int n);
void main(){
	int n;
	printf("Enter a number::::\n");
	scanf("%d",&n);
	printf("Factorial is %d",fact(n));
	}
int fact(int n){
	while(n>0){
 	return n*fact(n-1);
 	}
	return 1;
}

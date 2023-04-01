//5. Write a program to find factorial of number using function.
#include<stdio.h>
int fact(int n);
void main(){
	int n;
	printf("Enter a number::::\n");
	scanf("%d",&n);
	printf("Factorial is %d",fact(n));
	}
int fact(int n){
	int f=1;
	while(n>0){
		f=f*n;
		n--;
 	}
	return f;
}

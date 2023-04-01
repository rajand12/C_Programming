//11. WAP that uses function isprime() for testing whether a number is prime or not.
#include<stdio.h>
void isprime(int);
void main(){
	int num;
	printf("Enter a number:\n");
	scanf("%d",&num);
	isprime(num);
}
void isprime(int num){
	int i,c=0;
	for(i=1;i<=num;i++){
		if(num%i==0){
			c++;
		}
	}
	if(c<=2){
		printf("The number you entered is prime:");
	}
	else 
	printf("The number you entered is not prime:");
}

//8. WAP to check whether a number is Armstrong or not.
#include<stdio.h>
void arm(int a);
void main(){
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	arm(a);
}
void arm(int a){
	int x,rem,ans=0;
	x=a;
	while(a>0){
		rem=a%10;
		ans=ans+rem*rem*rem;
		a=a/10;
	}
	if(x==ans){
		printf("Its is armstorng number:");
	} 
	else
	{
		printf("Its is not armstorng number:");
	}
}

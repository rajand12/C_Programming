//7. Write a program to reverse a number using function.
#include<stdio.h>
int rev(int a);
void main(){
	int a;
	printf("Enter a number:\n");
	scanf("%d",&a);
	printf("The reversed number is %d",rev(a));
}
int rev(int a){
	int rem,ans=0;
	while(a>0){
		rem=a%10;
		ans=ans*10+rem;
		a=a/10;
	}
	return ans;
}

//6. WAP to find HCF of two number using function.
#include<stdio.h>
int hcf(int a,int b);
void main(){
	int a,b;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("HCF is %d",hcf(a,b));
}
int hcf(int a,int b){
	int i,smallest;
	if(a<b){
		smallest=a;
	}
	else{
		smallest=b;
	}
	for(i=smallest;i>=1;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}

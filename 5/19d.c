//19d. WAP to find HCF of two numbers using recursive definition.
#include<stdio.h>

int hcf(int a,int b,int count);
void main(){
	int a,b,smallest;
	printf("Enter two numbers to find their HCF:\n");
	scanf("%d %d",&a,&b);
	if(a<b){
		smallest=a;
	}
	else{
		smallest=b;
	}
	printf("The HCF is %d",hcf(a,b,smallest));
	
}
int hcf(int a,int b,int count){
	if(a%count==0 && b%count==0){
		return count;
	}
	return hcf(a,b,count-1);
}

//19c. WAP to find product of two natural numbers using recursion. 
#include<stdio.h>
int product(int ,int ,int );
int main(){
	int a,b,pro=0;
	printf("Enter two numbers to find their products:\n");
	scanf("%d %d",&a,&b);
	printf("The product is %d",product(a,b,pro));
}
int product(int a,int b,int pro){
	while(b>0){
		pro=pro+a;
		return product(a,b-1,pro);
	}
	return pro;
}

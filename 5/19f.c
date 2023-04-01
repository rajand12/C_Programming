//19f. WAP to calculate power of base using recursion.
#include<stdio.h>
int product(int ,int ,int );
void main(){
	int a,b,result=1;
	printf("Enter two numbers to find their products:\n");
	scanf("%d %d",&a,&b);
	printf("The product is %d",product(a,b,result));
}
int product(int a,int b,int result){
	while(b>0){
		result=result*a;
		return product(a,b-1,result);
	}
	return result;
}

//3. WAP to find maximum of two number using function.
#include<stdio.h>
int max(int a,int b);
void main()
{
	int a,b;
	printf("Eneter two numbers:\n");
	scanf("%d %d",&a,&b);
	printf("The maximum is %d",max(a,b));
}
int max(int a, int b)
{
	if(a>b){
		return a;
	}
	else{
		return b;
	}
}

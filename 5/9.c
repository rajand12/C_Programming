/*9. WAP to find roots of quadratic equation using function. Use function findroots() which receive
three coefficient a,b,c of equation as arguments and display roots.*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void findroots(int a,int b,int c);
void main(){
	int a,b,c;
	printf("Enter the valuse of a b and c:\n");
	scanf("%d %d %d",&a,&b,&c);
	findroots(a,b,c);
}
void findroots(int a,int b,int c){
	float x1,x2,discriminant;
	discriminant=b*b-4*a*c;
	if(discriminant<0){
		printf("x has imaginery value!!!!!");
		exit(0);
	}
	x1=(-b+sqrt(discriminant))/(2*a);
	x2=(-b-sqrt(discriminant))/(2*a);
	printf("value of x is %.2f or %.2f",x1,x2);
}

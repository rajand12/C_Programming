//5. Write a program to find area, perimeter of square by passing pointer to function.
#include<stdio.h>
int area(int *);
int peri(int *);
int main(){
	int l;
	printf("Enter the length of the squae:\n");
	scanf("%d",&l);
	printf("The area is %d\n",area(&l));
	printf("The perimeter is %d",peri(&l));
	return 0;
}
int area(int *p){
	return *p**p;
}
int peri(int*p){
	return 4**p;
}

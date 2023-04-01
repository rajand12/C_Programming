//9. Write a program to swap two numbers.
#include<stdio.h>
int main(){
	int a,b;
	int *ptr1,*ptr2,temp;
	printf("Enter two numbers:\n");
	scanf("%d %d",&a,&b);
	ptr1=&a;
	ptr2=&b;
	temp=*ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
	printf("Values after swapped:\n%d %d",*ptr1,*ptr2);
	return 0;
}

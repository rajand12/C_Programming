/*6. Write a program to store marks of 100 students by passing array elements to a
function.*/
#include<stdio.h>
int i;
void pass(int *);
int main(){
	int a[100];
	printf("Enter 100 elements of the array:\n");
	for(i=0;i<100;i++){
	scanf("%d",&a[i]);
	}
	pass(a);
	return 0;
}
void pass(int *ptr){
	printf("The elements you entered are:");
	for(i=0;i<100;i++){
		printf("%d\n",*(ptr+i));
}
}

//7. Write a program that uses pointers to copy an array of integer.
#include<stdio.h>
int main(){
	int i,a[5]={1,2,3,4,5},b[5];
	int *ptr;
	ptr=a;
	for(i=0;i<5;i++){
		b[i]=*(ptr+i);
		
	}
	for(i=0;i<5;i++)
	{
	printf("%d\t",b[i]);
	}
	return 0;
}

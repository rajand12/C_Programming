//15. WAP to find smallest of N numbers using function.
#include<stdio.h>
int i;
int smallest(int *pointer,int n);
void main()
{
	int n,a[50];
	printf("how many numbers do you want to enter:\n");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d is smallest number:",smallest(a,n));
}
int smallest(int *pointer,int n){
	int min;
	min=*(pointer+0);
	for(i=0;i<n;i++){
	if(*(pointer+i)<min){
	min=*(pointer+i);
	}
}
return min;
	
}

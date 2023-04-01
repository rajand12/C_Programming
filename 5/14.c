//14. WAP to find largest of N numbers using function.
#include<stdio.h>
int i;
int largest(int *pointer,int n);
void main()
{
	int n,a[50];
	printf("how many numbers do you want to enter:\n");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d is largest number:",largest(a,n));
}
int largest(int *pointer,int n){
	int max;
	max=*(pointer+1);
	for(i=0;i<n;i++){
	if(*(pointer+i)>max){
	max=*(pointer+i);
	}
}
return max;
	
}

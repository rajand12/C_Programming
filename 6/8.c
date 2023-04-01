//8. Write a program to accept numbers and sort them with using pointers.
#include<stdio.h>
int main(){
	int a[100],n,i,j;
	int *ptr,temp;
	printf("how many numbers do you want to enter:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	ptr=a;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(*(ptr+j)>*(ptr+j+1))
			{
			temp=*(ptr+j+1);
			*(ptr+j+1)=*(ptr+j);
			*(ptr+j)=temp;
			}
		}
	}
	for(i=0;i<n;i++){
	printf("%d\n",*(ptr+i));
	}
return 0;
}

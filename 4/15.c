//Write a program to read N numbers and display only prime numbers.

#include<stdio.h>
int main()
{
	int i,j,n,num[100],prime[100],z,count=0,k=0;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	for(i=0;i<n;i++)
	
	{
		
		z=num[i];
		if(z==1){
		prime[k]=z;
			k++;	
		}
		count=0;
		if(z!=1)
		{
			for(j=1;j<=z;j++)
		{
			if(z% j==0)
			count++;	
		}
		if(count<=2)	
		{
			//printf("%d",z);
			prime[k]=z;
			k++;		
		}
	}
	}
	printf("Prime numbers in array:\n");
	for(j=0;j<k;j++)
		printf("%d  ",prime[j]);
	return 0;
}


//#include<stdio.h>
//int main(){
//	int a[100];
//	int n,i,j,c=0;
//	printf("Enter how many numbers do you want to enter::\n");
//	scanf("%d",&n);
//	printf("Enter the elements:\n");
//	for(i=0;i<n;i++){
//		scanf("%d",&a[i]);
//	
//	}
//	
//	for(i=0;i<n;i++){
//		c=0;
//		for(j=1;j<=a[i];j++){
//			if(a[i]%j==0){
//				c++;
//						}
//							}
//		if(c<=2){
//			printf("\n\n\n\n%d\n",a[i]);
//			c=0;
//		}
//	}
//	return 0;
//}

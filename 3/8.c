//Write a program to find the sum of square of first 'n' natural numbers using all loops.

#include<stdio.h>
int main()
{
//	int i=1,num,sum=0,z;
//	printf("Enter n: ");
//	scanf("%d",&num);
//	while(i<=num)
//	{
//		printf("%d\n",i);
//		z=i*i;
//		sum=sum+z;
//		i++;	
//	}
//	printf("The sum of square of first %d natural numbers is %d.",num,sum);
//	
	
//	int i,sum=0,num,z;
//	printf("Enter n: ");
//	scanf("%d",&num);
//	for(i=1;i<=num;i++)
//	{
//		printf("%d\n",i);
//		z=i*i;
//		sum=sum+z;
//	}
//	printf("The sum of square of first %d natural numbers is %d.",num,sum);

	int num,z,sum=0,i=1;
	printf("Enter n: ");
	scanf("%d",&num);
	do
	{
		//printf("%d\n",i);
		z=i*i;
		sum=sum+z;
		i++;	
	}
	while(i<=num);
	printf("The sum of square of first %d natural numbers is %d.",num,sum);
	return 0;
}

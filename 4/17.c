//Write a program to add two matrices by asking matrix order from user.

#include<stdio.h>
int main()
{
	int m,n,o,p,mat1[20][20],mat2[20][20],sum[20][20],i,j;
	printf("Enter the size of the first matrix(m n): ");
	scanf("%d %d",&m,&n);
	printf("Enter the size of the second matrix(o p): ");
	scanf("%d %d",&o,&p);
	if(m==o&&n==p)
	{
	printf("\nElements for first matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("Enter element at position [%d][%d]: ",i+1,j+1);
		scanf("%d",&mat1[i][j]);
		}
	}
	printf("\nElements for second matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		printf("Enter element at position [%d][%d]: ",i+1,j+1);
		scanf("%d",&mat2[i][j]);
		}
	}
	printf("Sum of two matrices:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		sum[i][j]=mat1[i][j]+mat2[i][j];
		printf("%d ",sum[i][j]);
		}
		printf("\n");
	}
}
	else
		printf("\nThe addition of the given matrices doesn't exist.");
	return 0;
}

//Write a program to find sum of diagonal elements of square matrix.

#include<stdio.h>
int main()
{
	int i,j,mat[20][20],m,sum=0;
	printf("Enter the order of square matrix (m only for order m*m):");
	scanf("%d",&m);
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("Element [%d][%d]: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("Given matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j)
			sum+=mat[i][j];	
		}	
	}
	printf("The sum of the diagonal elements of the given matrix is %d.",sum);
	return 0;
}

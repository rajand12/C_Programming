//Write a program to transpose a matrix.

#include<stdio.h>
int main()
{
	int mat[20][20],mat2[20][20],i,j,m,n;
	printf("Enter the size of the matrix(m n): ");
	scanf("%d %d",&m,&n);
	printf("Enter elements of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element [%d][%d]: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			mat2[i][j]=mat[j][i];
		}
	}
	printf("Given matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	printf("Transpose matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",mat2[i][j]);
		}
		printf("\n");
	}
	return 0;	
}

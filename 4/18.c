//Write a program to find the sum of rows and column of matrix.

#include<stdio.h>
int main()
{
	int m,n,i,j,mat[20][20],sum_row[20],sum_col[20],sum=0,sum2=0;
	printf("Enter the size of the matrix(m n): ");
	scanf("%d %d",&m,&n);
	printf("Enter elements of the matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Element[%d][%d]: ",i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	printf("The matrix you entered is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",mat[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			sum+=mat[i][j];
			sum_row[i]=sum;	
		}
		printf("\nThe sum of row %d is %d.",i+1,sum_row[i]);
		sum=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			sum2+=mat[j][i];
			sum_col[i]=sum2;
		}
		printf("\nThe sum of column %d is %d.",i+1,sum_col[i]);
		sum2=0;
	}
	return 0;
}

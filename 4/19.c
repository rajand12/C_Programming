/* Write a program to multiply matrices A and B.
A = 1 5 2
    3 4 6
    
    -1 1
B =  2 3
     5 2
*/
    
#include<stdio.h>
int main()
{
	int i,j,k;
	int a[2][3]={{1,5,2},{3,4,6}};
	int b[3][2]={{-1,1},{2,3},{5,2}};
	int c[2][2]={{0,0},{0,0}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<2;k++)
			{
				c[i][k]=c[i][k]+a[i][j]*b[j][k];
			}
				
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
	
}    
 


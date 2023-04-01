/*26.wap to generate the following figure.
  *
 ***
*****
 ***
  *
 */  
#include<stdio.h>
int main()
{
	int   i, j; //i for column and j for row 
	for(i=1;i<=3;i++)
	{
		for(j=i;j<=2;j++)
		printf(" ");
		for(j=1;j<=i;j++)
		printf("*");
		for(j=i;j>1;j--)
		printf("*");
		printf("\n");	
	}	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=i;j++)
		printf(" ");
		for(j=2;j>=i;j--)
		printf("*");
		for(j=i;j==1;j++)
		printf("*");
		printf("\n");
	}
	return 0;
}

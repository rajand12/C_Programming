/* Write a program to generate a following output:
*****
****
***
**
*    */

#include<stdio.h>
int main()
{
	int i,j;
	char c='*';
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
		printf("%c",c);
		}
		printf("\n");
	}
}

/*29.wap to generate the following figure::
123454321
 1234321
  12321
   121
    1
*/
#include<stdio.h>
int main()
{
	int i,j;//i for column and j for row
	for(i=5;i>=1;i--)
	{ 		//for column
		for(j=i;j<5;j++)
		printf(" ");
		for(j=1;j<i;j++)//for left part of the row 
			printf("%d",j);
		for(j=i;j>=1;j--)//for right part of the row
			printf("%d",j);
		
		printf("\n");
	}
}

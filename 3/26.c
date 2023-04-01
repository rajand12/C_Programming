/*wap to generate the following figure:
   * 
  ***
 *****
*******
*/

#include<stdio.h>
int main(){
	int i,j;
	char c='*';
	for(i=1;i<=4;i++)
	{
		for(j=i;j<=3;j++)
		{
			printf(" ");
		}
		for(j=1;j<i*2;j++)
		{
			printf("%c",c);
			
		}
		printf("\n");
	}
		

	return 0;
}

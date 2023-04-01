/*wap to generate the following figure::
ABCDEEDBCA
ABCD  DCBA
ABC    CBA
AB      BA
A        A
*/
#include<stdio.h>
int main(){
	int i,j;
	for(i=0;i<5;i++)
	{
		for(j=65;j<70-i;j++)
		printf("%c",j);
		for(j=0;j<i*2;j++)
		printf(" ");
		for(j=69-i;j>=65;j--)
		printf("%c",j);
		printf("\n");
	}
	return 0;	
}

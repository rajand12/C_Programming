/*Write a program to display multiplication table up to 'n' entered by user as:
1x1=1
1x2=2
...
...
1x10=10   */

#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter n: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%dx%d=%d\n",i,j,i*j);
		}
		printf("\n");
	}
}

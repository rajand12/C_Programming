//Design a layout of chess board using nested loop.
//Use ASCII 219 for white and 255 for black square box

#include<stdio.h>
int main()
{
	int i,j,a=219,b=255;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if((i+j)%2==0)
			//{
			printf("%c",a);
			//}
			else
			printf("%c",b);
		}
		printf("\n");
	}
	return 0;	
}

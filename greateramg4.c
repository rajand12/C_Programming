#include<stdio.h>
int main()
{
	int a,b,c,d,largest;
	printf("Please enter four numbers you want to find greatest of:  ");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	largest=(a>b)?(a>c)?(a>d)?a:d:(c>d)?c:d:(b>c)?(b>d)?b:d:(c>d)?c:d;
	printf("The largest number among %d %d %d and %d is %d.",a,b,c,d,largest);
	return 0; 
}

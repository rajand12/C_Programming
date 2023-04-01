/*Write A Program to compute size of structure and union.*/

#include<stdio.h>
struct data{
	char c[20];
	int i;
	float f;
};
union Data{
	char c[20];
	int i;
	float f;
};
int main()
{
	struct data d1;
	union Data d2;
	printf( "Memory size occupied by structure variable : %d\n", sizeof(d1));
	printf( "Memory size occupied by union variable : %d\n", sizeof(d2));
	return 0;
}

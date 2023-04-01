//19b.WAP to find sum of first N natural number using recursion.
#include<stdio.h>
int *p;
int sum(int ,int );
void main(){
	int i,n,summ=0,a[50];
printf("Enter how many first n natural number's sum do you want: ");
scanf("%d",&n);	
for(i=0;i<n;i++)
{
	a[i]=i+1;	
}
p=&a[0];
printf("Sum is %d",sum(n-1,summ));
}
int sum(int n,int summ){
	if(n>=0)
	{
		summ+=*(p+n);
		return sum(n-1,summ);
	}
	return summ;
}

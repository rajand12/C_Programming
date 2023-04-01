//19e. WAP to generate first n terms of Fibonacci series using recursive function to return N th term of series.
#include<stdio.h>
int fib(int n);
int main ()
{
  int i,n ;
  printf("Enter no of terms:\n");
  scanf("%d",&n);
  for(i=0;i<=n+1;i++)
  printf("%d\t", fib(i));
  return 0;
}
int fib(int n)
{
   	if (n <= 1)
	return n;
   	return fib(n-1) + fib(n-2);
}

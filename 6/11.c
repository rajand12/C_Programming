/*11. Write a program which accept a series of integer numbers from the user and
stores all odd numbers in a file name odd.txt and all even numbers in a file name
even.txt.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
int a[100],n,i;
FILE *ptr,*ptr1;
printf("How many numbers do you want to enter:\n");
scanf("%d",&n);
printf("Enter the numbers:\n");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
ptr= fopen("even.txt","w");
ptr1= fopen("odd.txt","w");
for(i=0;i<n;i++)
{
if(a[i]%2==0){
	fprintf(ptr,"%d\n",a[i]);
}
else
{
		fprintf(ptr1,"%d\n",a[i]);
	
}
}
fclose(ptr);
fclose(ptr1);
return 0;
}

/*13. Write a program to display following triangle of asterisk of N lines using function.
		*		
	   ***
      *****		
	 *******								
*/
#include<stdio.h>
void ast(int n,int i);
void main(){
	int i,num;
	printf("Enter how many lines do you want to print:\n");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		ast(num,i);
	}
}
void ast(int num,int i){
int j;
for(j=i;j<=num-1;j++){
			printf(" ");
		}
for(j=1;j<i*2;j++){
			printf("*");
		}
		printf("\n");
}

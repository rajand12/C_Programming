/*17. Write a program to add two matrices using user defined function. User read() function to read
element of matrix, display() element of matrix in matrix form and add() function to add
matrices.*/
#include<stdio.h>
	int i,j,a[25][25],b[25][25],sum[25][25],row,col;
void read();
void display();
void add();
void main(){
	printf("Enter the row and column of the matrix:\n");
	scanf("%d %d",&row,&col);
	read();
	add();
	display();
	}
void read(){
	printf("Enter the elements of the first matrix :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements of the second matrix :\n");
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&b[i][j]);
		}
	}
}
void add(){
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
		sum[i][j]=a[i][j]+b[i][j];
}
}
}
void display(){
	printf("Result matrix is:\n");
		for(i=0;i<row;i++){
		for(j=0;j<col;j++){
printf("%d\t",sum[i][j]);
}
printf("\n");
}
}

//16. WAP to arrange list of numbers in ascending order using function.(using bubble sort or selection sort)
#include<stdio.h>
int i;
void bsort(int *,int);
void main(){
	int arr[100],n;
	printf("how many numbers do you want to sort ::\n");
	scanf("%d",&n);
	printf("Enter numbers::\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
bsort(arr,n);
}
void bsort(int *p,int n){
	int j,t,temp1,temp2;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			temp1=*(p+j);
			temp2=*(p+j+1);
			if(temp1>temp2){
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;				
			}
		}
	}
	printf("Now printing the sorted values::\n");
	for(i=0;i<n;i++){
		printf("%d\n",*(p+i));
	}
	}

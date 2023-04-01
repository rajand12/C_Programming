#include<stdio.h>
#include<stdlib.h>
int main(){

    int *list_ptr=NULL;
    int n,i,largest,smallest;
    printf("How many numbers? ");
    scanf("%d",&n);
    list_ptr = (int *)malloc(n*sizeof(int));
    // input 'n' number in list
    printf("Enter %d numbers: ",n);
    for(i=0;i<n;i++){
        scanf("%d",(list_ptr+i));
    }
    // setting first value of list to largest
    largest = *list_ptr;
    // setting first value of list to smallest
    smallest = *list_ptr;
    // finding largest and smallest value
    for(i=1;i<n;i++){
        // comparing 
        if(largest<(*(list_ptr+i))){
            largest = *(list_ptr+i);
        }
        if(smallest>(*(list_ptr+i))){
            smallest = *(list_ptr+i);
        }
    }
    printf("Largest = %d\nSmallest = %d\n",largest,smallest);
    return 0;
}
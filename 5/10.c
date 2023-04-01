//10. WAP a program to calculate base raised to the power by using function.
#include<stdio.h>
int answer(int base,int power);
int main(){
	int base,power;
	printf("Enter base and power:\n");
	scanf("%d %d",&base,&power);
	printf("Answer is %d",answer(base,power));
	return 0;
}
int answer(int base,int power){
	int i ,ans=1;
	for(i=1;i<=power;i++){
		ans=ans*base;
	}
	return ans;
}


/* Write a program to read age of 20 peoples and count the numbers of child, teen, adult, young, and
   old. Given
   Age<13 -- CHILD
   Age>=13 and age<20 – TEEN
   Age>=20 and age<31 – ADULT
   Age>=31 and age<55 – YOUNG
   Age>=55 – OLD */
   
#include<stdio.h>
int main()
{
	int age[20],i,count_c=0,count_t=0,count_a=0,count_y=0,count_o=0;
	printf("Enter age of twenty people:\n");
	for(i=0;i<20;i++)
		scanf("%d",&age[i]);
	for(i=0;i<20;i++)
	{
		if(age[i]<13)
		count_c++;
		else if(age[i]>=13&&age[i]<20)
		count_t++;
		else if(age[i]>=20&&age[i]<31)
		count_a++;
		else if(age[i]>=31&&age[i]<55)
		count_y++;
		else
		count_o++;
	}
	printf("CHILD=%d\nTEEN=%d\nADULT=%d\nYOUNG=%d\nOLD=%d",count_c,count_t,count_a,count_y,count_o);
	return 0;
}

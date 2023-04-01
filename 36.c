//36. Write a program to sort {aman, akesh, anish, anam, anil, anju} in alphabetical order.
#include<stdio.h>
#include<string.h>
int main(){
	int i,j;
	
	char temp[6], name[6][6]={"aman","anam","anil","akesh","anju","anish"};
		for(i=0;i<6;i++)
	printf("%s\n",name[i]);

	for(i=0;i<6-1;i++)
	{
			for(j=0;j<6-1;j++)
			{
			
				if (strcmp(name[j],name[j+1])>0)
            	{
            		strcpy(temp,name[j]);	           
					strcpy(name[j],name[j+1]);
					strcpy(name[j+1],temp);
            	}
			}	
	}
		fflush(stdin);
		printf("The names in alphabetical order are::::\n");
		for(i=0;i<6;i++){
		printf("%s\n",name[i]);	
		}
	return 0;
}



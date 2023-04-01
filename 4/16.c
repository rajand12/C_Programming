/*Write a program to read salary of N employees and count the numbers of employee receiving salaries
  between 40000 to 60000. */
  
  #include<stdio.h>
  int main()
  {
	int i,salary[100],n,count=0;
	printf("Enter the number of employee:");
	scanf("%d",&n);
	printf("Enter salary of %d employee: ",n);
	for(i=0;i<n;i++)
		scanf("%d",&salary[i]);
	for(i=0;i<n;i++)
	{
		if(salary[i]>=40000&&salary[i]<60000)
		count++;
	}
	printf("The number of employee receiving salary between 40000 and 60000 is %d.",count);
	return 0;
  }

/*   5
    54
   543
  5432
 54321 */
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(k=i-1;k>=1;k--)
        {
            printf(" ");
        }
        for(j=5;j>=i;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

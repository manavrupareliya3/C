/*Print following pattern.
* * * * *
 * * * *
  * * *
   * *
    *                          
*/
#include<stdio.h>
void main(){
      
      int n,i,j;
      printf("enter the number of rows:");
      scanf("%d" ,&n);

      for(i=1;i<=n;i++)
      {
            for(j=1;j<=i-1;j++)
            {
                  printf(" ");
            }
            for(j=1;j<=(2*(n-i+1))-1;j++)
            {
                  if(j%2!=0)
                  {
                        printf("*");
                  }
                  else
                  {
                        printf(" ");
                  }
            }
            printf("\n");
      }
}
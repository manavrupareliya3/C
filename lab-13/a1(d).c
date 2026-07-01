/*Print following pattern.
          1
         1 2
        1 2 3
       1 2 3 4
      1 2 3 4 5
*/
#include<stdio.h>
void main(){
      
      int n,i,j,k;
      printf("enter the number of rows");
      scanf("%d" ,&n);

      for(i=1;i<=n;i++)
      {
            for(j=1;j<=n-i;j++)
            {
                  printf(" ");
            }
            k=1;
            for(j=1;j<=(2*i)-1;j++)
            {
                  if(j%2!=0)
                  {
                        printf("%d" ,k);
                        k++;
                  }
                  else
                  {
                        printf(" ");
                  }
            }
            printf("\n");
      }
}
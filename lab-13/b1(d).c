/*Print following pattern.
        1
       A B
      1 2 3
     C D E F
    1 2 3 4 5
*/
#include<stdio.h>
void main(){
      
      int n,i,j,k=1;
      char c='A';
      printf("enter the number of rows:");
      scanf("%d" ,&n);

      for(i=1;i<=n;i++)
      {
            for(j=1;j<=n-i;j++)
            {
                  printf(" ");
            }
            if(i%2==0)
           {
             for(j=1;j<=i;j++)
            {
                  printf("%c ",c);
                  c++;
            }
           }
           else
           {
             for(j=1;j<=i;j++)
            {
                  printf("%d " ,j);
            }
           }
            printf("\n");
      }
}
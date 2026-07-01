/*Print Pascal triangle.
          1
         1 1
        1 2 1
       1 3 3 1
      1 4 6 4 1 
*/
#include<stdio.h>
void main(){

    int n,i,j,val=1,k;
    printf("enter the number of rows:");
    scanf("%d" ,&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            printf(" ");
        }
        val=1;
        for(k=1;k<=i;k++)
        {
            printf("%d " ,val);
            val=val*(i-k)/(k);
        }
        printf("\n");
    }
}
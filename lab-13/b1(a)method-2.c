/*Print following pattern.
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1    */
#include<stdio.h>
void main(){

    int n,i,j,c=1;
    printf("enter the number of rows:");
    scanf("%d" ,&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(c%2==0)
            {
                printf("0 ");
            }
            else
            {
                printf("1 ");
            }
            c=c+1;
        }
        printf("\n");
    }
}
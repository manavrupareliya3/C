/*Print following pattern.
1
0 1
0 1 0
1 0 1 0
1 0 1 0 1    */
#include<stdio.h>
void main(){

    int n,i,j,temp=1;
    printf("enter the number of rows:");
    scanf("%d" ,&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d ",temp);
            if(temp==1)
            {
                temp=0;
            }
            else
            {
                temp=1;
            }
        }
        printf("\n");
    }
}
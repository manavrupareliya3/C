//Print the upper triangular matrix.
#include<stdio.h>
void main(){
    int n,i,j;
    printf("enter the size of 2-D array:");
    scanf("%d" ,&n);

    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            printf("enter the element of position %d*%d :\n" ,i,j);
            scanf("%d" ,a[i][j]);
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>j)
            a[i][j]=0;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d  " ,a[i][j]);
        }
        printf("\n");
    }
}
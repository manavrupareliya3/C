//Print Transpose of a matrix.
#include<stdio.h>
void main(){

    int a,b;
    printf("enter the size:");
    scanf("%d" ,&a);
    b=a;

    int m[a][b],n[a][b],i,j;
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            printf("enter the value:");
            scanf("%d" ,&m[i][j]);
        }
    }   
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            n[i][j]=m[j][i];
        }
        printf("\n");
    }
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            printf("%d " ,n[i][j]);
        }
        printf("\n");
    }   
}
//Read a matrix and print diagonal elements and its sum.
#include<stdio.h>
void main(){

    int a,b;
    printf("when array has size a*b then\n");
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    int m[a][b],i,j,sum=0;
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            printf("enter the value:");
            scanf("%d" ,&m[i][j]);
        }
    }
    for(i=0;i<b;i++)
    {
        printf("%d " ,m[i][i]);
        sum=sum+m[i][i];
    }
    printf("\ntrace=%d" ,sum);
}
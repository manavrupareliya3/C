//Add two matrix using pointers.
#include<stdio.h>
void main(){

    int a,b,i,j;
    printf("enter the size of arrays:");
    printf("enter the number of rows:");
    scanf("%d" ,&a);
    printf("enter the number of colunms:");
    scanf("%d" ,&b);
    printf("enter the values of first array:\n");
    int x[a][b],z[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("enter the value:");
            scanf("%d" ,&x[i][j]);
        }
    }

    printf("enter the values of second array:\n");
    int y[a][b];
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            printf("enter the value:");
            scanf("%d" ,&y[i][j]);
        }
    }
    int *p1,*p2,*p3;
    p1=x;
    p2=y;
    p3=z;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            z[i][j]=*(*(p1+i))+j+*(*(p2+i)+j);
        }
    }

}
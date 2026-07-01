//Read values in two-dimensional array and print them in matrix form.
#include<stdio.h>
void main(){

    int a,b;
    printf("when array has size a*b then\n");
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    int m[a][b],i,j;
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
            printf("%d " ,m[i][j]);
        }
        printf("\n");
    }   
}
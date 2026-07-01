//Perform Addition of two matrices.
#include<stdio.h>
void main(){

    int a,b;
    printf("when array has size a*b then\n");
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    int m[a][b],n[a][b],l[a][b],i,j;
    printf("enter first matrix inputs\n");
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            printf("enter the value:");
            scanf("%d" ,&m[i][j]);
        }
    }
    printf("enter second matrix inputs\n");
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            printf("enter the value:");
            scanf("%d" ,&n[i][j]);
        }
    }   
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            l[i][j]=m[i][j]+n[i][j];
        }
    } 
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            printf("%d  " ,l[i][j]);
        }
        printf("\n");
    }  
}
//Perform Multiplication of two matrices.
#include<stdio.h>
void main(){

    int a,b,c,d;
    printf("when the size of 2 metrices are a*b and b*d.\n");
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);
    printf("enter the value of d:");
    scanf("%d" ,&d);
    c=b;

    int m[a][b],n[a][b],l[a][d],i,j,s,x,sum=0;
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
            printf("enter the value:");
            scanf("%d" ,&n[i][j]);
        }
    }  
    for(i=0;i<a;i++)
    {   
        for(s=0;s<d;s++)
        {
            for(j=0;j<b;j++)
            {
                x=m[i][j]*n[s][j];
                sum=sum+x;
            }
            l[i][s]=sum;
            sum=0;
        }   
    }
    for(i=0;i<a;i++)
    {  
        for(j=0;j<b;j++)
        {
            printf("%d " ,l[i][j]);
        }
        printf("\n");
    }   
}
//Check a given matrix is a sparse matrix or not.
/*count the number of zero elements and compare it to the total number of elements. If the count of zeros is greater than half of the 
total elements, the matrix is sparse.*/
#include<stdio.h>
void main(){

    int a,b;
    printf("when array has size a*b then\n");
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    int m[a][b],i,j,c=0,d;
    d=a*b;
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
            if(m[i][j]==0)
            {
                c++;
            }
        }
    }
    if(c>(d/2))
    {
        printf("given matrix is a sparse matrix.");
    }
    else
    {
        printf("given matrix is not a sparse matrix");
    }
}
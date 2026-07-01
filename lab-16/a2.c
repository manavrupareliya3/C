//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
void main(){

    int a,b;
    printf("when array has size a*b then\n");
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    int m[a][b],i,j,pc,nc,zc;
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
                zc++;
            }
            else if(m[i][j]>=0)
            {
                pc++;
            }
            else
            {
                nc++;
            }
        }
    }  
    printf("number of zeros in array=%d\n" ,zc);
    printf("number of positive entry in array=%d\n" ,pc);
    printf("number of negative entry in array=%d\n" ,nc); 
}
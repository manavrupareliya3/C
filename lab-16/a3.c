//Read and store the roll no and marks of 20 students using 2D array.
#include<stdio.h>
void main(){

    int a,b;
    printf("enter the number of total student:");
    scanf("%d" ,&a);

    int m[a][2],i,j;
    for(i=0;i<a;i++)
    {  
        for(j=0;j<2;j++)
        {
            if(j==0)
            {
                printf("enter the roll number:");
            }
            else
            {
                printf("enter the marks:");
            }
            scanf("%d" ,&m[i][j]);
        }
    }  

    printf("rollno. marks\n");
    for(i=0;i<a;i++)
    {  
        for(j=0;j<2;j++)
        {
            printf("%d        " ,m[i][j]);
        }
        printf("\n");
    }
} 
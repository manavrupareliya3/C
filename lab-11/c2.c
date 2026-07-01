//Calculate xy without using power function and without using multiplication.
#include<stdio.h>
void main(){

    int i,j,x,y,sum=0,temp;
    printf(" for find xy\nenter the value of x:");
    scanf("%d" ,&x);
    printf("enter the value of y:");
    scanf("%d" ,&y);
    temp=x;

    for(i=1;i<y;i++)
    {
        sum=0;
        for(j=1;j<=temp;j++)
        {
            sum=sum+x;
        }
        x=sum;
    }

    printf("ans=%d" ,sum);
}
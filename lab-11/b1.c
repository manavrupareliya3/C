//Print the Fibonacci Series.
#include<stdio.h>
void main(){

    int i,n,a=0,b=1,c;
    printf("enter the vlue of n:");
    scanf("%d" ,&n);

    if(n>=3)
    {
        printf("%d,%d" ,a,b);
        for(i=1;i<=n-2;i++)
        {
            c=a+b;
            printf(",%d" ,c);
            a=b;
            b=c;
        }
    }

    else if(n==2)
    {
        printf("%d,%d" ,a,b);
    }

    else
    {
        printf("%d" ,a);
    }
}
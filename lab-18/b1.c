//Generate Fibonacci series of N given number using function name fibbo().
#include<stdio.h>
void fibbo(int);
void main (){
    int n;
    printf("enter the vlue of n:");
    scanf("%d" ,&n);

    fibbo(n);
}

void fibbo(int n)
{   int i,a=0,b=1,c;
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
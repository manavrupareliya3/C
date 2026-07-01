//Print sum of series 1 – 2 + 3 – 4 + 5 – 6 + 7 … n.
#include<stdio.h>
void main(){

    int n,i=1,sum=0;
    printf("enter the value of n:");
    scanf("%d" ,&n);

    while(i<=n)
    {
        if(i%2==0)
        {
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }

        i=i+1;
    }

    printf("ans=%d",sum);
}
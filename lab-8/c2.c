//Print sum of series 1 + 4 + 9 + 16 + 25 + 36 + …n.
#include<stdio.h>
void main(){

    int i=1,n,sum=0,a;
    printf("enter the value of n:");
    scanf("%d" ,&n);

    while(i<=n)
    {
        a=i*i;
        sum=sum+a;
        i=i+1;
    }
    printf("ans=%d",sum);
}
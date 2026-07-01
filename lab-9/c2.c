//Convert decimal number to binary. (i.e. n=11  output: 1011)
#include<stdio.h>
void main(){
    int n,x,c=0,a=0,b;
    printf("enter the number:");
    scanf("%d",&n);
    b=n;

    while(n!=0)
    {
        x=n%2;
        n=n/2;
        c=c*10+x;
    }

    while(c!=0)
    {
    x=c%10;
    c=c/10;
    a=a*10+x;
    }

    printf("ans=%d" ,a);

    while(b%2==0)
    {
        printf("0");
        b=b/2;
    }
}
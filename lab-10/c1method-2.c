//Check whether the given number is Armstrong or not.
#include<stdio.h>
#include<math.h>
void main(){

    int n,i=1,c=0,b,x,sum=0,ans=1,y;
    printf("enter the number:");
    scanf("%d" ,&n);
    b=n;
    y=n;

    while(n!=0)
    {
        c=c+1;
        n=n/10;
    }

    while(b!=0)
    {
        x=b%10;
        sum = sum + pow(x,c);
        b=b/10;
        
    }
    if(sum==y)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }
}
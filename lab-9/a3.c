//Calculate 𝑥𝑦 without using power function.
#include<stdio.h>
void main(){

    int i=1,x,y,ans=1;
    printf("enter the value of x:");
    scanf("%d" ,&x);
    printf("enter the value of y:");
    scanf("%d" ,&y);

    while(i<=y)
    {
        ans=ans*x;
        i=i+1;
    }
    printf("ans=%d" ,ans);
}
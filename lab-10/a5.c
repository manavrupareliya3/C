//Print given number in reverse order.
#include<stdio.h>
void main(){

    int n,y;
    printf("enter the number:");
    scanf("%d" ,&n);

    if(n==0)
    {
        printf("0");
    }

    while(n!=0)
    {
        y=n%10;
        printf("%d, " ,y);
        n=n/10;
    }
}
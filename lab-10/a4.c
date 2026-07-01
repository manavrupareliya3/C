//Print digits of given number.
#include<stdio.h>
void main(){

    int n,x,a=0,y,z,c;
    printf("enter the number:");
    scanf("%d" ,&n);
    c=n;
    if(c==0)
    {
        printf("0");
    }

    while(n!=0)
    {
        x=n%10;
        n=n/10;
        a=a*10+x;
    }

    while(a!=0)
    {
        y=a%10;
        printf("%d, " ,y);
        a=a/10;
    }
    if(c!=0)
    {
        while(c%10==0)
        {
            z=c%10;
            printf("%d" ,z);
            c=c/10;
        }
    }
}
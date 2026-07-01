//Find whether the given number is prime or not.
#include<stdio.h>
void main(){

    int n,i=2,c=0;
    printf("enter the number");
    scanf("%d" ,&n);

    while(i<n)
    {
        if(n%i==0)
        {
            c=c+1;
            printf("number is not prime");
            break;
        }
        else
        {
            i=i+1;
        }
    }

    if(c==0)
    {
        printf("number is prime");
    }
}
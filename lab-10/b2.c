//Find whether the given number is prime or not using flag.
#include<stdio.h>
void main(){

    int n,i=2,flag=0;
    printf("enter the number");
    scanf("%d" ,&n);

    while(i<n)
    {
        if(n%i==0)
        {
            flag=1;
        }
        i++;
    }

    if(flag==1)
    {
        printf("number is not prime");
    }

    else
    {
        printf("number is prime");
    }
}
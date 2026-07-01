//Check whether the given number is perfect or not.
#include<stdio.h>
void main(){

    int n,i=1,sum=0;
    printf("enter the number:");
    scanf("%d" ,&n);

    while(i<n)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }

        i=i+1;
    }

    if(sum==n)
    {
        printf("number is perfect number.");
    }
    else
    {
        printf("number is not perfect number.");
    }
}
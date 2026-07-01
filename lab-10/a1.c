//Find out sum of first and last digit of a given number.
#include<stdio.h>
void main(){

    int n,i,sum=0,k,ans,a;

    printf("enter the number:");
    scanf("%d" ,&n);

        a=n%10;
        n=n/10;
        sum=sum+a;

    while(n!=0)
    {
        if(n%100<=10)
        {
            k=n%100;
            ans=sum+k;
            n=0;
        }
        else
        {
            n=n/10;
        }
    }

    printf("sum of first and last digit=%d" ,ans);
}
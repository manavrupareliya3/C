//Check whether a number is prime, Armstrong or perfect number using functions. (create custom library)
#include<stdio.h>
void number(int);
void main(){
    int n;
    printf("enter the value of a:");
    scanf("%d" ,&n);

    number(n);
}
void number(int n)
{   
    int m,o;
    m=n;
    o=n;

    // for prime.
    int i=2,flag=0;
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
    
    // for Armstrong.
    int c=0,x,b,ans=1,i=1,sum=0;
    while(n!=0)
    {
        c=c+1;
        n=n/10;
    }

    while(b!=0)
    {
        x=b%10;
        b=b/10;

        while(i<=c)
        {
            ans=ans*x;
            i=i+1;
        }
        sum=sum+ans;
        ans=1;   
        i=1;    //for again enter in loop (ans and i) is need to make 1.
    }

    if(sum==m)
    {
        printf("number is armstrong");
        return 2;
    }
    else
    {
        printf("number is not armstrong");
    }

    // for perfact number.
    int i=1,sum=0;
    while(i<o)
    {
        if(o%i==0)
        {
            sum=sum+i;
        }

        i=i+1;
    }

    if(sum==0)
    {
        printf("number is perfect number.");
    }
    else
    {
        printf("number is not perfect number.");
    }

}
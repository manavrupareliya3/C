//Check whether the given number is palindrome or not.
#include<stdio.h>
void main(){

    int n,b,c=0,x;
    printf("enter the number:");
    scanf("%d" ,&n);
    b=n;

    while(n!=0)
    {
        x=n%10;
        n=n/10;
        c=c*10+x;
    }

    if(c==b)
    {
        printf("palindrome number");
    }
    else
    {
        printf("not a palindrome number");
    }

}
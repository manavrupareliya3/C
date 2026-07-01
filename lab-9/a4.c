//Find factorial of the given number.
#include<stdio.h>
void main(){

    int n,i=1,ans=1;
    printf("enter the value of n:");
    scanf("%d" ,&n);

    while(i<=n)
    {
        ans=ans*i;
        i=i+1;
    }
    printf("%d!=%d",n,ans);
}
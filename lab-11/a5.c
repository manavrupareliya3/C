//Find factorial of the given number.
#include<stdio.h>
void main(){

    int n,i,ans=1;
    printf("enter the value of n:");
    scanf("%d" ,&n);

    for(i=1;i<=n;i++)
    {
        ans=ans*i;
    }
    printf("%d!=%d",n,ans);
}
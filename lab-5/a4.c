//Check whether the given number is odd or even.
#include<stdio.h>
void main(){

    int a;
    printf("enter the value of a:");
    scanf("%d" ,&a);

    if(a%2==0)
    {
        printf("number is even");
    }
    else
    {
        printf("number is odd");
    }
}
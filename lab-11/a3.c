//Print multiplication table of a given number.
#include<stdio.h>
void main(){

    int i,n;
    printf("enter the value:");
    scanf("%d" ,&n);

    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n" ,n,i,n*i);
    }
}
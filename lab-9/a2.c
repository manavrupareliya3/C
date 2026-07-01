//Print multiplication table of a given number.
#include<stdio.h>
void main(){

    int i=1,n;
    printf("enter the value:");
    scanf("%d" ,&n);

    while(i<=10)
    {
        printf("%d*%d=%d\n" ,n,i,n*i);
        i=i+1;
    }
}
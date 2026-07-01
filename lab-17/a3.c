//Calculate sum of two numbers using pointer.
#include<stdio.h>
void main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    int *d,*e;
    d=&a;
    e=&b;
    printf("sum=%d" ,*d+*e);
}
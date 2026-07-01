//Swap value of two numbers using pointer.
#include<stdio.h>
void main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    int *p1,*p2,*temp;
    p1=&a;
    p2=&b;
    temp=p1;
    p1=p2;
    p2=temp;
    printf("a=%d b=%d" ,*p1,*p2);
}
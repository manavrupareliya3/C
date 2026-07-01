//Multiply and divide a number by 2 without using multiplication/division operator.
#include<stdio.h>
void main(){
    int a;
    printf("enter the value of a=");
    scanf("%d" ,&a);
    printf("mutiplication=%d",a<<1);
    printf("\ndivision=%d",a>>1);
}
//Swap two numbers using call by value and call by reference.
//call by value
#include<stdio.h>
void swap(int,int);
void main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d" ,&a);
    printf("enter the secind number:");
    scanf("%d" ,&b);

    swap(a,b);    
}
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("%d %d" ,a,b);
}
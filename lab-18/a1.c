//Add two numbers using function.
#include<stdio.h>
int sum(int,int);
void main(){
    int a,b;
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    printf("%d" ,sum(a,b));
}
int sum(int c,int d)
{
    int add=c+d;
    return add;
}
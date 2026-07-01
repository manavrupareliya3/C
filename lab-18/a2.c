//Find maximum and minimum between two numbers using function.
#include<stdio.h>
int comp(int,int);
void main(){
    int a,b,k;
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    k=comp(a,b);
    if(k==1)
    {
        printf("%d is maximum\n" ,a);
        printf("%d is mnimum\n" ,b);
    }
    else
    {
        printf("%d is maximum\n" ,b);
        printf("%d is minimum\n" ,a);
    }
}
int comp(int c,int d)
{   int e;
    e=(c>d)?(1):(0);
    return e;
}
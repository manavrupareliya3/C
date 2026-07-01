//Print odd numbers between 1 to 10 then modify 1 to n using do while loop.
#include<stdio.h>
void main(){

    int i=1,n;
    printf("enter the value of n:");
    scanf("%d" ,&n);

    do
    {
        printf("%d\n",i);
        i=i+2;
    }
    while(i<=n);
}
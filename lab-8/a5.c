//Get 10 numbers from user print count of odd, even numbers
#include<stdio.h>
void main(){

    int i=1,a,c1=0,c2=0;

    while(i<=10)
    {
        printf("enter the value:");
        scanf("%d" ,&a);
        if(a%2==0)
        {
            c1=c1+1;
        }
        else
        {
            c2=c2+1;
        }
        i=i+1;
    }
    printf("there are %d odd numbers\nthere are %d even numbers" ,c2,c1);
}
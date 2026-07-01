//Print numbers between two given numbers which is divisible by 2.
#include<stdio.h>
void main(){

    int a,b,i;
    printf("enter the value of a,b:");
    scanf("%d %d" ,&a,&b);

    i=a;
    while(i<=b)
    {
        if(i%2==0)
        {
            printf("%d\n" ,i);
        }
        i=i+1;
    }


}
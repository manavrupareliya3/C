//Swap first and last digits of a number.
#include<stdio.h>
void main(){

    int n,i,l,f,counter=1,a;
    printf("enter the number:");
    scanf("%d" ,&n);
    a=n;

    l=n%10;

    for(n=n;n!=0;n=n/10)
    {
        counter=counter*10;
    }

    counter=counter/10;  // when number is 123 so counter is 1000 but we need to make 100.
    f=a/counter;

    // for last number modification.
    a=a/10;
    a=a*10+f;

    // for first number modification.

    a=a%counter;
    a=l*counter+a;

    printf("%d" ,a);
}
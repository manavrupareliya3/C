//Input an integer number and check the last digit of number is even or odd.

#include<stdio.h>
void main(){

int a;
printf("enter the number:");
scanf("%d",&a);
a=a%10;
if(a%2==0)
    {
        printf("even");
    }
else
    {
        printf("odd");
    }
}
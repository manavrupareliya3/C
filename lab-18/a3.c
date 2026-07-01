//Count simple interest using function.
#include<stdio.h>
float interest(int,int,int);
void main(){
    int a,rate,time;
    printf("enter the amount :");
    scanf("%d" ,&a);
    printf("enter rate of interest :");
    scanf("%d" ,&rate);
    printf("enter the time :");
    scanf("%d" ,&time);
    
    printf("%f" ,interest(a,rate,time));
}
float interest(int b,int c,int d)
{
    float i=(b+c+d)/100.0;
    return i;
}
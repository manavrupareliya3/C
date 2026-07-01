//Convert number of days into year, week & days. [e.g. 375 days mean 1 year, 1 week and 3 days]
#include<stdio.h>
void main(){

    int a,y,w,d;
    printf("enter days:");
    scanf("%d" ,&a);

    y=a/365;
    w=(a-(y*365))/7;
    d=a-(y*365)-(w*7);

    printf("%d year , %d week and %d day" ,y,w,d);
}
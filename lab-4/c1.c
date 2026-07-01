//Convert seconds into hours, minutes & seconds and print in HH:MM: SS. [e.g. 10000 seconds =02:46:40)]
#include<stdio.h>
void main(){

    int a,h,m,s;
    printf("enter seconds:");
    scanf("%d" ,&a);

    h=a/3600;
    m=(a-(h*3600))/60;
    s=a-(h*3600)-(m*60);

    printf("%d:%d:%d" ,h,m,s);
}
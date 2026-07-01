//Demonstrate int, float, double and char pointer.
#include<stdio.h>
void main(){
    int a=5,*ap;
    ap=&a;
    float b=5.5555,*bp;
    bp=&b;
    double c=5.123456789,*cp;
    cp=&c;
    char d='A',*dp;
    dp=&d;

    printf("%d %d\n" ,ap,*ap);
    printf("%d %f\n" ,bp,*bp);
    printf("%d %lf\n" ,cp,*cp);
    printf("%d %c\n" ,dp,*dp);
}
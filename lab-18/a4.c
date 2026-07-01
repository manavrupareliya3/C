//Return the maximum of three floating-point numbers.
#include<stdio.h>
float max(float,float,float);
void main(){
    float a,b,c;
    printf("enter the value of a:");
    scanf("%f" ,&a);
    printf("enter the value of b:");
    scanf("%f" ,&b);
    printf("enter the value of c:");
    scanf("%f" ,&c);

    printf("%f is maximum." ,max(a,b,c));
}
float max(float a,float b,float c)
{   float m;
    m=(a>b)?((a>c)?(a):(c)):((b>c)?(b):(c));
    return m;
}
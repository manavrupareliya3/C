//Swap two numbers. (with Using temporary variable)
#include<stdio.h>
void main(){
    float a,b,c;
    printf("enter the value of a=");
    scanf("%f" ,&a);
    printf("enter the value of b=");
    scanf("%f" ,&b);
    c=a;
    a=b;
    b=c;
    printf("a=%f",a);
    printf("b=%f",b);
}
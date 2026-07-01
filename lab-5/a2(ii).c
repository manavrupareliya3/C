//Swap two numbers. (without Using temporary variable)
#include<stdio.h>
void main(){
    float a,b;
    printf("enter the value of a=");
    scanf("%f" ,&a);
    printf("enter the value of b=");
    scanf("%f" ,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("a=%f",a);
    printf("b=%f",b);
}
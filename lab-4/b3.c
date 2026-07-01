//Print temperature from Fahrenheit to Celsius. (Formula: c=(((f-32)*5))/9)
#include<stdio.h>
void main(){
 float f;
 printf("enter the value of f=");
 scanf("%f",&f);
 printf("celsius=%f",(((f-32)*5))/9);
}

/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as 
per user’s choice using switch.*/

#include<stdio.h>
void main(){

float a,b;
char o;
printf("enter the value a,operater and b:");
scanf("%f",&a); 
scanf("%c",&o);
scanf("%f",&b);


switch (o){
    case '+':
    printf("ans=%f" ,a+b);
    break;

     case '-':
    printf("ans=%f" ,a-b);
    break;

     case '*':
    printf("ans=%f" ,a*b);
    break;

     case '/':
    printf("ans=%f" ,a/b);
    break;

     default:
    printf("invalid operater");
    break;
}
}
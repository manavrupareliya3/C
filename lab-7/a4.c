//Find out largest number from given 3 numbers using conditional operator.
#include<stdio.h>
void main(){

float a,b,c,max;
printf("enter the value of a:");
scanf("%f",&a); 
printf("enter the value of b:");
scanf("%f",&b);
printf("enter the value of c:");
scanf("%f",&c);

max=(a>b)?((a>c)?a:c):((b>c)?b:c);

printf("max=%f" ,max);
}
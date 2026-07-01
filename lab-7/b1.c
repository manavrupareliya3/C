/*Read 3 numbers, multiply largest number from first two numbers to third one 
using conditional.*/

#include<stdio.h>
void main(){

float a,b,c,ans;

printf("enter the value of a:");
scanf("%f",&a); 
printf("enter the value of b:");
scanf("%f",&b);
printf("enter the value of c:");
scanf("%f",&c);

(a>b)?(ans=a):(ans=b);
ans=ans*c;
printf("%f" ,ans);

}
/*Check whether number is even number or odd number using conditional 
operator.*/

#include<stdio.h>
void main(){

int a,ans;
printf("enter the value of a:");
scanf("%d",&a);

(a%2==0)?printf("even"):printf("odd");
}
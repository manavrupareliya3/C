//Check whether the given number is odd or even without using % operator.
#include<stdio.h>
void main(){
int a,c;

printf("enter the value of a=");
scanf("%d",&a);
c=a/2;
c=c*2;
if(a==c)
{
printf("even");
}
else
{
    printf("odd");
}
}
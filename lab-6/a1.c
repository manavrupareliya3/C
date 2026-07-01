/*Perform Addition, Subtraction, Multiplication and Division of 2 numbers as
per user’s choice.*/
#include<stdio.h>
void main(){
float a,b,ans;
char d;

printf("enter a,operater and b:");
scanf("%f %C %f",&a ,&d ,&b);


if(d=='+')
{printf("ans=%f" ,a+b);
}
else if(d=='-')
{
printf("ans=%f" ,a-b);    
}
else if(d=='*')
{
printf("ans=%f" ,a*b);    
}
else if(d=='/')
{
printf("ans=%f" ,a/b);    
}
else{
    printf("invaild operater");
}
}
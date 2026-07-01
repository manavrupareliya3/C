/*Estimate the value of the mathematical constant 
e. (Formula: 𝑒=1+(1/1!)+(1/2!)+(1/3!)+(1/4!)…)*/
#include<stdio.h>
#include<math.h>
void main(){

    float n,i,j,ans=1,sum=0;
    double f;
    printf("enter the value of n:");
    scanf("%f" ,&n);

    for(i=1;i<=n;i++)
    {
        f=tgamma(i);  // when you find n! so the function is tgamma(n+1); is given factorial of n
        ans=1/(f);
        sum=sum+ans;
    }
    printf("%f" ,sum);
}
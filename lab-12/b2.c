/*Estimate the value of the mathematical constant 
e. (Formula: 𝑒=1+(1/1!)+(1/2!)+(1/3!)+(1/4!)…)*/
#include<stdio.h>
void main(){

    float n,i,j,ans=1,f=1,sum=1;  // hear sum=1 because we start the process from second term.
    printf("enter the value of n:");
    scanf("%f" ,&n);

    for(i=2;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            f=f*j;
        }
        ans=1/f;
        sum=sum+ans;
    }
    printf("%f" ,sum);
}
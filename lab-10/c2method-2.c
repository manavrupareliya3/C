//Find HCF and LCM of two numbers.
#include<stdio.h>
void main(){

    int i=1,a,b,min,lcm,hcf;
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    min=(a<b)?(a):(b);

    // for hcf
    while(i<=min)
    {
        if(a%i==0 && b%i==0)
        {
            hcf=i;
        }
        i++;
    }
    printf("HCF=%d\n" ,hcf);

    lcm=(a*b)/hcf;

    printf("LCM=%d" ,lcm);
}
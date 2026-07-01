//Find HCF and LCM of two numbers.
#include<stdio.h>
void main(){

    int i=1,a,b,min,max,lcm,hcf,m;
    printf("enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    min=(a<b)?(a):(b);
    max=(a>b)?(a):(b);
    m=a*b;

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

    i=max;  //for using i again in lcm.

    while(i<=m)
    {
        if(i%a==0 && i%b==0)
        {
            lcm=i;
            break;
        }
    }
    printf("LCM=%d" ,lcm);


}
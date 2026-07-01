/*Calculate sum and average of the square of ƒrst 10 integers whose square 
has last digit 9.*/

#include<stdio.h>
void main(){
    
    float i=1,sum=0,c=0;
    int a;

    while(i<=10)
    {
        a=i*i;
        if(a%10==9)
        {
            sum=sum+a;
            c=c+1;
        }
        i=i+1;
    }

    printf("sum=%f\navg=%f" ,sum,(sum/c));

}
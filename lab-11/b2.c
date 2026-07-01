//Count frequency of digits in an integer.
#include<stdio.h>
void main(){

    int n,x,counter,digit,temp,d,rem,rev=0,y;
    printf("enter the number:");
    scanf("%d" ,&n);
    temp=n;

    printf("frequency of digits:\n");
    
    for(digit=0;digit<=9;digit++)
    {
        counter=0;
        for(n=n;n!=0;n=n/10)
        {
            x=n%10;
            if(x==digit)
            {
                counter=counter+1;
            }
        }
        printf("digit %d occurs %d times\n" ,digit,counter);
        n=temp;
    }
}
//Convert given number in words. (i.e. n=3456  output: Three Four Five Six) 
#include<stdio.h>
void main(){

    int n,i,a=0,x,b;
    printf("enter the number:");
    scanf("%d" ,&n);
    b=n;
    while(n!=0)
       {
         x=n%10;
         n=n/10;
         a=a*10+x;
       }

    while(a!=0)
    {
        x=a%10;
        a=a/10;

        if(x==9)
        {
            printf("Nine");

        }

        else if(x==8)
        {
            printf("eight ");
            
        }

        else if(x==7)
        {
            printf("seven ");
            
        }

        else if(x==6)
        {
            printf("six ");
            
        }

        else if(x==5)
        {
            printf("five ");
            
        }

        else if(x==4)
        {
            printf("four ");
            
        }

        else if(x==3)
        {
            printf("three ");
            
        }

        else if(x==2)
        {
            printf("two ");
            
        }

        else if(x==1)
        {
            printf("one ");
            
        }

        else if(x==0)
        {
            printf("zero ");
            
        }
    }
    x=0;
    while(x==0)
    {
        x=b%10;
        b=b/10;
        if(x==0)
        {
            printf("zero ");
        }
    }

}
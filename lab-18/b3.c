//Find all prime numbers between given interval using functions.
#include<stdio.h>
void printprime(int,int);
void main(){
    int a,b;
    printf("enter the first number:");
    scanf("%d" ,&a);
    printf("enter the second number:");
    scanf("%d" ,&b);

    printprime(a,b);
}
void printprime(int a,int b)
{
    int i,flag,j=2;
    for(i=a;i<=b;i++)
    {
        while(j<i)
        {
            if(i%j==0)
            {
                flag=1;
            }
            j++;
        }

        if(flag!=1)
        {   
            printf("%d " ,i);
        }
    }   
}
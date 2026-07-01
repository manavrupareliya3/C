/*Take two numbers input from user and perform a multiplication without using a 
* operator.*/

#include<stdio.h>
void main(){

    int a,b,i=1,ans=0;
    printf("enter the value of a and b");
    scanf("%d %d" ,&a,&b);

    while(i<=b)
    {
        ans=ans+a;
        i=i+1;
    }
    printf("a*b=%d" ,ans);
}
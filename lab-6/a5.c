/*Read marks of five subjects. Calculate percentage and print class accordingly.
Fail below 35, Pass Class between 36 to 45, Second Class between 46 to 60,
First Class between 61 to 70, Distinction if more than 70.*/
 
#include<stdio.h>
void main(){

int a,b,c,d,e,per;
    printf("enter the mark of a out of 100=");
    scanf("%d",&a);
    printf("enter the mark of b out of 100=");
    scanf("%d",&b);
    printf("enter the mark of c out of 100=");
    scanf("%d",&c);
    printf("enter the mark of d out of 100=");
    scanf("%d",&d);
    printf("enter the mark of e out of 100=");
    scanf("%d",&e);
per=(a+b+c+d+e)/5;
if(per<=35)
    {
        printf("fail");
    }
else if(per>35 && per<=45)
    {
        printf("pass class");
    }
else if(per>45 && per<=60)
    {
        printf("second class");
    }
 else if(per>60 && per<=70)
    {
        printf("first class");
    }
    
else
    {
        printf("distinction");
    }
}

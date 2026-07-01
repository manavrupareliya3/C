//Find the second largest number among three user input numbers.

#include<stdio.h>
void main(){
    
    float a,b,c;
    printf("enter the value of a:");
    scanf("%f" ,&a);
    printf("enter the value of b:");
    scanf("%f" ,&b);
    printf("enter the value of c:");
    scanf("%f" ,&c);

    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
            {
                printf("second largest value=%f" ,b);
            }
            else
            {
                printf("second largest value=%f" ,c);
            }
        }
        else
        {
           printf("second largest number=%f" ,a) ;
        }
    }
    else
    {
        if(b>c)
        {
            if(a>c)
            {
                printf("second largest value=%f" ,a);
            }
            else
            {
                printf("second largest value=%f" ,c);
            }
        }
        else
        {
           printf("second largest value=%f" ,b);
        }
    }
}
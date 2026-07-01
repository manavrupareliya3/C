//Find out largest number from given three numbers.
#include<stdio.h>
void main(){
    float a,b,c;
    printf("enter the value of a=");
    scanf("%f" ,&a);
    printf("enter the value of b=");
    scanf("%f" ,&b);
    printf("enter the value of b=");
    scanf("%f" ,&c);
if(a>b)
{
    if(a>c)
    {printf("largest number=%f",a);
    }
    else
    {
        printf("largest number=%f" ,c);
    }
}
else
{if(b>c)
    {printf("largest number=%f",b);
    }
    else
    {
        printf("largest number=%f" ,c);
    }
}
}
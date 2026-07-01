/*Get a decimal number from user and convert it into roman digits. (Symbol: I:1, IV:4, V:5, IX:9, 
X:10, XL:40, L:50, XC:90, C:100, CD:400, D:500, CM:900, M:1000) */
#include<stdio.h>
void main(){

    int n,i;
    printf("enter the number:");
    scanf("%d",&n);

    i=n;
    while(i!=0)
    {
        if(i>=4000)
        {
            printf("out of range");
            break;
        }
        else if(i>=1000)
        {
            printf("M");
            i=i-1000;
        }

        else if(i>=900)
        {
            printf("CM");
            i=i-900;
        }

        else if(i>=500)
        {
            printf("D");
            i=i-500;
        }

        else if(i>=400)
        {
            printf("CD");
            i=i-400;
        }

        else if(i>=100)
        {
            printf("C");
            i=i-100;
        }

        else if(i>=90)
        {
            printf("XC");
            i=i-90;
        }

        else if(i>=50)
        {
            printf("L");
            i=i-50;
        }

        else if(i>=40)
        {
            printf("XL");
            i=i-40;
        }

        else if(i>=10)
        {
            printf("X");
            i=i-10;
        }

        else if(i>=9)
        {
            printf("IX");
            i=i-9;
        }

        else if(i>=5)
        {
            printf("V");
            i=i-5;
        }

        else if(i>=4)
        {
            printf("IV");
            i=i-4;
        }

        else if(i>=1)
        {
            printf("I");
            i=i-1;
        }
    }
}
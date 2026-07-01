//Print all uppercase and lowercase alphabets.
#include<stdio.h>
void main(){

    char i='a',p='A';

    while(i<='z')
    {
        printf("%c, " ,i);
        i=i+1;
    }

    printf("\n");

    while(p<='Z')
    {
        printf("%c, " ,p);
        p=p+1;
    }
}
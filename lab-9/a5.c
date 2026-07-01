//Find factors of the given number.
#include<stdio.h>
void main(){

    int n,i=1;
    printf("when you find the factor of n then enter the value of n:");
    scanf("%d" ,&n);

    while (i<=n)
    {
        if(n%i==0)
        {
            printf("%d\n" ,i);
            i=i+1;
        }
        else
        {
            i=i+1;
        }
    }

}
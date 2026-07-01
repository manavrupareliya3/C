//Print 1 to 10 then modify program Print 1 to n using while loop.
#include<stdio.h>
void main(){

    int i=1,n;
    printf("enter the value of n:");
    scanf("%d" ,&n);

    while(i<=n)
    {
        printf("%d\n",i);
        i=i+1;
    }

}
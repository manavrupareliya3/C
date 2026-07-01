//Print 1 to 10 then modify program Print 1 to n using do while loop.
#include<stdio.h>
void main(){

    int i=1,n;
    printf("enter the value of n:");
    scanf("%d" ,&n);

    do
    {
        printf("%d\n",i);
        i=i+1;
    }
    while (i<=n); 

}

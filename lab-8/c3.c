/*Take two numbers input from user and perform a division operation and find 
out quotient and reminder (without using / and % operator) also note that a 
smaller number should divide a bigger number.*/

#include<stdio.h>
void main(){

    int a,b,c=0;
    printf("when perform a/b(hear a is always bigger then b.) then enter the value of a:");
    scanf("%d" ,&a);
    printf("enter the value of b:");
    scanf("%d" ,&b);

    while(a>=b)
    {
        a=a-b;
        c=c+1;
    }
    printf("%d is quotient\n%d is reminder" ,c,a);
}
//Determine the roots of the equation ax2+bx+c=0.

#include<stdio.h>
#include<math.h>
void main(){

float a,b,c,root1,root2,D;
printf("when the equation is ax2+bx+c then, \nenter the value of a:");
scanf("%f" ,&a);
printf("enter the value of b:");
scanf("%f" ,&b);
printf("enter the value of c:");
scanf("%f" ,&c);

D=sqrt((b*b)-(4*a*c));
if(D>=0)
{
    root1=(-b+D)/2*a;
    root2=(-b-D)/2*a;

    printf("root1=%f" ,root1);
    printf("\nroot2=%f" ,root2);
}
else
{
    printf("no real solution");
}
}
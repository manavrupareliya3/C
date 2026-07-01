/*Three sides of a triangle are entered through the keyboard, WAP to check
whether the triangle is isosceles, equilateral, scalene or right-angled
triangle.*/
  
#include<stdio.h>
void main(){

    float a,b,c;
    printf("enter the length of side a:");
    scanf("%f" ,&a);
    printf("enter the length of side b:");
    scanf("%f" ,&b);
    printf("enter the length of side c:");
    scanf("%f" ,&c);

    if(a==b && b==c) //for equilateral
    {
        printf("equilateral triangle");
    }
    else if(a==b || b==c || c==a)
    {
        printf("isosceles triangle");
    }
    else if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(b*b)+(a*a))
    {
        printf("right-angled triangle");
    }
    else
    {
        printf("scalene triangle"); // scalene= visam baju
    }
}
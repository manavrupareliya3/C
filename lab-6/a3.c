/*Check whether the entered character is upper case, lower case, digit or any special character.*/

#include<stdio.h>
void main(){

char c;
printf("enter the character:");
scanf("%c",&c);

if(c>='a'&& c<='z')
    {
        printf("lower case");
    }
else if(c>='A'&& c<='Z')
    {
        printf("upper case");
    }
else if(c=='1'|| c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9'||c=='0')
    {
        printf("digit");
    }
else
    {
        printf("special character");
    }
}